
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int commands_pending; } ;
struct at_state_t {int pending_commands; struct cardstate* cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct at_state_t*) ;

__attribute__((used)) static void FUNC_2(struct at_state_t *VAR_3)
{
 struct cardstate *VAR_4 = VAR_3->cs;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);

 if (VAR_5 == 0) {
  VAR_3->pending_commands |= VAR_1;
  FUNC_0(VAR_0, "Scheduling PC_ACCEPT");
  VAR_4->commands_pending = 1;
 } else {

  VAR_3->pending_commands |= VAR_2;
  FUNC_0(VAR_0, "Scheduling PC_HUP");
  VAR_4->commands_pending = 1;
 }
}
