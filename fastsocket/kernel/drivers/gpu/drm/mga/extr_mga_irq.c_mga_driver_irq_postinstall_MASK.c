
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int fence_queue; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct drm_device *VAR_2)
{
 drm_mga_private_t *VAR_3 = (drm_mga_private_t *) VAR_2->dev_private;

 FUNC_0(&VAR_3->fence_queue);




 FUNC_1(VAR_0, VAR_1);
 return 0;
}
