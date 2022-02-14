
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int CallStack; struct TYPE_6__* Next; struct TYPE_6__* Object; int Address; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef TYPE_1__ TRACKING_LIST ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (int ) ;
 TYPE_1__** VAR_0 ;

void FUNC_3(TRACKING_OBJECT *VAR_1, bool VAR_2)
{
 UINT VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_2(VAR_1->Address);

 if (VAR_0[VAR_3] != ((void*)0))
 {
  TRACKING_LIST *VAR_4 = ((void*)0);

  if (VAR_0[VAR_3]->Object == VAR_1)
  {
   VAR_4 = VAR_0[VAR_3];
   VAR_0[VAR_3] = VAR_0[VAR_3]->Next;
  }
  else
  {
   TRACKING_LIST *VAR_5 = VAR_0[VAR_3];
   TRACKING_LIST *VAR_6 = ((void*)0);

   while (1)
   {
    if (VAR_5->Object == VAR_1)
    {
     VAR_6->Next = VAR_5->Next;
     VAR_4 = VAR_5;
     break;
    }

    if (VAR_5->Next == ((void*)0))
    {
     break;
    }

    VAR_6 = VAR_5;
    VAR_5 = VAR_5->Next;
   }
  }

  if (VAR_4 != ((void*)0))
  {
   FUNC_1(VAR_4);

   if (VAR_2)
   {
    FUNC_0(VAR_1->CallStack);
    FUNC_1(VAR_1);
   }
  }
 }
}
