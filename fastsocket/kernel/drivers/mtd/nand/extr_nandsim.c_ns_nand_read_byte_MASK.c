
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u_char ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ count; scalar_t__ num; scalar_t__ row; } ;
struct TYPE_7__ {scalar_t__ pgnum; } ;
struct TYPE_6__ {int* byte; int * word; } ;
struct TYPE_5__ {scalar_t__ cle; scalar_t__ ale; int ce; } ;
struct nandsim {int state; int busw; int* ids; int options; int nxstate; TYPE_4__ regs; TYPE_3__ geom; TYPE_2__ buf; TYPE_1__ lines; } ;
struct nand_chip {scalar_t__ priv; } ;
struct mtd_info {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int ,...) ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nandsim*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct nandsim*) ;

__attribute__((used)) static u_char FUNC_9(struct mtd_info *VAR_5)
{
        struct nandsim *VAR_6 = (struct nandsim *)((struct nand_chip *)VAR_5->priv)->priv;
 u_char VAR_7 = 0x00;


 if (!VAR_6->lines.ce) {
  FUNC_2("read_byte: chip is disabled, return %#x\n", (uint)VAR_7);
  return VAR_7;
 }
 if (VAR_6->lines.ale || VAR_6->lines.cle) {
  FUNC_2("read_byte: ALE or CLE pin is high, return %#x\n", (uint)VAR_7);
  return VAR_7;
 }
 if (!(VAR_6->state & VAR_2)) {
  FUNC_4("read_byte: unexpected data output cycle, state is %s "
   "return %#x\n", FUNC_7(VAR_6->state), (uint)VAR_7);
  return VAR_7;
 }


 if (FUNC_3(VAR_6->state) == VAR_3) {
  FUNC_1("read_byte: return %#x status\n", VAR_6->regs.status);
  return VAR_6->regs.status;
 }


 if (VAR_6->regs.count == VAR_6->regs.num) {
  FUNC_4("read_byte: no more data to output, return %#x\n", (uint)VAR_7);
  return VAR_7;
 }

 switch (FUNC_3(VAR_6->state)) {
  case 129:
   if (VAR_6->busw == 8) {
    VAR_7 = VAR_6->buf.byte[VAR_6->regs.count];
    VAR_6->regs.count += 1;
   } else {
    VAR_7 = (u_char)FUNC_5(VAR_6->buf.word[VAR_6->regs.count >> 1]);
    VAR_6->regs.count += 2;
   }
   break;
  case 128:
   FUNC_1("read_byte: read ID byte %d, total = %d\n", VAR_6->regs.count, VAR_6->regs.num);
   VAR_7 = VAR_6->ids[VAR_6->regs.count];
   VAR_6->regs.count += 1;
   break;
  default:
   FUNC_0();
 }

 if (VAR_6->regs.count == VAR_6->regs.num) {
  FUNC_1("read_byte: all bytes were read\n");





  if ((VAR_6->options & VAR_1) && FUNC_3(VAR_6->state) == 129) {
   VAR_6->regs.count = 0;
   if (VAR_6->regs.row + 1 < VAR_6->geom.pgnum)
    VAR_6->regs.row += 1;
   FUNC_1("read_byte: switch to the next page (%#x)\n", VAR_6->regs.row);
   FUNC_6(VAR_6, VAR_0);
  }
  else if (FUNC_3(VAR_6->nxstate) == VAR_4)
   FUNC_8(VAR_6);

 }

 return VAR_7;
}
