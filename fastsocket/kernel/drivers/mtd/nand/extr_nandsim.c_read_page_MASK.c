
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ns_mem {int * byte; } ;
struct TYPE_6__ {int byte; } ;
struct TYPE_5__ {size_t row; int column; int off; } ;
struct TYPE_4__ {int pgszoob; } ;
struct nandsim {TYPE_3__ buf; TYPE_2__ regs; scalar_t__ cfile; TYPE_1__ geom; int * pages_written; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*,size_t,long) ;
 union ns_mem* FUNC_2 (struct nandsim*) ;
 int FUNC_3 (struct nandsim*) ;
 int FUNC_4 (struct nandsim*,int) ;
 scalar_t__ FUNC_5 (struct nandsim*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct nandsim*,scalar_t__,int ,int,int*) ;

__attribute__((used)) static void FUNC_9(struct nandsim *VAR_0, int VAR_1)
{
 union ns_mem *VAR_2;

 if (VAR_0->cfile) {
  if (!VAR_0->pages_written[VAR_0->regs.row]) {
   FUNC_0("read_page: page %d not written\n", VAR_0->regs.row);
   FUNC_7(VAR_0->buf.byte, 0xFF, VAR_1);
  } else {
   loff_t VAR_3;
   ssize_t VAR_4;

   FUNC_0("read_page: page %d written, reading from %d\n",
    VAR_0->regs.row, VAR_0->regs.column + VAR_0->regs.off);
   if (FUNC_5(VAR_0, VAR_1))
    return;
   VAR_3 = (loff_t)VAR_0->regs.row * VAR_0->geom.pgszoob + VAR_0->regs.column + VAR_0->regs.off;
   VAR_4 = FUNC_8(VAR_0, VAR_0->cfile, VAR_0->buf.byte, VAR_1, &VAR_3);
   if (VAR_4 != VAR_1) {
    FUNC_1("read_page: read error for page %d ret %ld\n", VAR_0->regs.row, (long)VAR_4);
    return;
   }
   FUNC_4(VAR_0, VAR_1);
  }
  return;
 }

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2->byte == ((void*)0)) {
  FUNC_0("read_page: page %d not allocated\n", VAR_0->regs.row);
  FUNC_7(VAR_0->buf.byte, 0xFF, VAR_1);
 } else {
  FUNC_0("read_page: page %d allocated, reading from %d\n",
   VAR_0->regs.row, VAR_0->regs.column + VAR_0->regs.off);
  if (FUNC_5(VAR_0, VAR_1))
   return;
  FUNC_6(VAR_0->buf.byte, FUNC_3(VAR_0), VAR_1);
  FUNC_4(VAR_0, VAR_1);
 }
}
