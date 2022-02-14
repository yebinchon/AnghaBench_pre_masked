
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ prio; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ dsptask_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(dsptask_t *VAR_3)
{
 dsptask_t *VAR_4;

 if(!VAR_1) {
  VAR_0 = VAR_3;
  VAR_2 = VAR_3;
  VAR_1 = VAR_3;
  VAR_3->next = ((void*)0);
  VAR_3->prev = ((void*)0);
  return;
 }

 VAR_4 = VAR_1;
 while(VAR_4) {
  if(VAR_3->prio<VAR_4->prio) {
   VAR_3->prev = VAR_4->prev;
   VAR_4->prev = VAR_3;
   VAR_3->next = VAR_4;
   if(!VAR_3->prev) {
    VAR_1 = VAR_3;
    break;
   } else {
    VAR_3->prev->next = VAR_3;
    break;
   }
  }
  VAR_4 = VAR_4->next;
 }
 if(VAR_4) return;

 VAR_2->next = VAR_3;
 VAR_3->next = ((void*)0);
 VAR_3->prev = VAR_2;
 VAR_2 = VAR_3;
}
