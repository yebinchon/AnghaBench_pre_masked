
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Layer; int ClientCertificate; int Mss; int BridgeMode; int CryptName; int ClientHostname; int ServerPort; int ServerIp; int ClientPort; int ClientIp; int Password; int UserName; int HubName; int Postfix; int ClientName; } ;
typedef TYPE_1__ IPC_PARAM ;
typedef int IPC ;
typedef int CEDAR ;


 int * FUNC_0 (int *,int ,int ,int ,int ,int ,int *,int *,int ,int *,int ,int ,int ,int ,int ,int *,int ,int ) ;

IPC *FUNC_1(CEDAR *VAR_0, IPC_PARAM *VAR_1, UINT *VAR_2)
{
 IPC *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1->ClientName, VAR_1->Postfix, VAR_1->HubName,
  VAR_1->UserName, VAR_1->Password, VAR_2, &VAR_1->ClientIp,
  VAR_1->ClientPort, &VAR_1->ServerIp, VAR_1->ServerPort,
  VAR_1->ClientHostname, VAR_1->CryptName,
  VAR_1->BridgeMode, VAR_1->Mss, ((void*)0), VAR_1->ClientCertificate, VAR_1->Layer);

 return VAR_3;
}
