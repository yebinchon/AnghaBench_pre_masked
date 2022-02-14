
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int pathway_state; int state_encoder_runok; int state_decoder_run; int state_pathway_ok; int state_encoder_ok; } ;





__attribute__((used)) static int FUNC_0(struct pvr2_hdw *VAR_0)
{
 if (!VAR_0->state_encoder_ok) {

  return !0;
 }
 if (!VAR_0->state_pathway_ok) {


  return !0;
 }

 switch (VAR_0->pathway_state) {
 case 129:
  if (!VAR_0->state_decoder_run) {



   return !0;
  }
  break;
 case 128:
  if (VAR_0->state_encoder_runok) {







   return !0;
  }
  break;
 default:

  return !0;
 }



 return 0;
}
