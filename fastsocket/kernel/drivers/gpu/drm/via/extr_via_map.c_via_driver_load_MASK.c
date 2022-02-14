
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {int pdev; void* dev_private; } ;
struct TYPE_4__ {unsigned long chipset; int object_idr; } ;
typedef TYPE_1__ drm_via_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct drm_device *VAR_2, unsigned long VAR_3)
{
 drm_via_private_t *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_3(sizeof(drm_via_private_t), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_4->object_idr);
 VAR_2->dev_private = (void *)VAR_4;

 VAR_4->chipset = VAR_3;

 FUNC_4(VAR_2->pdev);

 VAR_5 = FUNC_0(VAR_2, 1);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return VAR_5;
 }

 return 0;
}
