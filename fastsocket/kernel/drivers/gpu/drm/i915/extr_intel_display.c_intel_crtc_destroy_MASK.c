
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_unpin_work {int work; struct intel_unpin_work* unpin_work; } ;
struct intel_crtc {int work; struct intel_crtc* unpin_work; } ;
struct drm_device {int event_lock; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct intel_unpin_work*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct intel_unpin_work* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_5(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;
 struct intel_unpin_work *VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->event_lock, VAR_4);
 VAR_3 = VAR_1->unpin_work;
 VAR_1->unpin_work = ((void*)0);
 FUNC_4(&VAR_2->event_lock, VAR_4);

 if (VAR_3) {
  FUNC_0(&VAR_3->work);
  FUNC_2(VAR_3);
 }

 FUNC_1(VAR_0);

 FUNC_2(VAR_1);
}
