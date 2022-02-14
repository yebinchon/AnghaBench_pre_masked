
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int last_fence_retired; int fence_queue; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,int) ;
 unsigned int FUNC_1 (int *) ;

int FUNC_2(struct drm_device *VAR_1, unsigned int *VAR_2)
{
 drm_mga_private_t *VAR_3 = (drm_mga_private_t *) VAR_1->dev_private;
 unsigned int VAR_4;
 int VAR_5 = 0;





 FUNC_0(VAR_5, VAR_3->fence_queue, 3 * VAR_0,
      (((VAR_4 = FUNC_1(&VAR_3->last_fence_retired))
        - *VAR_2) <= (1 << 23)));

 *VAR_2 = VAR_4;

 return VAR_5;
}
