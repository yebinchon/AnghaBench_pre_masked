
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int p ;
typedef int id ;
struct TYPE_24__ {int IsL3Mode; int BridgeMode; int Mss; int Layer; int * ClientCertificate; int ClientHostname; int CryptName; int ServerPort; int ServerIp; int ClientPort; int ClientIp; int Password; int HubName; int UserName; int Postfix; int ClientName; } ;
struct TYPE_20__ {int * X; } ;
struct TYPE_19__ {int Password; int Username; int PeerInfo; } ;
struct TYPE_23__ {TYPE_3__ ClientCert; TYPE_2__ ClientKey; TYPE_1__* CipherEncrypt; } ;
struct TYPE_22__ {int SockEvent; int Cedar; } ;
struct TYPE_21__ {scalar_t__ Mode; int * IpcAsync; int ServerPort; int ServerIp; int ClientPort; int ClientIp; int * Ipc; } ;
struct TYPE_18__ {int IsNullCipher; int Name; } ;
typedef TYPE_4__ OPENVPN_SESSION ;
typedef TYPE_5__ OPENVPN_SERVER ;
typedef TYPE_6__ OPENVPN_CHANNEL ;
typedef int LIST ;
typedef TYPE_7__ IPC_PARAM ;
typedef int IP ;
typedef TYPE_7__ ETHERIP_ID ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*,char*) ;
 int * FUNC_9 (int ,TYPE_7__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*,TYPE_6__*) ;
 int FUNC_11 (int ,int ,TYPE_7__*) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_7__*,int) ;

void FUNC_14(OPENVPN_SERVER *VAR_7, OPENVPN_SESSION *VAR_8, OPENVPN_CHANNEL *VAR_9)
{

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }

 if (FUNC_7(VAR_8->Ipc) == 0)
 {
  FUNC_5(VAR_8->Ipc);

  VAR_8->Ipc = ((void*)0);
 }

 if (VAR_8->IpcAsync == ((void*)0))
 {
  LIST *VAR_10;
  IPC_PARAM VAR_11;
  ETHERIP_ID VAR_12;

  FUNC_13(&VAR_11, sizeof(VAR_11));
  FUNC_13(&VAR_12, sizeof(VAR_12));


  FUNC_11(VAR_7->Cedar, VAR_9->ClientKey.Username, &VAR_12);



  FUNC_12(VAR_11.ClientName, sizeof(VAR_11.ClientName), VAR_2);
  FUNC_12(VAR_11.Postfix, sizeof(VAR_11.Postfix), (VAR_8->Mode == VAR_6 ? VAR_4 : VAR_3));

  FUNC_12(VAR_11.UserName, sizeof(VAR_11.UserName), VAR_12.UserName);
  FUNC_12(VAR_11.HubName, sizeof(VAR_11.HubName), VAR_12.HubName);
  FUNC_12(VAR_11.Password, sizeof(VAR_11.Password), VAR_9->ClientKey.Password);

  FUNC_0(&VAR_11.ClientIp, &VAR_8->ClientIp, sizeof(IP));
  VAR_11.ClientPort = VAR_8->ClientPort;

  FUNC_0(&VAR_11.ServerIp, &VAR_8->ServerIp, sizeof(IP));
  VAR_11.ServerPort = VAR_8->ServerPort;

  if (VAR_9->CipherEncrypt->IsNullCipher == 0)
  {
   FUNC_12(VAR_11.CryptName, sizeof(VAR_11.CryptName), VAR_9->CipherEncrypt->Name);
  }





  VAR_10 = FUNC_8(VAR_9->ClientKey.PeerInfo, "\n", "=\t");


  if (FUNC_2(VAR_10, "UV_HOSTNAME"))
  {
   FUNC_12(VAR_11.ClientHostname, sizeof(VAR_11.ClientHostname), FUNC_3(VAR_10, "UV_HOSTNAME"));
  }
  else
  {
   FUNC_12(VAR_11.ClientHostname, sizeof(VAR_11.ClientHostname), FUNC_3(VAR_10, "IV_HWADDR"));
  }

  FUNC_4(VAR_10);

  if (VAR_8->Mode == VAR_6)
  {

   VAR_11.IsL3Mode = 1;
  }
  else
  {

   VAR_11.BridgeMode = 1;
  }

  if (FUNC_6(VAR_9->ClientKey.Username) || FUNC_6(VAR_9->ClientKey.Password))
  {

   if (VAR_9->ClientCert.X != ((void*)0))
   {
    VAR_11.ClientCertificate = VAR_9->ClientCert.X;
   }
  }

  VAR_11.Layer = (VAR_8->Mode == VAR_5) ? VAR_0 : VAR_1;


  VAR_11.Mss = FUNC_10(VAR_7, VAR_8, VAR_9);
  FUNC_1("MSS=%u\n", VAR_11.Mss);


  VAR_8->IpcAsync = FUNC_9(VAR_7->Cedar, &VAR_11, VAR_7->SockEvent);
 }
}
