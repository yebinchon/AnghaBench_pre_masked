
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_commands; } ;
struct cardstate {int commands_pending; int lock; TYPE_2__* ops; TYPE_1__ at_state; int cidmode; } ;
struct bc_state {int chstate; } ;
struct at_state_t {int list; int seq_index; struct cardstate* cs; struct bc_state* bcs; } ;
struct TYPE_4__ {int (* close_bchannel ) (struct bc_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bc_state*,int ) ;
 int FUNC_2 (struct at_state_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct bc_state*) ;

__attribute__((used)) static void FUNC_7(struct at_state_t **VAR_5)
{
 unsigned long VAR_6;
 struct bc_state *VAR_7 = (*VAR_5)->bcs;
 struct cardstate *VAR_8 = (*VAR_5)->cs;

 FUNC_4(&VAR_8->lock, VAR_6);
 ++(*VAR_5)->seq_index;


 if (!VAR_8->cidmode) {
  VAR_8->at_state.pending_commands |= VAR_4;
  VAR_8->commands_pending = 1;
  FUNC_0(VAR_2, "Scheduling PC_UMMODE");
 }
 FUNC_5(&VAR_8->lock, VAR_6);

 if (VAR_7) {

  VAR_8->ops->close_bchannel(VAR_7);

  if (VAR_7->chstate & (VAR_0 | VAR_1)) {
   VAR_7->chstate &= ~(VAR_0 | VAR_1);
   FUNC_1(VAR_7, VAR_3);
  }
 } else {

  FUNC_4(&VAR_8->lock, VAR_6);
  FUNC_3(&(*VAR_5)->list);
  FUNC_2(*VAR_5);
  *VAR_5 = ((void*)0);
  FUNC_5(&VAR_8->lock, VAR_6);
 }
}
