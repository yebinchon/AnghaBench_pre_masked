
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {int page_flags; unsigned int num_pages; int bdev; } ;
struct ttm_dma_tt {scalar_t__* dma_address; } ;
struct TYPE_2__ {scalar_t__ stat; } ;
struct nouveau_drm {TYPE_1__ agp; struct drm_device* dev; } ;
struct drm_device {int pdev; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ttm_tt*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct ttm_tt*) ;

__attribute__((used)) static void
FUNC_6(struct ttm_tt *VAR_4)
{
 struct ttm_dma_tt *VAR_5 = (void *)VAR_4;
 struct nouveau_drm *VAR_6;
 struct drm_device *VAR_7;
 unsigned VAR_8;
 bool VAR_9 = !!(VAR_4->page_flags & VAR_3);

 if (VAR_9)
  return;

 VAR_6 = FUNC_0(VAR_4->bdev);
 VAR_7 = VAR_6->dev;
 for (VAR_8 = 0; VAR_8 < VAR_4->num_pages; VAR_8++) {
  if (VAR_5->dma_address[VAR_8]) {
   FUNC_1(VAR_7->pdev, VAR_5->dma_address[VAR_8],
           VAR_1, VAR_2);
  }
 }

 FUNC_5(VAR_4);
}
