
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int vblank_disable_timer; int * vblank_refcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(struct drm_device *VAR_3, int VAR_4)
{
 FUNC_0(FUNC_2(&VAR_3->vblank_refcount[VAR_4]) == 0);


 if (FUNC_1(&VAR_3->vblank_refcount[VAR_4]) &&
     (VAR_1 > 0))
  FUNC_3(&VAR_3->vblank_disable_timer,
     VAR_2 + ((VAR_1 * VAR_0)/1000));
}
