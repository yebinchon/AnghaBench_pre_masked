
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; TYPE_2__* prev; } ;
typedef TYPE_3__ wavepoint_history ;
struct TYPE_6__ {int num_wavepoints; TYPE_3__* head; } ;
struct net_local {TYPE_1__ wavepoint_table; TYPE_3__* curr_point; } ;
struct TYPE_7__ {TYPE_3__* next; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(wavepoint_history *VAR_0, struct net_local *VAR_1)
{
  if(VAR_0==((void*)0))
    return;

  if(VAR_1->curr_point==VAR_0)
    VAR_1->curr_point=((void*)0);

  if(VAR_0->prev!=((void*)0))
    VAR_0->prev->next=VAR_0->next;

  if(VAR_0->next!=((void*)0))
    VAR_0->next->prev=VAR_0->prev;

  if(VAR_1->wavepoint_table.head==VAR_0)
    VAR_1->wavepoint_table.head=VAR_0->next;

  VAR_1->wavepoint_table.num_wavepoints--;
  FUNC_0(VAR_0);
}
