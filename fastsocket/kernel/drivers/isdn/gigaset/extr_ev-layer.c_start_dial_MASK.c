
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int commands_pending; int lock; } ;
struct bc_state {int chstate; } ;
struct at_state_t {unsigned int seq_index; int pending_commands; struct cardstate* cs; struct bc_state* bcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct at_state_t*,void*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct at_state_t *VAR_4, void *VAR_5, unsigned VAR_6)
{
 struct bc_state *VAR_7 = VAR_4->bcs;
 struct cardstate *VAR_8 = VAR_4->cs;
 int VAR_9;
 unsigned long VAR_10;

 VAR_7->chstate |= VAR_0;

 FUNC_2(&VAR_8->lock, VAR_10);
 if (VAR_4->seq_index != VAR_6) {
  FUNC_3(&VAR_8->lock, VAR_10);
  goto error;
 }
 FUNC_3(&VAR_8->lock, VAR_10);

 VAR_9 = FUNC_1(VAR_4, VAR_5);
 if (VAR_9 != 0)
  goto error;


 VAR_4->pending_commands |= VAR_2;
 FUNC_0(VAR_1, "Scheduling PC_CID");
 VAR_8->commands_pending = 1;
 return;

error:
 VAR_4->pending_commands |= VAR_3;
 FUNC_0(VAR_1, "Scheduling PC_NOCID");
 VAR_8->commands_pending = 1;
 return;
}
