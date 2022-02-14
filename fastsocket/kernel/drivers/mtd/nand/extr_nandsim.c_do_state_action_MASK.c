
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ pgnum; int pgszoob; int pgsz; unsigned int pgsec; int pgaddrbytes; int secaddrbytes; unsigned int secshift; unsigned int pgshift; int secsz; } ;
struct TYPE_5__ {scalar_t__ row; int column; int off; int count; } ;
struct TYPE_4__ {int wp; } ;
struct nandsim {int busw; int options; TYPE_3__ geom; TYPE_2__ regs; TYPE_1__ lines; } ;




 int VAR_0 ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nandsim*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct nandsim*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct nandsim*,int) ;
 int VAR_7 ;
 int FUNC_10 (struct nandsim*,int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;

__attribute__((used)) static int FUNC_13(struct nandsim *VAR_8, uint32_t VAR_9)
{
 int VAR_10;
 int VAR_11 = VAR_8->busw == 8 ? 1 : 2;
 unsigned int VAR_12, VAR_13;

 VAR_9 &= VAR_0;


 if (VAR_9 != 129 && VAR_8->regs.row >= VAR_8->geom.pgnum) {
  FUNC_6("do_state_action: wrong page number (%#x)\n", VAR_8->regs.row);
  return -1;
 }

 switch (VAR_9) {

 case 133:





  if (VAR_8->regs.column >= (VAR_8->geom.pgszoob - VAR_8->regs.off)) {
   FUNC_1("do_state_action: column number is too large\n");
   break;
  }
  VAR_10 = VAR_8->geom.pgszoob - VAR_8->regs.off - VAR_8->regs.column;
  FUNC_10(VAR_8, VAR_10);

  FUNC_0("do_state_action: (ACTION_CPY:) copy %d bytes to int buf, raw offset %d\n",
   VAR_10, FUNC_4(VAR_8) + VAR_8->regs.off);

  if (VAR_8->regs.off == 0)
   FUNC_2("read page %d\n", VAR_8->regs.row);
  else if (VAR_8->regs.off < VAR_8->geom.pgsz)
   FUNC_2("read page %d (second half)\n", VAR_8->regs.row);
  else
   FUNC_2("read OOB of page %d\n", VAR_8->regs.row);

  FUNC_5(VAR_2);
  FUNC_5(VAR_5 * VAR_8->geom.pgsz / 1000 / VAR_11);

  break;

 case 129:




  if (VAR_8->lines.wp) {
   FUNC_1("do_state_action: device is write-protected, ignore sector erase\n");
   return -1;
  }

  if (VAR_8->regs.row >= VAR_8->geom.pgnum - VAR_8->geom.pgsec
   || (VAR_8->regs.row & ~(VAR_8->geom.secsz - 1))) {
   FUNC_1("do_state_action: wrong sector address (%#x)\n", VAR_8->regs.row);
   return -1;
  }

  VAR_8->regs.row = (VAR_8->regs.row <<
    8 * (VAR_8->geom.pgaddrbytes - VAR_8->geom.secaddrbytes)) | VAR_8->regs.column;
  VAR_8->regs.column = 0;

  VAR_12 = VAR_8->regs.row >> (VAR_8->geom.secshift - VAR_8->geom.pgshift);

  FUNC_0("do_state_action: erase sector at address %#x, off = %d\n",
    VAR_8->regs.row, FUNC_4(VAR_8));
  FUNC_2("erase sector %u\n", VAR_12);

  FUNC_8(VAR_8);

  FUNC_3(VAR_4);

  if (VAR_3)
   FUNC_11(VAR_12);

  if (FUNC_7(VAR_12)) {
   FUNC_6("simulating erase failure in erase block %u\n", VAR_12);
   return -1;
  }

  break;

 case 130:




  if (VAR_8->lines.wp) {
   FUNC_6("do_state_action: device is write-protected, programm\n");
   return -1;
  }

  VAR_10 = VAR_8->geom.pgszoob - VAR_8->regs.off - VAR_8->regs.column;
  if (VAR_10 != VAR_8->regs.count) {
   FUNC_1("do_state_action: too few bytes were input (%d instead of %d)\n",
     VAR_8->regs.count, VAR_10);
   return -1;
  }

  if (FUNC_9(VAR_8, VAR_10) == -1)
   return -1;

  VAR_13 = VAR_8->regs.row;

  FUNC_0("do_state_action: copy %d bytes from int buf to (%#x, %#x), raw off = %d\n",
   VAR_10, VAR_8->regs.row, VAR_8->regs.column, FUNC_4(VAR_8) + VAR_8->regs.off);
  FUNC_2("programm page %d\n", VAR_8->regs.row);

  FUNC_5(VAR_7);
  FUNC_5(VAR_6 * VAR_8->geom.pgsz / 1000 / VAR_11);

  if (FUNC_12(VAR_13)) {
   FUNC_6("simulating write failure in page %u\n", VAR_13);
   return -1;
  }

  break;

 case 128:
  FUNC_0("do_state_action: set internal offset to 0\n");
  VAR_8->regs.off = 0;
  break;

 case 132:
  if (!(VAR_8->options & VAR_1)) {
   FUNC_1("do_state_action: BUG! can't skip half of page for non-512"
    "byte page size 8x chips\n");
   return -1;
  }
  FUNC_0("do_state_action: set internal offset to %d\n", VAR_8->geom.pgsz/2);
  VAR_8->regs.off = VAR_8->geom.pgsz/2;
  break;

 case 131:
  FUNC_0("do_state_action: set internal offset to %d\n", VAR_8->geom.pgsz);
  VAR_8->regs.off = VAR_8->geom.pgsz;
  break;

 default:
  FUNC_0("do_state_action: BUG! unknown action\n");
 }

 return 0;
}
