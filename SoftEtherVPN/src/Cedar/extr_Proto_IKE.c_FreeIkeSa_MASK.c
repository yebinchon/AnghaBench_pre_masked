
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CryptoKey; int SAi_b; int GXr; int GXi; int YourIDPayloadForAM; int DhSharedKey; int ResponderRand; int InitiatorRand; int SendBuffer; } ;
typedef TYPE_1__ IKE_SA ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(IKE_SA *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->SendBuffer);

 FUNC_1(VAR_0->InitiatorRand);
 FUNC_1(VAR_0->ResponderRand);
 FUNC_1(VAR_0->DhSharedKey);
 FUNC_1(VAR_0->YourIDPayloadForAM);

 FUNC_1(VAR_0->GXi);
 FUNC_1(VAR_0->GXr);

 FUNC_1(VAR_0->SAi_b);

 FUNC_2(VAR_0->CryptoKey);

 FUNC_0(VAR_0);
}
