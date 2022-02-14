
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {int pathway_state; int state_encoder_runok; TYPE_1__* hdw_desc; int state_decoder_ready; int state_decoder_run; int state_pathway_ok; int state_encoder_ok; } ;
struct TYPE_2__ {int digital_control_scheme; } ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct pvr2_hdw *VAR_1)
{
 if (!VAR_1->state_encoder_ok) {

  return 0;
 }
 if (!VAR_1->state_pathway_ok) {


  return 0;
 }

 switch (VAR_1->pathway_state) {
 case 129:
  if (VAR_1->state_decoder_run && VAR_1->state_decoder_ready) {


   return !0;
  }
  break;
 case 128:
  if ((VAR_1->hdw_desc->digital_control_scheme ==
       VAR_0) &&
      !VAR_1->state_encoder_runok) {
   return !0;
  }
  break;
 default:

  break;
 }


 return 0;
}
