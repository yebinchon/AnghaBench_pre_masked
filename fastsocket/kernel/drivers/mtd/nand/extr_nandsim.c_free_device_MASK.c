
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgnum; } ;
struct nandsim {TYPE_2__* pages; int nand_pages_slab; TYPE_1__ geom; scalar_t__ cfile; TYPE_2__* pages_written; int file_buf; } ;
struct TYPE_4__ {scalar_t__ byte; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct nandsim *VAR_0)
{
 int VAR_1;

 if (VAR_0->cfile) {
  FUNC_1(VAR_0->file_buf);
  FUNC_4(VAR_0->pages_written);
  FUNC_0(VAR_0->cfile, ((void*)0));
  return;
 }

 if (VAR_0->pages) {
  for (VAR_1 = 0; VAR_1 < VAR_0->geom.pgnum; VAR_1++) {
   if (VAR_0->pages[VAR_1].byte)
    FUNC_3(VAR_0->nand_pages_slab,
      VAR_0->pages[VAR_1].byte);
  }
  FUNC_2(VAR_0->nand_pages_slab);
  FUNC_4(VAR_0->pages);
 }
}
