
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Dh; int SharedKey; int ResponderRand; int InitiatorRand; int SendBuffer; int CryptoKey; } ;
typedef TYPE_1__ IPSECSA ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(IPSECSA *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->CryptoKey);

 FUNC_1(VAR_0->SendBuffer);

 FUNC_1(VAR_0->InitiatorRand);
 FUNC_1(VAR_0->ResponderRand);

 FUNC_1(VAR_0->SharedKey);

 FUNC_2(VAR_0->Dh);

 FUNC_0(VAR_0);
}
