
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_6__ {int used_new_dma_init; int status; int mmio; int mmio_size; int mmio_base; } ;
typedef TYPE_1__ drm_mga_private_t ;
struct TYPE_7__ {scalar_t__ agp_mode; } ;
typedef TYPE_2__ drm_mga_dma_bootstrap_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_device*,int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,TYPE_2__*) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_7,
    drm_mga_dma_bootstrap_t *VAR_8)
{
 const int VAR_9 = (VAR_8->agp_mode != 0) && FUNC_2(VAR_7);
 int VAR_10;
 drm_mga_private_t *const VAR_11 =
     (drm_mga_private_t *) VAR_7->dev_private;

 VAR_11->used_new_dma_init = 1;




 VAR_10 = FUNC_1(VAR_7, VAR_11->mmio_base, VAR_11->mmio_size,
    VAR_5, VAR_4, &VAR_11->mmio);
 if (VAR_10) {
  FUNC_0("Unable to map MMIO region: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_7, 0, VAR_1, VAR_6,
    VAR_4 | VAR_3 | VAR_2,
    &VAR_11->status);
 if (VAR_10) {
  FUNC_0("Unable to map status region: %d\n", VAR_10);
  return VAR_10;
 }






 if (VAR_9)
  VAR_10 = FUNC_3(VAR_7, VAR_8);





 if (VAR_10)
  FUNC_4(VAR_7, VAR_0);
 if (!VAR_9 || VAR_10)
  VAR_10 = FUNC_5(VAR_7, VAR_8);

 return VAR_10;
}
