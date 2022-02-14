
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_fbc_work {unsigned long interval; int work; int fb; struct drm_crtc* crtc; } ;
struct TYPE_2__ {int (* enable_fbc ) (struct drm_crtc*,unsigned long) ;} ;
struct drm_i915_private {struct intel_fbc_work* fbc_work; TYPE_1__ display; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int fb; struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 struct intel_fbc_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct drm_crtc*,unsigned long) ;

void FUNC_7(struct drm_crtc *VAR_2, unsigned long VAR_3)
{
 struct intel_fbc_work *VAR_4;
 struct drm_device *VAR_5 = VAR_2->dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;

 if (!VAR_6->display.enable_fbc)
  return;

 FUNC_2(VAR_6);

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_0);
 if (VAR_4 == ((void*)0)) {
  VAR_6->display.enable_fbc(VAR_2, VAR_3);
  return;
 }

 VAR_4->crtc = VAR_2;
 VAR_4->fb = VAR_2->fb;
 VAR_4->interval = VAR_3;
 FUNC_1(&VAR_4->work, VAR_1);

 VAR_6->fbc_work = VAR_4;

 FUNC_0("scheduling delayed FBC enable\n");
 FUNC_5(&VAR_4->work, FUNC_4(50));
}
