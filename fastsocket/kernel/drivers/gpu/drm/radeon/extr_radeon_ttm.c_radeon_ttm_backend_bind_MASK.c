
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int num_pages; int pages; } ;
struct ttm_mem_reg {int start; } ;
struct TYPE_2__ {int dma_address; } ;
struct radeon_ttm_tt {unsigned long offset; TYPE_1__ ttm; int rdev; } ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,struct ttm_mem_reg*,struct ttm_tt*) ;
 int FUNC_2 (int ,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ttm_tt *VAR_1,
       struct ttm_mem_reg *VAR_2)
{
 struct radeon_ttm_tt *VAR_3 = (void*)VAR_1;
 int VAR_4;

 VAR_3->offset = (unsigned long)(VAR_2->start << VAR_0);
 if (!VAR_1->num_pages) {
  FUNC_1(1, "nothing to bind %lu pages for mreg %p back %p!\n",
       VAR_1->num_pages, VAR_2, VAR_1);
 }
 VAR_4 = FUNC_2(VAR_3->rdev, VAR_3->offset,
        VAR_1->num_pages, VAR_1->pages, VAR_3->ttm.dma_address);
 if (VAR_4) {
  FUNC_0("failed to bind %lu pages at 0x%08X\n",
     VAR_1->num_pages, (unsigned)VAR_3->offset);
  return VAR_4;
 }
 return 0;
}
