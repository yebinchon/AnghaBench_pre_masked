
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {int IsTunnelMode; void* CryptBlockSize; int CryptName; void* ServerPort; int ServerIP; void* ClientPort; int ClientIP; int Lock; int Now; int SendPacketList; int ClientId; int * Ike; int * IPsec; TYPE_2__* Cedar; void* Id; int Ref; } ;
typedef int IPSEC_SERVER ;
typedef int IP ;
typedef int IKE_SERVER ;
typedef TYPE_1__ ETHERIP_SERVER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (int) ;

ETHERIP_SERVER *FUNC_9(CEDAR *VAR_0, IPSEC_SERVER *VAR_1, IKE_SERVER *VAR_2,
         IP *VAR_3, UINT VAR_4, IP *VAR_5, UINT VAR_6, char *VAR_7,
         bool VAR_8, UINT VAR_9,
         char *VAR_10, UINT VAR_11)
{
 ETHERIP_SERVER *VAR_12;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_12 = FUNC_8(sizeof(ETHERIP_SERVER));

 VAR_12->Ref = FUNC_5();

 VAR_12->Id = VAR_11;

 VAR_12->Cedar = VAR_0;
 FUNC_0(VAR_12->Cedar->ref);
 VAR_12->IPsec = VAR_1;
 VAR_12->Ike = VAR_2;
 VAR_12->IsTunnelMode = VAR_8;

 FUNC_6(VAR_12->ClientId, sizeof(VAR_12->ClientId), VAR_10);

 VAR_12->SendPacketList = FUNC_3(((void*)0));

 VAR_12->Now = FUNC_7();

 VAR_12->Lock = FUNC_4();

 FUNC_1(&VAR_12->ClientIP, VAR_3, sizeof(IP));
 VAR_12->ClientPort = VAR_4;

 FUNC_1(&VAR_12->ServerIP, VAR_5, sizeof(IP));
 VAR_12->ServerPort = VAR_6;

 FUNC_6(VAR_12->CryptName, sizeof(VAR_12->CryptName), VAR_7);
 VAR_12->CryptBlockSize = VAR_9;

 FUNC_2(VAR_12, "LE_START_MODULE");

 return VAR_12;
}
