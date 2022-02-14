
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ num_crtcs; int _vblank_time; int vblank_inmodeset; int last_vblank_wait; int last_vblank; int vblank_enabled; int vblank_refcount; int _vblank_count; int vbl_queue; int vblank_disable_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(struct drm_device *VAR_0)
{

 if (VAR_0->num_crtcs == 0)
  return;

 FUNC_0(&VAR_0->vblank_disable_timer);

 FUNC_2((unsigned long)VAR_0);

 FUNC_1(VAR_0->vbl_queue);
 FUNC_1(VAR_0->_vblank_count);
 FUNC_1(VAR_0->vblank_refcount);
 FUNC_1(VAR_0->vblank_enabled);
 FUNC_1(VAR_0->last_vblank);
 FUNC_1(VAR_0->last_vblank_wait);
 FUNC_1(VAR_0->vblank_inmodeset);
 FUNC_1(VAR_0->_vblank_time);

 VAR_0->num_crtcs = 0;
}
