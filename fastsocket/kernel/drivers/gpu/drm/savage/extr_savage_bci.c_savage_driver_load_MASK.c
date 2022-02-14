
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int pdev; void* dev_private; } ;
typedef enum savage_family { ____Placeholder_savage_family } savage_family ;
struct TYPE_3__ {int chipset; } ;
typedef TYPE_1__ drm_savage_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct drm_device *VAR_2, unsigned long VAR_3)
{
 drm_savage_private_t *VAR_4;

 VAR_4 = FUNC_0(sizeof(drm_savage_private_t), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_2->dev_private = (void *)VAR_4;

 VAR_4->chipset = (enum savage_family)VAR_3;

 FUNC_1(VAR_2->pdev);

 return 0;
}
