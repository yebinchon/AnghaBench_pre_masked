
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc {int pipe; int lowfreq_avail; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_4__ {int n; int m1; int m2; } ;
typedef TYPE_1__ intel_clock_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (struct drm_crtc*,int ) ;
 struct intel_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_2,
         intel_clock_t *VAR_3,
         intel_clock_t *VAR_4)
{
 struct drm_device *VAR_5 = VAR_2->dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 struct intel_crtc *VAR_7 = FUNC_5(VAR_2);
 int VAR_8 = VAR_7->pipe;
 u32 VAR_9, VAR_10 = 0;

 if (FUNC_3(VAR_5)) {
  VAR_9 = (1 << VAR_3->n) << 16 | VAR_3->m1 << 8 | VAR_3->m2;
  if (VAR_4)
   VAR_10 = (1 << VAR_4->n) << 16 |
    VAR_4->m1 << 8 | VAR_4->m2;
 } else {
  VAR_9 = VAR_3->n << 16 | VAR_3->m1 << 8 | VAR_3->m2;
  if (VAR_4)
   VAR_10 = VAR_4->n << 16 | VAR_4->m1 << 8 |
    VAR_4->m2;
 }

 FUNC_2(FUNC_0(VAR_8), VAR_9);

 VAR_7->lowfreq_avail = 0;
 if (FUNC_4(VAR_2, VAR_0) &&
     VAR_4 && VAR_1) {
  FUNC_2(FUNC_1(VAR_8), VAR_10);
  VAR_7->lowfreq_avail = 1;
 } else {
  FUNC_2(FUNC_1(VAR_8), VAR_9);
 }
}
