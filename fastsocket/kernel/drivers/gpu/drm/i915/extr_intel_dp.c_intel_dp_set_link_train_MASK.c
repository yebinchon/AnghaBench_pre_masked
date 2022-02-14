
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct intel_dp {int lane_count; int train_set; int output_reg; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {int port; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;




 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int VAR_20 ;
 int FUNC_8 (int ) ;
 struct intel_digital_port* FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*,int ,int ,int) ;
 int FUNC_11 (struct intel_dp*,int ,int) ;
 int FUNC_12 (struct intel_dp*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static bool
FUNC_14(struct intel_dp *VAR_21,
   uint32_t VAR_22,
   uint8_t VAR_23)
{
 struct intel_digital_port *VAR_24 = FUNC_9(VAR_21);
 struct drm_device *VAR_25 = VAR_24->base.base.dev;
 struct drm_i915_private *VAR_26 = VAR_25->dev_private;
 enum port VAR_27 = VAR_24->port;
 int VAR_28;
 uint32_t VAR_29;

 if (FUNC_7(VAR_25)) {
  VAR_29 = FUNC_4(FUNC_0(VAR_27));

  if (VAR_23 & VAR_0)
   VAR_29 |= VAR_15;
  else
   VAR_29 &= ~VAR_15;

  VAR_29 &= ~VAR_10;
  switch (VAR_23 & VAR_18) {
  case 128:

   if (VAR_27 != VAR_20) {
    VAR_29 |= VAR_9;
    FUNC_5(FUNC_0(VAR_27), VAR_29);

    if (FUNC_13((FUNC_4(FUNC_1(VAR_27)) &
           VAR_16), 1))
     FUNC_2("Timed out waiting for DP idle patterns\n");

    VAR_29 &= ~VAR_10;
   }

   VAR_29 |= VAR_11;

   break;
  case 131:
   VAR_29 |= VAR_12;
   break;
  case 130:
   VAR_29 |= VAR_13;
   break;
  case 129:
   VAR_29 |= VAR_14;
   break;
  }
  FUNC_5(FUNC_0(VAR_27), VAR_29);

 } else if (FUNC_3(VAR_25) &&
     (FUNC_6(VAR_25) || !FUNC_12(VAR_21))) {
  VAR_22 &= ~VAR_2;

  switch (VAR_23 & VAR_18) {
  case 128:
   VAR_22 |= VAR_4;
   break;
  case 131:
   VAR_22 |= VAR_6;
   break;
  case 130:
   VAR_22 |= VAR_8;
   break;
  case 129:
   FUNC_2("DP training pattern 3 not supported\n");
   VAR_22 |= VAR_8;
   break;
  }

 } else {
  VAR_22 &= ~VAR_1;

  switch (VAR_23 & VAR_18) {
  case 128:
   VAR_22 |= VAR_3;
   break;
  case 131:
   VAR_22 |= VAR_5;
   break;
  case 130:
   VAR_22 |= VAR_7;
   break;
  case 129:
   FUNC_2("DP training pattern 3 not supported\n");
   VAR_22 |= VAR_7;
   break;
  }
 }

 FUNC_5(VAR_21->output_reg, VAR_22);
 FUNC_8(VAR_21->output_reg);

 FUNC_11(VAR_21,
        VAR_19,
        VAR_23);

 if ((VAR_23 & VAR_18) !=
     128) {
  VAR_28 = FUNC_10(VAR_21,
      VAR_17,
      VAR_21->train_set,
      VAR_21->lane_count);
  if (VAR_28 != VAR_21->lane_count)
   return 0;
 }

 return 1;
}
