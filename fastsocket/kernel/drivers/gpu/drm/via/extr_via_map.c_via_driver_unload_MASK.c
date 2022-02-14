
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {int object_idr; } ;
typedef TYPE_1__ drm_via_private_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct drm_device *VAR_0)
{
 drm_via_private_t *VAR_1 = VAR_0->dev_private;

 FUNC_0(&VAR_1->object_idr);

 FUNC_1(VAR_1);

 return 0;
}
