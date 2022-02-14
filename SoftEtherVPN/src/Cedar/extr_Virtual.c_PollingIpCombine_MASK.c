
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Now; int * IpCombine; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {scalar_t__ Expire; } ;
typedef int LIST ;
typedef TYPE_2__ IP_COMBINE ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(VH *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 VAR_1 = ((void*)0);
 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_0->IpCombine);VAR_2++)
 {
  IP_COMBINE *VAR_3 = FUNC_3(VAR_0->IpCombine, VAR_2);

  if (VAR_3->Expire < VAR_0->Now)
  {
   if (VAR_1 == ((void*)0))
   {
    VAR_1 = FUNC_5(((void*)0));
   }
   FUNC_0(VAR_1, VAR_3);
  }
 }

 if (VAR_1 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_1);VAR_2++)
  {
   IP_COMBINE *VAR_4 = FUNC_3(VAR_1, VAR_2);


   FUNC_1(VAR_0->IpCombine, VAR_4);


   FUNC_2(VAR_0, VAR_4);
  }
  FUNC_6(VAR_1);
 }
}
