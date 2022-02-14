
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* name; struct TYPE_4__* next; } ;
typedef TYPE_1__ CALLSTACK_DATA ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(CALLSTACK_DATA *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  CALLSTACK_DATA *VAR_1 = VAR_0->next;
  FUNC_0(VAR_0->name);
  FUNC_0(VAR_0);
  if (VAR_1 == ((void*)0))
  {
   break;
  }
  VAR_0 = VAR_1;
 }
}
