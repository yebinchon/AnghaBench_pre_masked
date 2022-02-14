
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct pvr2_hdw {int state_encoder_run; TYPE_1__ encoder_run_timer; int state_encoder_runok; scalar_t__ state_encoder_ok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct pvr2_hdw*) ;
 scalar_t__ FUNC_3 (struct pvr2_hdw*) ;
 int FUNC_4 (struct pvr2_hdw*) ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct pvr2_hdw *VAR_3)
{
 if (VAR_3->state_encoder_run) {
  if (!FUNC_4(VAR_3)) return 0;
  if (VAR_3->state_encoder_ok) {
   FUNC_1(&VAR_3->encoder_run_timer);
   if (FUNC_3(VAR_3) < 0) return !0;
  }
  VAR_3->state_encoder_run = 0;
 } else {
  if (!FUNC_5(VAR_3)) return 0;
  if (FUNC_2(VAR_3) < 0) return !0;
  VAR_3->state_encoder_run = !0;
  if (!VAR_3->state_encoder_runok) {
   VAR_3->encoder_run_timer.expires =
    VAR_2 + (VAR_0 * VAR_1 / 1000);
   FUNC_0(&VAR_3->encoder_run_timer);
  }
 }
 FUNC_6("state_encoder_run",VAR_3->state_encoder_run);
 return !0;
}
