
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {TYPE_1__* CurrentIpSecSaSend; TYPE_1__* CurrentIpSecSaRecv; } ;
struct TYPE_12__ {int IPsecSaList; int ClientList; } ;
struct TYPE_11__ {struct TYPE_11__* PairIPsecSa; } ;
typedef TYPE_1__ IPSECSA ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_3__ IKE_CLIENT ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(IKE_SERVER *VAR_0, IPSECSA *VAR_1)
{
 UINT VAR_2;
 IPSECSA *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1);


 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_0->IPsecSaList);VAR_2++)
 {
  IPSECSA *VAR_4 = FUNC_3(VAR_0->IPsecSaList, VAR_2);

  if (VAR_4->PairIPsecSa == VAR_1)
  {
   VAR_4->PairIPsecSa = VAR_3;
  }
 }


 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_0->ClientList);VAR_2++)
 {
  IKE_CLIENT *VAR_5 = FUNC_3(VAR_0->ClientList, VAR_2);

  if (VAR_5->CurrentIpSecSaRecv == VAR_1)
  {
   VAR_5->CurrentIpSecSaRecv = VAR_3;
  }

  if (VAR_5->CurrentIpSecSaSend == VAR_1)
  {
   VAR_5->CurrentIpSecSaSend = VAR_3;
  }
 }

 FUNC_0(VAR_0->IPsecSaList, VAR_1);
 FUNC_1(VAR_1);
}
