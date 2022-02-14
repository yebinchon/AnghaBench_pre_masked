
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct intel_sdvo {int attached_output; int sdvo_reg; } ;
struct TYPE_2__ {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct intel_sdvo*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct intel_sdvo*,int*,int*) ;
 int FUNC_5 (struct intel_sdvo*,int ) ;
 int FUNC_6 (struct intel_sdvo*,int ) ;
 int FUNC_7 (struct intel_sdvo*,int) ;
 int FUNC_8 (struct drm_device*,int) ;
 struct intel_crtc* FUNC_9 (struct drm_crtc*) ;
 struct intel_sdvo* FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(struct intel_encoder *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->base.dev;
 struct drm_i915_private *VAR_7 = VAR_6->dev_private;
 struct intel_sdvo *VAR_8 = FUNC_10(&VAR_5->base);
 struct intel_crtc *VAR_9 = FUNC_9(VAR_5->base.crtc);
 u32 VAR_10;
 bool VAR_11, VAR_12;
 int VAR_13;
 u8 VAR_14;

 VAR_10 = FUNC_2(VAR_8->sdvo_reg);
 if ((VAR_10 & VAR_3) == 0) {


  if (FUNC_1(VAR_6)) {
   struct drm_crtc *VAR_15 = VAR_5->base.crtc;
   int VAR_16 = VAR_15 ? FUNC_9(VAR_15)->pipe : -1;


   if (VAR_16 == VAR_1)
    VAR_10 |= VAR_4;
  }

  FUNC_7(VAR_8, VAR_10 | VAR_3);
 }
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++)
  FUNC_8(VAR_6, VAR_9->pipe);

 VAR_14 = FUNC_4(VAR_8, &VAR_11, &VAR_12);




 if (VAR_14 == VAR_2 && !VAR_11) {
  FUNC_0("First %s output reported failure to "
    "sync\n", FUNC_3(VAR_8));
 }

 if (0)
  FUNC_6(VAR_8,
         VAR_0);
 FUNC_5(VAR_8, VAR_8->attached_output);
}
