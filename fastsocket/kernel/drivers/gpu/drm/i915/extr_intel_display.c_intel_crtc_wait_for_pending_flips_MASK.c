
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int pending_flip_queue; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;
struct drm_crtc {int * fb; struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;

 if (VAR_0->fb == ((void*)0))
  return;

 FUNC_0(FUNC_6(&VAR_2->pending_flip_queue));

 FUNC_5(VAR_2->pending_flip_queue,
     !FUNC_1(VAR_0));

 FUNC_3(&VAR_1->struct_mutex);
 FUNC_2(VAR_0->fb);
 FUNC_4(&VAR_1->struct_mutex);
}
