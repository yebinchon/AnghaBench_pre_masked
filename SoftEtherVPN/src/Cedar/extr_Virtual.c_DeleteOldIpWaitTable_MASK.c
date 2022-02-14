
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Now; int * IpWaitTable; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ Expire; struct TYPE_9__* Data; } ;
typedef int LIST ;
typedef TYPE_2__ IP_WAIT ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(VH *VAR_0)
{
 UINT VAR_1;
 LIST *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_0->IpWaitTable);VAR_1++)
 {
  IP_WAIT *VAR_3 = FUNC_3(VAR_0->IpWaitTable, VAR_1);

  if (VAR_3->Expire < VAR_0->Now)
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
  for (VAR_1 = 0;VAR_1 < FUNC_4(VAR_2);VAR_1++)
  {
   IP_WAIT *VAR_4 = FUNC_3(VAR_2, VAR_1);


   FUNC_1(VAR_0->IpWaitTable, VAR_4);


   FUNC_2(VAR_4->Data);
   FUNC_2(VAR_4);
  }
  FUNC_6(VAR_2);
 }
}
