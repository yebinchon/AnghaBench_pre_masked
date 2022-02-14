
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_i915_private {struct drm_device* dev; TYPE_1__* info; struct drm_crtc** pipe_to_crtc_mapping; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_5__ {int pch_pll; } ;
struct TYPE_4__ {int gen; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_0 ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (struct drm_i915_private*,int) ;
 int FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct drm_i915_private*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_12 (struct drm_crtc*,int ) ;
 TYPE_2__* FUNC_13 (struct drm_crtc*) ;
 scalar_t__ FUNC_14 (int,int) ;

__attribute__((used)) static void FUNC_15(struct drm_i915_private *VAR_11,
        enum pipe VAR_12)
{
 struct drm_device *VAR_13 = VAR_11->dev;
 struct drm_crtc *VAR_14 = VAR_11->pipe_to_crtc_mapping[VAR_12];
 uint32_t VAR_15, VAR_16, VAR_17;


 FUNC_0(VAR_11->info->gen < 5);


 FUNC_11(VAR_11,
          FUNC_13(VAR_14)->pch_pll,
          FUNC_13(VAR_14));


 FUNC_10(VAR_11, VAR_12);
 FUNC_9(VAR_11, VAR_12);

 if (FUNC_2(VAR_13)) {


  VAR_15 = FUNC_8(VAR_12);
  VAR_16 = FUNC_4(VAR_15);
  VAR_16 |= VAR_4;
  FUNC_5(VAR_15, VAR_16);
 }

 VAR_15 = FUNC_7(VAR_12);
 VAR_16 = FUNC_4(VAR_15);
 VAR_17 = FUNC_4(FUNC_6(VAR_12));

 if (FUNC_3(VAR_11->dev)) {




  VAR_16 &= ~VAR_1;
  VAR_16 |= VAR_17 & VAR_1;
 }

 VAR_16 &= ~VAR_7;
 if ((VAR_17 & VAR_3) == VAR_2)
  if (FUNC_3(VAR_11->dev) &&
      FUNC_12(VAR_14, VAR_0))
   VAR_16 |= VAR_8;
  else
   VAR_16 |= VAR_6;
 else
  VAR_16 |= VAR_9;

 FUNC_5(VAR_15, VAR_16 | VAR_5);
 if (FUNC_14(FUNC_4(VAR_15) & VAR_10, 100))
  FUNC_1("failed to enable transcoder %d\n", VAR_12);
}
