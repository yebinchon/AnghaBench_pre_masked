
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {struct TYPE_7__* Next; TYPE_1__* Object; } ;
struct TYPE_6__ {int Address; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef TYPE_2__ TRACKING_LIST ;


 TYPE_2__* FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 TYPE_2__** VAR_0 ;

void FUNC_2(TRACKING_OBJECT *VAR_1)
{
 UINT VAR_2;
 TRACKING_LIST *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(sizeof(TRACKING_LIST));
 VAR_3->Object = VAR_1;
 VAR_3->Next = ((void*)0);

 VAR_2 = FUNC_1(VAR_1->Address);

 if (VAR_0[VAR_2] == ((void*)0))
 {
  VAR_0[VAR_2] = VAR_3;
 }
 else
 {
  TRACKING_LIST *VAR_4 = VAR_0[VAR_2];
  while (1)
  {
   if (VAR_4->Next == ((void*)0))
   {
    VAR_4->Next = VAR_3;
    break;
   }

   VAR_4 = VAR_4->Next;
  }
 }
}
