
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {scalar_t__ Expire; } ;
struct TYPE_11__ {int * IpCombine; TYPE_1__* v; } ;
struct TYPE_10__ {scalar_t__ Now; } ;
typedef TYPE_2__ NATIVE_NAT ;
typedef int LIST ;
typedef TYPE_3__ IP_COMBINE ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (int *) ;

void FUNC_7(NATIVE_NAT *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 VAR_1 = ((void*)0);
 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0->IpCombine);VAR_2++)
 {
  IP_COMBINE *VAR_3 = FUNC_2(VAR_0->IpCombine, VAR_2);

  if (VAR_3->Expire < VAR_0->v->Now)
  {
   if (VAR_1 == ((void*)0))
   {
    VAR_1 = FUNC_4(((void*)0));
   }
   FUNC_0(VAR_1, VAR_3);
  }
 }

 if (VAR_1 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_1);VAR_2++)
  {
   IP_COMBINE *VAR_4 = FUNC_2(VAR_1, VAR_2);


   FUNC_1(VAR_0->IpCombine, VAR_4);


   FUNC_5(VAR_0, VAR_4);
  }
  FUNC_6(VAR_1);
 }
}
