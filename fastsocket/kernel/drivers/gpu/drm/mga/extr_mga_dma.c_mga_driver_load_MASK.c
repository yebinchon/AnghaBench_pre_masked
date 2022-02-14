
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int counters; int * types; int pdev; void* dev_private; } ;
struct TYPE_3__ {unsigned long chipset; int mmio_size; int mmio_base; int usec_timeout; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_device*,int) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct drm_device *VAR_6, unsigned long VAR_7)
{
 drm_mga_private_t *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(sizeof(drm_mga_private_t), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_6->dev_private = (void *)VAR_8;

 VAR_8->usec_timeout = VAR_2;
 VAR_8->chipset = VAR_7;

 FUNC_5(VAR_6->pdev);

 VAR_8->mmio_base = FUNC_4(VAR_6->pdev, 1);
 VAR_8->mmio_size = FUNC_3(VAR_6->pdev, 1);

 VAR_6->counters += 3;
 VAR_6->types[6] = VAR_3;
 VAR_6->types[7] = VAR_4;
 VAR_6->types[8] = VAR_5;

 VAR_9 = FUNC_0(VAR_6, 1);

 if (VAR_9) {
  (void) FUNC_2(VAR_6);
  return VAR_9;
 }

 return 0;
}
