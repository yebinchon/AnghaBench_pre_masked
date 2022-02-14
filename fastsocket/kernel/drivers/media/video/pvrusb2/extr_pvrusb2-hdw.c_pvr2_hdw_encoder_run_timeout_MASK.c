
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int state_encoder_runok; int state_stale; int workpoll; int workqueue; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct pvr2_hdw *VAR_1 = (struct pvr2_hdw *)VAR_0;
 if (!VAR_1->state_encoder_runok) {
  VAR_1->state_encoder_runok = !0;
  FUNC_1("state_encoder_runok",VAR_1->state_encoder_runok);
  VAR_1->state_stale = !0;
  FUNC_0(VAR_1->workqueue,&VAR_1->workpoll);
 }
}
