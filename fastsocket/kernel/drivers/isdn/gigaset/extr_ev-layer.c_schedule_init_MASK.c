
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending_commands; } ;
struct cardstate {int mstate; int commands_pending; TYPE_1__ at_state; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cardstate*) ;

__attribute__((used)) static void FUNC_2(struct cardstate *VAR_3, int VAR_4)
{
 if (VAR_3->at_state.pending_commands & VAR_2) {
  FUNC_0(VAR_0, "not scheduling PC_INIT again");
  return;
 }
 VAR_3->mstate = VAR_4;
 VAR_3->mode = VAR_1;
 FUNC_1(VAR_3);
 VAR_3->at_state.pending_commands |= VAR_2;
 VAR_3->commands_pending = 1;
 FUNC_0(VAR_0, "Scheduling PC_INIT");
}
