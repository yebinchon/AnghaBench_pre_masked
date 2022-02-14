
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_dp {int* link_configuration; int DP; } ;
struct intel_digital_port {int port; struct intel_dp dp; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 struct intel_digital_port* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (int) ;

void FUNC_8(struct drm_encoder *VAR_8)
{
 struct intel_digital_port *VAR_9 = FUNC_5(VAR_8);
 struct intel_dp *VAR_10 = &VAR_9->dp;
 struct drm_i915_private *VAR_11 = VAR_8->dev->dev_private;
 enum port VAR_12 = VAR_9->port;
 uint32_t VAR_13;
 bool VAR_14 = 0;

 if (FUNC_2(FUNC_1(VAR_12)) & VAR_2) {
  VAR_13 = FUNC_2(FUNC_0(VAR_12));
  if (VAR_13 & VAR_0) {
   VAR_13 &= ~VAR_0;
   FUNC_3(FUNC_0(VAR_12), VAR_13);
   VAR_14 = 1;
  }

  VAR_13 = FUNC_2(FUNC_1(VAR_12));
  VAR_13 &= ~(VAR_2 | VAR_4);
  VAR_13 |= VAR_5;
  FUNC_3(FUNC_1(VAR_12), VAR_13);
  FUNC_4(FUNC_1(VAR_12));

  if (VAR_14)
   FUNC_6(VAR_11, VAR_12);
 }

 VAR_13 = VAR_2 | VAR_6 |
       VAR_5 | VAR_7;
 if (VAR_10->link_configuration[1] & VAR_1)
  VAR_13 |= VAR_3;
 FUNC_3(FUNC_1(VAR_12), VAR_13);
 FUNC_4(FUNC_1(VAR_12));

 VAR_10->DP |= VAR_0;
 FUNC_3(FUNC_0(VAR_12), VAR_10->DP);
 FUNC_4(FUNC_0(VAR_12));

 FUNC_7(600);
}
