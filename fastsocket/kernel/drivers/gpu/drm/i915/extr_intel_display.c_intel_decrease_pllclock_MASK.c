
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_crtc {int pipe; scalar_t__ lowfreq_avail; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_3__ {int lvds_downclock_avail; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct drm_device*,int) ;
 struct intel_crtc* FUNC_8 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 drm_i915_private_t *VAR_3 = VAR_2->dev_private;
 struct intel_crtc *VAR_4 = FUNC_8(VAR_1);

 if (FUNC_2(VAR_2))
  return;

 if (!VAR_3->lvds_downclock_avail)
  return;





 if (!FUNC_3(VAR_2) && VAR_4->lowfreq_avail) {
  int VAR_5 = VAR_4->pipe;
  int VAR_6 = FUNC_0(VAR_5);
  int VAR_7;

  FUNC_1("downclocking LVDS\n");

  FUNC_6(VAR_3, VAR_5);

  VAR_7 = FUNC_4(VAR_6);
  VAR_7 |= VAR_0;
  FUNC_5(VAR_6, VAR_7);
  FUNC_7(VAR_2, VAR_5);
  VAR_7 = FUNC_4(VAR_6);
  if (!(VAR_7 & VAR_0))
   FUNC_1("failed to downclock LVDS!\n");
 }

}
