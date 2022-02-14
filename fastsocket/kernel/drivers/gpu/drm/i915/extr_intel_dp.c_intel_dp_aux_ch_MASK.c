
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct intel_dp {int output_reg; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_digital_port {int port; TYPE_2__ base; } ;
struct drm_i915_private {int pm_qos; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_6__ {int gen; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 TYPE_3__* FUNC_9 (struct drm_device*) ;
 scalar_t__ FUNC_10 (struct drm_device*) ;
 scalar_t__ FUNC_11 (struct drm_device*) ;
 scalar_t__ FUNC_12 (struct drm_device*) ;
 scalar_t__ FUNC_13 (struct drm_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;




 int FUNC_14 (int,char*,int ) ;
 struct intel_digital_port* FUNC_15 (struct intel_dp*) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (struct intel_dp*,int) ;
 int FUNC_18 (struct intel_dp*) ;
 int FUNC_19 (struct drm_device*) ;
 int FUNC_20 (struct drm_device*) ;
 scalar_t__ FUNC_21 (struct intel_dp*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_26(struct intel_dp *VAR_22,
  uint8_t *VAR_23, int VAR_24,
  uint8_t *VAR_25, int VAR_26)
{
 uint32_t VAR_27 = VAR_22->output_reg;
 struct intel_digital_port *VAR_28 = FUNC_15(VAR_22);
 struct drm_device *VAR_29 = VAR_28->base.base.dev;
 struct drm_i915_private *VAR_30 = VAR_29->dev_private;
 uint32_t VAR_31 = VAR_27 + 0x10;
 uint32_t VAR_32 = VAR_31 + 4;
 int VAR_33, VAR_34, VAR_35;
 uint32_t VAR_36;
 uint32_t VAR_37;
 int VAR_38, VAR_39;
 bool VAR_40 = FUNC_9(VAR_29)->gen >= 5 && !FUNC_13(VAR_29);





 FUNC_24(&VAR_30->pm_qos, 0);

 if (FUNC_12(VAR_29)) {
  switch (VAR_28->port) {
  case 131:
   VAR_31 = VAR_0;
   VAR_32 = VAR_1;
   break;
  case 130:
   VAR_31 = VAR_15;
   VAR_32 = VAR_16;
   break;
  case 129:
   VAR_31 = VAR_17;
   VAR_32 = VAR_18;
   break;
  case 128:
   VAR_31 = VAR_19;
   VAR_32 = VAR_20;
   break;
  default:
   FUNC_0();
  }
 }

 FUNC_18(VAR_22);







 if (FUNC_21(VAR_22)) {
  if (FUNC_4(VAR_29))
   VAR_37 = FUNC_16(VAR_30) >> 1;
  else if (FUNC_13(VAR_29))
   VAR_37 = 100;
  else if (FUNC_10(VAR_29) || FUNC_11(VAR_29))
   VAR_37 = 200;
  else
   VAR_37 = 225;
 } else if (FUNC_5(VAR_29))
  VAR_37 = FUNC_1(FUNC_20(VAR_29), 2);
 else
  VAR_37 = FUNC_19(VAR_29) / 2;

 if (FUNC_10(VAR_29))
  VAR_39 = 3;
 else
  VAR_39 = 5;


 for (VAR_38 = 0; VAR_38 < 3; VAR_38++) {
  VAR_36 = FUNC_7(VAR_31);
  if ((VAR_36 & VAR_9) == 0)
   break;
  FUNC_22(1);
 }

 if (VAR_38 == 3) {
  FUNC_14(1, "dp_aux_ch not started status 0x%08x\n",
       FUNC_6(VAR_31));
  VAR_34 = -VAR_12;
  goto out;
 }


 for (VAR_38 = 0; VAR_38 < 5; VAR_38++) {

  for (VAR_33 = 0; VAR_33 < VAR_24; VAR_33 += 4)
   FUNC_8(VAR_32 + VAR_33,
       FUNC_23(VAR_23 + VAR_33, VAR_24 - VAR_33));


  FUNC_8(VAR_31,
      VAR_9 |
      (VAR_40 ? VAR_4 : 0) |
      VAR_10 |
      (VAR_24 << VAR_6) |
      (VAR_39 << VAR_7) |
      (VAR_37 << VAR_2) |
      VAR_3 |
      VAR_11 |
      VAR_8);

  VAR_36 = FUNC_17(VAR_22, VAR_40);


  FUNC_8(VAR_31,
      VAR_36 |
      VAR_3 |
      VAR_11 |
      VAR_8);

  if (VAR_36 & (VAR_11 |
         VAR_8))
   continue;
  if (VAR_36 & VAR_3)
   break;
 }

 if ((VAR_36 & VAR_3) == 0) {
  FUNC_3("dp_aux_ch not done status 0x%08x\n", VAR_36);
  VAR_34 = -VAR_12;
  goto out;
 }




 if (VAR_36 & VAR_8) {
  FUNC_3("dp_aux_ch receive error status 0x%08x\n", VAR_36);
  VAR_34 = -VAR_13;
  goto out;
 }



 if (VAR_36 & VAR_11) {
  FUNC_2("dp_aux_ch timeout status 0x%08x\n", VAR_36);
  VAR_34 = -VAR_14;
  goto out;
 }


 VAR_35 = ((VAR_36 & VAR_5) >>
        VAR_6);
 if (VAR_35 > VAR_26)
  VAR_35 = VAR_26;

 for (VAR_33 = 0; VAR_33 < VAR_35; VAR_33 += 4)
  FUNC_25(FUNC_6(VAR_32 + VAR_33),
      VAR_25 + VAR_33, VAR_35 - VAR_33);

 VAR_34 = VAR_35;
out:
 FUNC_24(&VAR_30->pm_qos, VAR_21);

 return VAR_34;
}
