
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ns_mem {int * byte; } ;
typedef int u_char ;
struct TYPE_6__ {int * byte; } ;
struct TYPE_5__ {int pgszoob; } ;
struct TYPE_4__ {size_t row; int column; int off; } ;
struct nandsim {int* pages_written; TYPE_3__ buf; TYPE_2__ geom; TYPE_1__ regs; int nand_pages_slab; scalar_t__ cfile; int * file_buf; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,size_t,...) ;
 union ns_mem* FUNC_2 (struct nandsim*) ;
 int * FUNC_3 (struct nandsim*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct nandsim*,scalar_t__,int *,int,int*) ;
 int FUNC_7 (struct nandsim*,scalar_t__,int *,int,int*) ;

__attribute__((used)) static int FUNC_8(struct nandsim *VAR_1, int VAR_2)
{
 int VAR_3;
 union ns_mem *VAR_4;
 u_char *VAR_5;

 if (VAR_1->cfile) {
  loff_t VAR_6, VAR_7;
  ssize_t VAR_8;
  int VAR_9;

  FUNC_0("prog_page: writing page %d\n", VAR_1->regs.row);
  VAR_5 = VAR_1->file_buf + VAR_1->regs.column + VAR_1->regs.off;
  VAR_6 = (loff_t)VAR_1->regs.row * VAR_1->geom.pgszoob + VAR_1->regs.column + VAR_1->regs.off;
  if (!VAR_1->pages_written[VAR_1->regs.row]) {
   VAR_9 = 1;
   FUNC_5(VAR_1->file_buf, 0xff, VAR_1->geom.pgszoob);
  } else {
   VAR_9 = 0;
   VAR_7 = VAR_6;
   VAR_8 = FUNC_6(VAR_1, VAR_1->cfile, VAR_5, VAR_2, &VAR_7);
   if (VAR_8 != VAR_2) {
    FUNC_1("prog_page: read error for page %d ret %ld\n", VAR_1->regs.row, (long)VAR_8);
    return -1;
   }
  }
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   VAR_5[VAR_3] &= VAR_1->buf.byte[VAR_3];
  if (VAR_9) {
   VAR_7 = (loff_t)VAR_1->regs.row * VAR_1->geom.pgszoob;
   VAR_8 = FUNC_7(VAR_1, VAR_1->cfile, VAR_1->file_buf, VAR_1->geom.pgszoob, &VAR_7);
   if (VAR_8 != VAR_1->geom.pgszoob) {
    FUNC_1("prog_page: write error for page %d ret %ld\n", VAR_1->regs.row, (long)VAR_8);
    return -1;
   }
   VAR_1->pages_written[VAR_1->regs.row] = 1;
  } else {
   VAR_7 = VAR_6;
   VAR_8 = FUNC_7(VAR_1, VAR_1->cfile, VAR_5, VAR_2, &VAR_7);
   if (VAR_8 != VAR_2) {
    FUNC_1("prog_page: write error for page %d ret %ld\n", VAR_1->regs.row, (long)VAR_8);
    return -1;
   }
  }
  return 0;
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4->byte == ((void*)0)) {
  FUNC_0("prog_page: allocating page %d\n", VAR_1->regs.row);






  VAR_4->byte = FUNC_4(VAR_1->nand_pages_slab, VAR_0);
  if (VAR_4->byte == ((void*)0)) {
   FUNC_1("prog_page: error allocating memory for page %d\n", VAR_1->regs.row);
   return -1;
  }
  FUNC_5(VAR_4->byte, 0xFF, VAR_1->geom.pgszoob);
 }

 VAR_5 = FUNC_3(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_5[VAR_3] &= VAR_1->buf.byte[VAR_3];

 return 0;
}
