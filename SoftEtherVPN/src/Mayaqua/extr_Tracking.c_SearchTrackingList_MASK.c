
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef size_t UINT ;
struct TYPE_6__ {struct TYPE_6__* Next; TYPE_1__* Object; } ;
struct TYPE_5__ {scalar_t__ Address; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef TYPE_2__ TRACKING_LIST ;


 size_t FUNC_0 (scalar_t__) ;
 TYPE_2__** VAR_0 ;

TRACKING_OBJECT *FUNC_1(UINT64 VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_0[VAR_2] != ((void*)0))
 {
  TRACKING_LIST *VAR_3 = VAR_0[VAR_2];

  while (1)
  {
   if (VAR_3->Object->Address == VAR_1)
   {
    return VAR_3->Object;
   }

   VAR_3 = VAR_3->Next;

   if (VAR_3 == ((void*)0))
   {
    break;
   }
  }
 }

 return ((void*)0);
}
