
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int page_flags; unsigned int num_pages; int bdev; } ;
struct TYPE_2__ {scalar_t__* dma_address; } ;
struct radeon_ttm_tt {TYPE_1__ ttm; } ;
struct radeon_device {int flags; int pdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 struct radeon_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ttm_tt*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct ttm_tt*) ;

__attribute__((used)) static void FUNC_6(struct ttm_tt *VAR_4)
{
 struct radeon_device *VAR_5;
 struct radeon_ttm_tt *VAR_6 = (void *)VAR_4;
 unsigned VAR_7;
 bool VAR_8 = !!(VAR_4->page_flags & VAR_3);

 if (VAR_8)
  return;

 VAR_5 = FUNC_1(VAR_4->bdev);
 for (VAR_7 = 0; VAR_7 < VAR_4->num_pages; VAR_7++) {
  if (VAR_6->ttm.dma_address[VAR_7]) {
   FUNC_0(VAR_5->pdev, VAR_6->ttm.dma_address[VAR_7],
           VAR_0, VAR_1);
  }
 }

 FUNC_5(VAR_4);
}
