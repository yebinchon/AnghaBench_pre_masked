
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int * ClientList; int * IPsecSaList; int * IkeSaList; } ;
struct TYPE_14__ {scalar_t__ Deleting; } ;
typedef int LIST ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_1__ IKE_SA ;
typedef TYPE_1__ IKE_CLIENT ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (int *) ;

void FUNC_8(IKE_SERVER *VAR_0)
{
 UINT VAR_1;
 LIST *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->IkeSaList);VAR_1++)
 {
  IKE_SA *VAR_3 = FUNC_1(VAR_0->IkeSaList, VAR_1);
  if (VAR_3->Deleting)
  {
   if (VAR_2 == ((void*)0))
   {
    VAR_2 = FUNC_3(((void*)0));
   }

   FUNC_0(VAR_2, VAR_3);
  }
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_2);VAR_1++)
 {
  IKE_SA *VAR_4 = FUNC_1(VAR_2, VAR_1);

  FUNC_6(VAR_0, VAR_4);
 }

 FUNC_7(VAR_2);

 VAR_2 = ((void*)0);

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->IPsecSaList);VAR_1++)
 {
  IPSECSA *VAR_5 = FUNC_1(VAR_0->IPsecSaList, VAR_1);
  if (VAR_5->Deleting)
  {
   if (VAR_2 == ((void*)0))
   {
    VAR_2 = FUNC_3(((void*)0));
   }

   FUNC_0(VAR_2, VAR_5);
  }
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_2);VAR_1++)
 {
  IPSECSA *VAR_6 = FUNC_1(VAR_2, VAR_1);

  FUNC_4(VAR_0, VAR_6);
 }

 FUNC_7(VAR_2);

 VAR_2 = ((void*)0);

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_0->ClientList);VAR_1++)
 {
  IKE_CLIENT *VAR_7 = FUNC_1(VAR_0->ClientList, VAR_1);
  if (VAR_7->Deleting)
  {
   if (VAR_2 == ((void*)0))
   {
    VAR_2 = FUNC_3(((void*)0));
   }

   FUNC_0(VAR_2, VAR_7);
  }
 }

 for (VAR_1 = 0;VAR_1 < FUNC_2(VAR_2);VAR_1++)
 {
  IKE_CLIENT *VAR_8 = FUNC_1(VAR_2, VAR_1);

  FUNC_5(VAR_0, VAR_8);
 }

 FUNC_7(VAR_2);
}
