
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(struct drm_device *VAR_0)
{
 drm_radeon_private_t *VAR_1 = VAR_0->dev_private;

 FUNC_0("\n");

 FUNC_1(VAR_0, VAR_1->mmio);

 FUNC_2(VAR_1);

 VAR_0->dev_private = ((void*)0);
 return 0;
}
