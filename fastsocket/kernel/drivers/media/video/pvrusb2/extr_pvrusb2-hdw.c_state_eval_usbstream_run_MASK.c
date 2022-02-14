
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {int state_usbstream_run; scalar_t__ pathway_state; int state_encoder_ok; int state_encoder_runok; TYPE_1__* hdw_desc; scalar_t__ state_encoder_run; scalar_t__ state_pathway_ok; scalar_t__ state_pipeline_pause; scalar_t__ state_pipeline_req; } ;
struct TYPE_2__ {scalar_t__ digital_control_scheme; scalar_t__ flag_digital_requires_cx23416; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct pvr2_hdw*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_3)
{
 if (VAR_3->state_usbstream_run) {
  int VAR_4 = !0;
  if (VAR_3->pathway_state == VAR_1) {
   VAR_4 = (VAR_3->state_encoder_ok &&
         VAR_3->state_encoder_run);
  } else if ((VAR_3->pathway_state == VAR_2) &&
      (VAR_3->hdw_desc->flag_digital_requires_cx23416)) {
   VAR_4 = VAR_3->state_encoder_ok;
  }
  if (VAR_4 &&
      VAR_3->state_pipeline_req &&
      !VAR_3->state_pipeline_pause &&
      VAR_3->state_pathway_ok) {
   return 0;
  }
  FUNC_0(VAR_3,0);
  VAR_3->state_usbstream_run = 0;
 } else {
  if (!VAR_3->state_pipeline_req ||
      VAR_3->state_pipeline_pause ||
      !VAR_3->state_pathway_ok) return 0;
  if (VAR_3->pathway_state == VAR_1) {
   if (!VAR_3->state_encoder_ok ||
       !VAR_3->state_encoder_run) return 0;
  } else if ((VAR_3->pathway_state == VAR_2) &&
      (VAR_3->hdw_desc->flag_digital_requires_cx23416)) {
   if (!VAR_3->state_encoder_ok) return 0;
   if (VAR_3->state_encoder_run) return 0;
   if (VAR_3->hdw_desc->digital_control_scheme ==
       VAR_0) {





    if (!VAR_3->state_encoder_runok) return 0;
   }
  }
  if (FUNC_0(VAR_3,!0) < 0) return 0;
  VAR_3->state_usbstream_run = !0;
 }
 FUNC_1("state_usbstream_run",VAR_3->state_usbstream_run);
 return !0;
}
