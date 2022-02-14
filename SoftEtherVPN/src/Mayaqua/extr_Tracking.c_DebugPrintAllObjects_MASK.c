
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {struct TYPE_3__* Next; int Object; } ;
typedef int TRACKING_OBJECT ;
typedef TYPE_1__ TRACKING_LIST ;
typedef int LIST ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_9 () ;
 TYPE_1__** VAR_2 ;

void FUNC_10()
{
 UINT VAR_3;
 LIST *VAR_4;


 VAR_4 = FUNC_4(VAR_0);
 FUNC_3();
 {
  for (VAR_3 = 0;VAR_3 < VAR_1;VAR_3++)
  {
   if (VAR_2[VAR_3] != ((void*)0))
   {
    TRACKING_LIST *VAR_5 = VAR_2[VAR_3];

    while (1)
    {
     FUNC_0(VAR_4, VAR_5->Object);

     if (VAR_5->Next == ((void*)0))
     {
      break;
     }

     VAR_5 = VAR_5->Next;
    }
   }
  }
 }
 FUNC_9();


 FUNC_8(VAR_4);


 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_4);VAR_3++)
 {
  TRACKING_OBJECT *VAR_6 = (TRACKING_OBJECT *)FUNC_1(VAR_4, VAR_3);
  FUNC_6(VAR_6);
 }


 FUNC_7(VAR_4);

 FUNC_5("\n");
}
