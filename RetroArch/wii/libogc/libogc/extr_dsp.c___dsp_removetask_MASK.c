
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; int state; int flags; } ;
typedef TYPE_1__ dsptask_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_0(dsptask_t *VAR_5)
{
 VAR_5->flags = VAR_0;
 VAR_5->state = VAR_1;
 if(VAR_3==VAR_5) {
  if(VAR_5->next) {
   VAR_3 = VAR_5->next;
   VAR_3->prev = ((void*)0);
   return;
  }
  VAR_2 = ((void*)0);
  VAR_4 = ((void*)0);
  VAR_3 = ((void*)0);
  return;
 }
 if(VAR_4==VAR_5) {
  VAR_4 = VAR_5->prev;
  VAR_4->next = ((void*)0);
  VAR_2 = VAR_3;
  return;
 }
 VAR_2 = VAR_2->next;
}
