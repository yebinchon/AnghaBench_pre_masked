
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int page_flags; scalar_t__ state; unsigned int num_pages; int * pages; int bdev; scalar_t__ sg; } ;
struct ttm_dma_tt {scalar_t__* dma_address; } ;
struct TYPE_2__ {scalar_t__ stat; } ;
struct nouveau_drm {TYPE_1__ agp; struct drm_device* dev; } ;
struct drm_device {int pdev; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int *,scalar_t__*,unsigned int) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (struct ttm_tt*) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (struct ttm_tt*) ;
 int FUNC_9 (struct ttm_tt*) ;

__attribute__((used)) static int
FUNC_10(struct ttm_tt *VAR_7)
{
 struct ttm_dma_tt *VAR_8 = (void *)VAR_7;
 struct nouveau_drm *VAR_9;
 struct drm_device *VAR_10;
 unsigned VAR_11;
 int VAR_12;
 bool VAR_13 = !!(VAR_7->page_flags & VAR_4);

 if (VAR_7->state != VAR_6)
  return 0;

 if (VAR_13 && VAR_7->sg) {

  FUNC_0(VAR_7->sg, VAR_7->pages,
       VAR_8->dma_address, VAR_7->num_pages);
  VAR_7->state = VAR_5;
  return 0;
 }

 VAR_9 = FUNC_1(VAR_7->bdev);
 VAR_10 = VAR_9->dev;
 VAR_12 = FUNC_8(VAR_7);
 if (VAR_12) {
  return VAR_12;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->num_pages; VAR_11++) {
  VAR_8->dma_address[VAR_11] = FUNC_3(VAR_10->pdev, VAR_7->pages[VAR_11],
         0, VAR_2,
         VAR_3);
  if (FUNC_2(VAR_10->pdev, VAR_8->dma_address[VAR_11])) {
   while (--VAR_11) {
    FUNC_4(VAR_10->pdev, VAR_8->dma_address[VAR_11],
            VAR_2, VAR_3);
    VAR_8->dma_address[VAR_11] = 0;
   }
   FUNC_9(VAR_7);
   return -VAR_0;
  }
 }
 return 0;
}
