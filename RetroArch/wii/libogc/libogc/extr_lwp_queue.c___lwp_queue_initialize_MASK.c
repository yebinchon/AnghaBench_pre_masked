
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {TYPE_2__* last; int * perm_null; } ;
typedef TYPE_1__ lwp_queue ;
struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* prev; } ;
typedef TYPE_2__ lwp_node ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,void*,int,int) ;

void FUNC_3(lwp_queue *VAR_0,void *VAR_1,u32 VAR_2,u32 VAR_3)
{
 u32 VAR_4;
 lwp_node *VAR_5;
 lwp_node *VAR_6;




 VAR_4 = VAR_2;
 VAR_5 = FUNC_0(VAR_0);
 VAR_0->perm_null = ((void*)0);
 VAR_6 = (lwp_node*)VAR_1;

 while(VAR_4--) {
  VAR_5->next = VAR_6;
  VAR_6->prev = VAR_5;
  VAR_5 = VAR_6;
  VAR_6 = (lwp_node*)(((void*)VAR_6)+VAR_3);
 }
 VAR_5->next = FUNC_1(VAR_0);
 VAR_0->last = VAR_5;
}
