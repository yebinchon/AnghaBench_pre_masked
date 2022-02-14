
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* expires; } ;
struct pvr2_hdw {int state_decoder_run; int state_decoder_quiescent; int state_decoder_ready; scalar_t__ pathway_state; scalar_t__ decoder_client_id; TYPE_1__ decoder_stabilization_timer; scalar_t__ flag_decoder_missed; TYPE_1__ quiescent_timer; scalar_t__ state_encoder_ok; int state_encoder_config; int state_pipeline_config; scalar_t__ state_pipeline_pause; scalar_t__ state_pipeline_req; scalar_t__ state_pathway_ok; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* VAR_5 ;
 scalar_t__ FUNC_2 (struct pvr2_hdw*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct pvr2_hdw *VAR_6)
{
 if (VAR_6->state_decoder_run) {
  if (VAR_6->state_encoder_ok) {
   if (VAR_6->state_pipeline_req &&
       !VAR_6->state_pipeline_pause &&
       VAR_6->state_pathway_ok) return 0;
  }
  if (!VAR_6->flag_decoder_missed) {
   FUNC_2(VAR_6,0);
  }
  VAR_6->state_decoder_quiescent = 0;
  VAR_6->state_decoder_run = 0;

  FUNC_1(&VAR_6->quiescent_timer);



  FUNC_1(&VAR_6->decoder_stabilization_timer);
  VAR_6->state_decoder_ready = 0;
 } else {
  if (!VAR_6->state_decoder_quiescent) {
   if (!FUNC_3(&VAR_6->quiescent_timer)) {
    if (!VAR_6->state_decoder_quiescent) {
     VAR_6->quiescent_timer.expires =
      VAR_5 +
      (VAR_0 * VAR_4
       / 1000);
     FUNC_0(&VAR_6->quiescent_timer);
    }
   }



   return 0;
  }
  if (!VAR_6->state_pathway_ok ||
      (VAR_6->pathway_state != VAR_2) ||
      !VAR_6->state_pipeline_req ||
      VAR_6->state_pipeline_pause ||
      !VAR_6->state_pipeline_config ||
      !VAR_6->state_encoder_config ||
      !VAR_6->state_encoder_ok) return 0;
  FUNC_1(&VAR_6->quiescent_timer);
  if (VAR_6->flag_decoder_missed) return 0;
  if (FUNC_2(VAR_6,!0) < 0) return 0;
  VAR_6->state_decoder_quiescent = 0;
  VAR_6->state_decoder_ready = 0;
  VAR_6->state_decoder_run = !0;
  if (VAR_6->decoder_client_id == VAR_1) {
   VAR_6->decoder_stabilization_timer.expires =
    VAR_5 +
    (VAR_0 * VAR_3 /
     1000);
   FUNC_0(&VAR_6->decoder_stabilization_timer);
  } else {
   VAR_6->state_decoder_ready = !0;
  }
 }
 FUNC_4("state_decoder_quiescent",VAR_6->state_decoder_quiescent);
 FUNC_4("state_decoder_run",VAR_6->state_decoder_run);
 FUNC_4("state_decoder_ready", VAR_6->state_decoder_ready);
 return !0;
}
