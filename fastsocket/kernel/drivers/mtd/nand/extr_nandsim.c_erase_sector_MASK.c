
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ns_mem {int * byte; } ;
struct TYPE_4__ {int row; } ;
struct TYPE_3__ {int pgsec; } ;
struct nandsim {int nand_pages_slab; TYPE_2__ regs; TYPE_1__ geom; scalar_t__* pages_written; scalar_t__ cfile; } ;


 int FUNC_0 (char*,int) ;
 union ns_mem* FUNC_1 (struct nandsim*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct nandsim *VAR_0)
{
 union ns_mem *VAR_1;
 int VAR_2;

 if (VAR_0->cfile) {
  for (VAR_2 = 0; VAR_2 < VAR_0->geom.pgsec; VAR_2++)
   if (VAR_0->pages_written[VAR_0->regs.row + VAR_2]) {
    FUNC_0("erase_sector: freeing page %d\n", VAR_0->regs.row + VAR_2);
    VAR_0->pages_written[VAR_0->regs.row + VAR_2] = 0;
   }
  return;
 }

 VAR_1 = FUNC_1(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_0->geom.pgsec; VAR_2++) {
  if (VAR_1->byte != ((void*)0)) {
   FUNC_0("erase_sector: freeing page %d\n", VAR_0->regs.row+VAR_2);
   FUNC_2(VAR_0->nand_pages_slab, VAR_1->byte);
   VAR_1->byte = ((void*)0);
  }
  VAR_1++;
 }
}
