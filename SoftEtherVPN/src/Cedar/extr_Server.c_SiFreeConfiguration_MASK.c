
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NoMoreSave; int Halt; int * CfgRw; int * AzureClient; int * DDnsClient; int * OpenVpnServerUdp; int * IPsecServer; int * SaveThread; int * SaveHaltEvent; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(SERVER *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_9(VAR_1);


 VAR_1->NoMoreSave = 1;
 VAR_1->Halt = 1;
 FUNC_8(VAR_1->SaveHaltEvent);
 FUNC_10(VAR_1->SaveThread, VAR_0);

 FUNC_6(VAR_1->SaveHaltEvent);
 FUNC_7(VAR_1->SaveThread);

 VAR_1->SaveHaltEvent = ((void*)0);
 VAR_1->SaveThread = ((void*)0);



 if (VAR_1->IPsecServer != ((void*)0))
 {
  FUNC_4(VAR_1->IPsecServer);
  VAR_1->IPsecServer = ((void*)0);
 }


 if (VAR_1->OpenVpnServerUdp != ((void*)0))
 {
  FUNC_5(VAR_1->OpenVpnServerUdp);
  VAR_1->OpenVpnServerUdp = ((void*)0);
 }



 if (VAR_1->DDnsClient != ((void*)0))
 {
  FUNC_2(VAR_1->DDnsClient);
  VAR_1->DDnsClient = ((void*)0);
 }


 if (VAR_1->AzureClient != ((void*)0))
 {
  FUNC_0(VAR_1->AzureClient);
  VAR_1->AzureClient = ((void*)0);
 }

 FUNC_1(VAR_1->CfgRw);
 VAR_1->CfgRw = ((void*)0);


 FUNC_3();
}
