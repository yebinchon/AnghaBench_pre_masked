
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int page_flags; scalar_t__ state; unsigned int num_pages; int * pages; int bdev; scalar_t__ sg; } ;
struct TYPE_2__ {scalar_t__* dma_address; } ;
struct radeon_ttm_tt {TYPE_1__ ttm; } ;
struct radeon_device {int flags; int pdev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int *,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 struct radeon_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (struct ttm_tt*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (struct ttm_tt*) ;
 int FUNC_9 (struct ttm_tt*) ;

__attribute__((used)) static int FUNC_10(struct ttm_tt *VAR_7)
{
 struct radeon_device *VAR_8;
 struct radeon_ttm_tt *VAR_9 = (void *)VAR_7;
 unsigned VAR_10;
 int VAR_11;
 bool VAR_12 = !!(VAR_7->page_flags & VAR_4);

 if (VAR_7->state != VAR_6)
  return 0;

 if (VAR_12 && VAR_7->sg) {
  FUNC_0(VAR_7->sg, VAR_7->pages,
       VAR_9->ttm.dma_address, VAR_7->num_pages);
  VAR_7->state = VAR_5;
  return 0;
 }

 VAR_8 = FUNC_4(VAR_7->bdev);
 VAR_11 = FUNC_8(VAR_7);
 if (VAR_11) {
  return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->num_pages; VAR_10++) {
  VAR_9->ttm.dma_address[VAR_10] = FUNC_2(VAR_8->pdev, VAR_7->pages[VAR_10],
             0, VAR_1,
             VAR_2);
  if (FUNC_1(VAR_8->pdev, VAR_9->ttm.dma_address[VAR_10])) {
   while (--VAR_10) {
    FUNC_3(VAR_8->pdev, VAR_9->ttm.dma_address[VAR_10],
            VAR_1, VAR_2);
    VAR_9->ttm.dma_address[VAR_10] = 0;
   }
   FUNC_9(VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}
