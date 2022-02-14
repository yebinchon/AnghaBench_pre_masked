
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_hdmi {scalar_t__ has_hdmi_sink; } ;
struct drm_encoder {int dummy; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_dp {int lane_count; } ;
struct intel_crtc {int pipe; int cpu_transcoder; int bpp; int fdi_lanes; } ;
struct drm_i915_private {int pch_pf_size; } ;
struct TYPE_4__ {int flags; } ;
struct drm_crtc {TYPE_2__ mode; TYPE_1__* dev; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_3__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int,...) ;
 struct intel_dp* FUNC_5 (struct drm_encoder*) ;
 struct intel_hdmi* FUNC_6 (struct drm_encoder*) ;
 struct intel_encoder* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct intel_encoder*) ;
 struct intel_crtc* FUNC_9 (struct drm_crtc*) ;

void FUNC_10(struct drm_crtc *VAR_25)
{
 struct intel_crtc *VAR_26 = FUNC_9(VAR_25);
 struct intel_encoder *VAR_27 = FUNC_7(VAR_25);
 struct drm_encoder *VAR_28 = &VAR_27->base;
 struct drm_i915_private *VAR_29 = VAR_25->dev->dev_private;
 enum pipe VAR_30 = VAR_26->pipe;
 enum transcoder VAR_31 = VAR_26->cpu_transcoder;
 enum port VAR_32 = FUNC_8(VAR_27);
 int VAR_33 = VAR_27->type;
 uint32_t VAR_34;


 VAR_34 = VAR_15;
 VAR_34 |= FUNC_3(VAR_32);

 switch (VAR_26->bpp) {
 case 18:
  VAR_34 |= VAR_9;
  break;
 case 24:
  VAR_34 |= VAR_10;
  break;
 case 30:
  VAR_34 |= VAR_7;
  break;
 case 36:
  VAR_34 |= VAR_8;
  break;
 default:
  FUNC_4(1, "%d bpp unsupported by transcoder DDI function\n",
       VAR_26->bpp);
 }

 if (VAR_25->mode.flags & VAR_1)
  VAR_34 |= VAR_24;
 if (VAR_25->mode.flags & VAR_0)
  VAR_34 |= VAR_20;

 if (VAR_31 == VAR_6) {
  switch (VAR_30) {
  case 130:



   if (VAR_29->pch_pf_size)
    VAR_34 |= VAR_12;
   else
    VAR_34 |= VAR_11;
   break;
  case 129:
   VAR_34 |= VAR_13;
   break;
  case 128:
   VAR_34 |= VAR_14;
   break;
  default:
   FUNC_0();
   break;
  }
 }

 if (VAR_33 == VAR_5) {
  struct intel_hdmi *VAR_35 = FUNC_6(VAR_28);

  if (VAR_35->has_hdmi_sink)
   VAR_34 |= VAR_19;
  else
   VAR_34 |= VAR_17;

 } else if (VAR_33 == VAR_2) {
  VAR_34 |= VAR_18;
  VAR_34 |= (VAR_26->fdi_lanes - 1) << 1;

 } else if (VAR_33 == VAR_3 ||
     VAR_33 == VAR_4) {
  struct intel_dp *VAR_36 = FUNC_5(VAR_28);

  VAR_34 |= VAR_16;

  switch (VAR_36->lane_count) {
  case 1:
   VAR_34 |= VAR_21;
   break;
  case 2:
   VAR_34 |= VAR_22;
   break;
  case 4:
   VAR_34 |= VAR_23;
   break;
  default:
   VAR_34 |= VAR_23;
   FUNC_4(1, "Unsupported lane count %d\n",
        VAR_36->lane_count);
  }

 } else {
  FUNC_4(1, "Invalid encoder type %d for pipe %d\n",
       VAR_27->type, VAR_30);
 }

 FUNC_1(FUNC_2(VAR_31), VAR_34);
}
