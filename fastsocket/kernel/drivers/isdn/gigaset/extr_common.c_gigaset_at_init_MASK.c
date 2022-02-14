
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int tabcid; int tabnocid; } ;
struct bc_state {int dummy; } ;
struct at_state_t {int* int_var; int cid; int replystruct; struct bc_state* bcs; struct cardstate* cs; int ** str_var; scalar_t__ ConState; scalar_t__ seq_index; scalar_t__ timer_index; scalar_t__ timer_active; scalar_t__ timer_expires; scalar_t__ pending_commands; scalar_t__ getstring; scalar_t__ waiting; int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void FUNC_1(struct at_state_t *VAR_5, struct bc_state *VAR_6,
       struct cardstate *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_0(&VAR_5->list);
 VAR_5->waiting = 0;
 VAR_5->getstring = 0;
 VAR_5->pending_commands = 0;
 VAR_5->timer_expires = 0;
 VAR_5->timer_active = 0;
 VAR_5->timer_index = 0;
 VAR_5->seq_index = 0;
 VAR_5->ConState = 0;
 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
  VAR_5->str_var[VAR_9] = ((void*)0);
 VAR_5->int_var[VAR_2] = 0;
 VAR_5->int_var[VAR_1] = -1;
 VAR_5->int_var[VAR_3] = VAR_4;
 VAR_5->cs = VAR_7;
 VAR_5->bcs = VAR_6;
 VAR_5->cid = VAR_8;
 if (!VAR_8)
  VAR_5->replystruct = VAR_7->tabnocid;
 else
  VAR_5->replystruct = VAR_7->tabcid;
}
