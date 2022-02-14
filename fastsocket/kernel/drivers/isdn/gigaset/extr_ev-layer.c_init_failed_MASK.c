
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pending_commands; } ;
struct cardstate {int mode; int channels; int commands_pending; TYPE_1__* bcs; int mstate; TYPE_2__ at_state; } ;
struct at_state_t {int pending_commands; } ;
struct TYPE_3__ {struct at_state_t at_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cardstate*) ;

__attribute__((used)) static void FUNC_1(struct cardstate *VAR_4, int VAR_5)
{
 int VAR_6;
 struct at_state_t *VAR_7;

 VAR_4->at_state.pending_commands &= ~VAR_2;
 VAR_4->mode = VAR_5;
 VAR_4->mstate = VAR_0;
 FUNC_0(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_4->channels; ++VAR_6) {
  VAR_7 = &VAR_4->bcs[VAR_6].at_state;
  if (VAR_7->pending_commands & VAR_1) {
   VAR_7->pending_commands &= ~VAR_1;
   VAR_7->pending_commands |= VAR_3;
   VAR_4->commands_pending = 1;
  }
 }
}
