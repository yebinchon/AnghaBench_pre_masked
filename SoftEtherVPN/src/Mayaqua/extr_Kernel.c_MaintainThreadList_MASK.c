
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Stopped; } ;
typedef TYPE_1__ THREAD ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

void FUNC_9(LIST *VAR_0)
{
 UINT VAR_1;
 LIST *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0);
 {
  for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_0);VAR_1++)
  {
   THREAD *VAR_3 = FUNC_2(VAR_0, VAR_1);

   if (VAR_3->Stopped)
   {
    if (VAR_2 == ((void*)0))
    {
     VAR_2 = FUNC_5(((void*)0));
    }

    FUNC_0(VAR_2, VAR_3);
   }
  }

  if (VAR_2 != ((void*)0))
  {
   for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_2);VAR_1++)
   {
    THREAD *VAR_4 = FUNC_2(VAR_2, VAR_1);

    FUNC_7(VAR_4);

    FUNC_1(VAR_0, VAR_4);
   }

   FUNC_6(VAR_2);
  }
 }
 FUNC_8(VAR_0);
}
