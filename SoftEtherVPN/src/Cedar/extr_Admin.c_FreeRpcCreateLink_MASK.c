
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ClientAuth; int ClientOption; int * ServerCert; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(RPC_CREATE_LINK *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->ServerCert != ((void*)0))
 {
  FUNC_2(VAR_0->ServerCert);
 }
 FUNC_1(VAR_0->ClientOption);
 FUNC_0(VAR_0->ClientAuth);
}
