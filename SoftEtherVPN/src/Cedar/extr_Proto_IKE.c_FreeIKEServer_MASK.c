
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UDPPACKET ;
struct TYPE_6__ {int ThreadList; int Engine; int Cedar; int SockEvent; int ClientList; int IkeSaList; int IPsecSaList; int SendPacketList; } ;
typedef int IPSECSA ;
typedef TYPE_1__ IKE_SERVER ;
typedef int IKE_SA ;
typedef int IKE_CLIENT ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *,int *,int *,char*,...) ;
 void* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void FUNC_14(IKE_SERVER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_0, ((void*)0), ((void*)0), ((void*)0), "LI_STOPPING");

 for (VAR_1 = 0;VAR_1 < FUNC_10(VAR_0->SendPacketList);VAR_1++)
 {
  UDPPACKET *VAR_2 = FUNC_9(VAR_0->SendPacketList, VAR_1);

  FUNC_7(VAR_2);
 }

 FUNC_12(VAR_0->SendPacketList);

 FUNC_0("Num of IPsec SAs: %u\n", FUNC_10(VAR_0->IPsecSaList));
 FUNC_8(VAR_0, ((void*)0), ((void*)0), ((void*)0), "LI_NUM_IPSEC_SA", FUNC_10(VAR_0->IPsecSaList));

 for (VAR_1 = 0;VAR_1 < FUNC_10(VAR_0->IPsecSaList);VAR_1++)
 {
  IPSECSA *VAR_3 = FUNC_9(VAR_0->IPsecSaList, VAR_1);

  FUNC_2(VAR_3);
 }

 FUNC_12(VAR_0->IPsecSaList);

 FUNC_0("Num of IKE SAs: %u\n", FUNC_10(VAR_0->IkeSaList));
 FUNC_8(VAR_0, ((void*)0), ((void*)0), ((void*)0), "LI_NUM_IKE_SA", FUNC_10(VAR_0->IkeSaList));

 for (VAR_1 = 0;VAR_1 < FUNC_10(VAR_0->IkeSaList);VAR_1++)
 {
  IKE_SA *VAR_4 = FUNC_9(VAR_0->IkeSaList, VAR_1);

  FUNC_5(VAR_4);
 }

 FUNC_12(VAR_0->IkeSaList);

 FUNC_0("Num of IKE_CLIENTs: %u\n", FUNC_10(VAR_0->ClientList));
 FUNC_8(VAR_0, ((void*)0), ((void*)0), ((void*)0), "LI_NUM_IKE_CLIENTS", FUNC_10(VAR_0->ClientList));

 for (VAR_1 = 0;VAR_1 < FUNC_10(VAR_0->ClientList);VAR_1++)
 {
  IKE_CLIENT *VAR_5 = FUNC_9(VAR_0->ClientList, VAR_1);

  FUNC_3(VAR_0, VAR_5);
 }

 FUNC_12(VAR_0->ClientList);

 FUNC_13(VAR_0->SockEvent);

 FUNC_8(VAR_0, ((void*)0), ((void*)0), ((void*)0), "LI_STOP");

 FUNC_11(VAR_0->Cedar);

 FUNC_4(VAR_0->Engine);

 FUNC_0("FreeThreadList()...\n");
 FUNC_6(VAR_0->ThreadList);
 FUNC_0("FreeThreadList() Done.\n");

 FUNC_1(VAR_0);
}
