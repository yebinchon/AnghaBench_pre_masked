
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int * IkeClient; } ;
struct TYPE_11__ {int ClientList; int IPsecSaList; int IkeSaList; } ;
struct TYPE_10__ {int * IkeClient; } ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_3__ IKE_SA ;
typedef int IKE_CLIENT ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 void* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;

void FUNC_6(IKE_SERVER *VAR_0, IKE_CLIENT *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0->IkeSaList);VAR_2++)
 {
  IKE_SA *VAR_3 = FUNC_2(VAR_0->IkeSaList, VAR_2);

  if (VAR_3->IkeClient == VAR_1)
  {
   FUNC_5(VAR_0, VAR_3);
  }
 }
 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0->IPsecSaList);VAR_2++)
 {
  IPSECSA *VAR_4 = FUNC_2(VAR_0->IPsecSaList, VAR_2);

  if (VAR_4->IkeClient == VAR_1)
  {
   FUNC_4(VAR_0, VAR_4);
  }
 }

 FUNC_0(VAR_0->ClientList, VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
