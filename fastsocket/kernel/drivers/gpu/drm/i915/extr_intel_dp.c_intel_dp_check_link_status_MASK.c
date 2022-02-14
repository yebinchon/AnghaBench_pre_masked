
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int crtc; } ;
struct intel_encoder {TYPE_1__ base; int connectors_active; } ;
struct intel_dp {int* dpcd; int lane_count; } ;
struct TYPE_4__ {struct intel_encoder base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct intel_dp*,int ,int) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*,int*) ;
 scalar_t__ FUNC_10 (struct intel_dp*,int*) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (struct intel_dp*) ;
 int FUNC_13 (struct intel_dp*) ;

void
FUNC_14(struct intel_dp *VAR_6)
{
 struct intel_encoder *VAR_7 = &FUNC_3(VAR_6)->base;
 u8 VAR_8;
 u8 VAR_9[VAR_4];

 if (!VAR_7->connectors_active)
  return;

 if (FUNC_2(!VAR_7->base.crtc))
  return;


 if (!FUNC_9(VAR_6, VAR_9)) {
  FUNC_12(VAR_6);
  return;
 }


 if (!FUNC_8(VAR_6)) {
  FUNC_12(VAR_6);
  return;
 }


 if (VAR_6->dpcd[VAR_3] >= 0x11 &&
     FUNC_10(VAR_6, &VAR_8)) {

  FUNC_6(VAR_6,
         VAR_2,
         VAR_8);

  if (VAR_8 & VAR_0)
   FUNC_11(VAR_6);
  if (VAR_8 & (VAR_1 | VAR_5))
   FUNC_0("CP or sink specific irq unhandled\n");
 }

 if (!FUNC_4(VAR_9, VAR_6->lane_count)) {
  FUNC_1("%s: channel EQ not ok, retraining\n",
         FUNC_5(&VAR_7->base));
  FUNC_13(VAR_6);
  FUNC_7(VAR_6);
 }
}
