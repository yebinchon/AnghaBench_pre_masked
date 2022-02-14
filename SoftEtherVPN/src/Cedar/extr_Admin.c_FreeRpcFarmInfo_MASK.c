
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ServerCert; int FarmHubs; int Ports; } ;
typedef TYPE_1__ RPC_FARM_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(RPC_FARM_INFO *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Ports);
 FUNC_0(VAR_0->FarmHubs);
 FUNC_1(VAR_0->ServerCert);
}
