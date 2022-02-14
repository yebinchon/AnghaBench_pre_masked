
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct pvr2_hdw {int state_encoder_config; int state_encoder_waitok; scalar_t__ pathway_state; scalar_t__ state_encoder_ok; TYPE_1__ encoder_wait_timer; int state_pipeline_config; scalar_t__ state_pipeline_req; scalar_t__ state_pipeline_pause; int state_pipeline_idle; int state_pathway_ok; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct pvr2_hdw*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct pvr2_hdw *VAR_4)
{
 if (VAR_4->state_encoder_config) {
  if (VAR_4->state_encoder_ok) {
   if (VAR_4->state_pipeline_req &&
       !VAR_4->state_pipeline_pause) return 0;
  }
  VAR_4->state_encoder_config = 0;
  VAR_4->state_encoder_waitok = 0;
  FUNC_4("state_encoder_waitok",VAR_4->state_encoder_waitok);

  FUNC_1(&VAR_4->encoder_wait_timer);
 } else {
  if (!VAR_4->state_pathway_ok ||
      (VAR_4->pathway_state != VAR_1) ||
      !VAR_4->state_encoder_ok ||
      !VAR_4->state_pipeline_idle ||
      VAR_4->state_pipeline_pause ||
      !VAR_4->state_pipeline_req ||
      !VAR_4->state_pipeline_config) {



   if (FUNC_3(&VAR_4->encoder_wait_timer)) {
    FUNC_1(&VAR_4->encoder_wait_timer);
   }
   if (VAR_4->state_encoder_waitok) {



    VAR_4->state_encoder_waitok = 0;
    FUNC_4("state_encoder_waitok",
         VAR_4->state_encoder_waitok);
    return !0;
   }
   return 0;
  }
  if (!VAR_4->state_encoder_waitok) {
   if (!FUNC_3(&VAR_4->encoder_wait_timer)) {






    if (!VAR_4->state_encoder_waitok) {
     VAR_4->encoder_wait_timer.expires =
      VAR_3 +
      (VAR_0 * VAR_2
       / 1000);
     FUNC_0(&VAR_4->encoder_wait_timer);
    }
   }



   return 0;
  }
  FUNC_2(VAR_4);
  if (VAR_4->state_encoder_ok) VAR_4->state_encoder_config = !0;
 }
 FUNC_4("state_encoder_config",VAR_4->state_encoder_config);
 return !0;
}
