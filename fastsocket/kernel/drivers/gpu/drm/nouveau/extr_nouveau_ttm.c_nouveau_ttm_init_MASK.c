
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_15__ {int vram_available; int gart_available; } ;
struct TYPE_10__ {int object; } ;
struct TYPE_11__ {TYPE_1__ ref; } ;
struct TYPE_14__ {int bdev; int mtrr; TYPE_2__ bo_global_ref; } ;
struct TYPE_13__ {scalar_t__ stat; int size; } ;
struct nouveau_drm {TYPE_6__ gem; TYPE_5__ ttm; TYPE_4__ agp; int device; struct drm_device* dev; } ;
struct drm_device {int pdev; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_18__ {TYPE_3__ ram; } ;
struct TYPE_17__ {scalar_t__ reserved; } ;
struct TYPE_16__ {int dma_bits; int limit; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nouveau_drm*,char*,int) ;
 int FUNC_2 (struct nouveau_drm*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;
 TYPE_9__* FUNC_4 (int ) ;
 TYPE_8__* FUNC_5 (int ) ;
 int FUNC_6 (struct nouveau_drm*) ;
 TYPE_7__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int ,int *,int ,int) ;
 int FUNC_14 (int *,int ,int) ;

int
FUNC_15(struct nouveau_drm *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->dev;
 u32 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(VAR_7->device)->dma_bits;
 if ( VAR_7->agp.stat == VAR_2 ||
     !FUNC_8(VAR_8->pdev, FUNC_0(VAR_9)))
  VAR_9 = 32;

 VAR_10 = FUNC_12(VAR_8->pdev, FUNC_0(VAR_9));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_11(VAR_8->pdev, FUNC_0(VAR_9));
 if (VAR_10)
  FUNC_11(VAR_8->pdev, FUNC_0(32));

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_13(&VAR_7->ttm.bdev,
      VAR_7->ttm.bo_global_ref.ref.object,
      &VAR_6, VAR_0,
      VAR_9 <= 32 ? 1 : 0);
 if (VAR_10) {
  FUNC_1(VAR_7, "error initialising bo driver, %d\n", VAR_10);
  return VAR_10;
 }


 VAR_7->gem.vram_available = FUNC_4(VAR_7->device)->ram.size;
 VAR_7->gem.vram_available -= FUNC_5(VAR_7->device)->reserved;

 VAR_10 = FUNC_14(&VAR_7->ttm.bdev, VAR_5,
         VAR_7->gem.vram_available >> VAR_3);
 if (VAR_10) {
  FUNC_1(VAR_7, "VRAM mm init failed, %d\n", VAR_10);
  return VAR_10;
 }

 VAR_7->ttm.mtrr = FUNC_3(FUNC_10(VAR_8->pdev, 1),
         FUNC_9(VAR_8->pdev, 1),
         VAR_1);


 if (VAR_7->agp.stat != VAR_2) {
  VAR_7->gem.gart_available = FUNC_7(VAR_7->device)->limit;
  if (VAR_7->gem.gart_available > 512 * 1024 * 1024)
   VAR_7->gem.gart_available = 512 * 1024 * 1024;
 } else {
  VAR_7->gem.gart_available = VAR_7->agp.size;
 }

 VAR_10 = FUNC_14(&VAR_7->ttm.bdev, VAR_4,
         VAR_7->gem.gart_available >> VAR_3);
 if (VAR_10) {
  FUNC_1(VAR_7, "GART mm init failed, %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_2(VAR_7, "VRAM: %d MiB\n", (u32)(VAR_7->gem.vram_available >> 20));
 FUNC_2(VAR_7, "GART: %d MiB\n", (u32)(VAR_7->gem.gart_available >> 20));
 return 0;
}
