
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {struct TYPE_5__* name; struct TYPE_5__* next; } ;
typedef TYPE_1__ CALLSTACK_DATA ;


 int FUNC_0 (TYPE_1__*) ;

CALLSTACK_DATA *FUNC_1(CALLSTACK_DATA *VAR_0, UINT VAR_1)
{
 CALLSTACK_DATA *VAR_2, *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = VAR_0;
 VAR_4 = 0;

 while (1)
 {
  if (VAR_4 >= VAR_1)
  {
   return VAR_2;
  }
  VAR_4++;
  VAR_3 = VAR_2;
  VAR_2 = VAR_3->next;
  FUNC_0(VAR_3->name);
  FUNC_0(VAR_3);

  if (VAR_2 == ((void*)0))
  {
   return ((void*)0);
  }
 }
}
