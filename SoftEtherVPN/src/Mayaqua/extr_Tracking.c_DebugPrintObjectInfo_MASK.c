
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {struct TYPE_6__* Next; TYPE_1__* Object; } ;
struct TYPE_5__ {size_t Id; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef TYPE_2__ TRACKING_LIST ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 size_t VAR_0 ;
 int FUNC_3 () ;
 TYPE_2__** VAR_1 ;

void FUNC_4(UINT VAR_2)
{
 UINT VAR_3;
 TRACKING_OBJECT *VAR_4;


 VAR_4 = ((void*)0);
 FUNC_0();
 {
  for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
  {
   if (VAR_1[VAR_3] != ((void*)0))
   {
    TRACKING_LIST *VAR_5 = VAR_1[VAR_3];

    while (1)
    {
     if (VAR_5->Object->Id == VAR_2)
     {
      VAR_4 = VAR_5->Object;
      break;
     }

     if (VAR_5->Next == ((void*)0))
     {
      break;
     }

     VAR_5 = VAR_5->Next;
    }

    if (VAR_4 != ((void*)0))
    {
     break;
    }
   }
  }
 }
 FUNC_3();

 if (VAR_4 == ((void*)0))
 {

  FUNC_1("obj_id %u Not Found.\n\n", VAR_2);
  return;
 }

 FUNC_2(VAR_4);
 FUNC_1("\n");
}
