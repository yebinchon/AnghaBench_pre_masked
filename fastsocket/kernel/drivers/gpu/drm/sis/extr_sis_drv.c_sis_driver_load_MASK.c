
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {void* dev_private; int pdev; } ;
struct TYPE_3__ {unsigned long chipset; int object_idr; } ;
typedef TYPE_1__ drm_sis_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, unsigned long VAR_3)
{
 drm_sis_private_t *VAR_4;

 FUNC_2(VAR_2->pdev);

 VAR_4 = FUNC_1(sizeof(drm_sis_private_t), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_4->object_idr);
 VAR_2->dev_private = (void *)VAR_4;
 VAR_4->chipset = VAR_3;

 return 0;
}
