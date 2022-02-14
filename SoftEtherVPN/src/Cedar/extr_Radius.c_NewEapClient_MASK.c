
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int NextRadiusPacketId; int PEAP_CurrentReceivingMsg; scalar_t__ LastRecvEapId; int Username; int ClientIpStr; int CalledStationStr; int SharedSecret; scalar_t__ GiveupTimeout; scalar_t__ ResendTimeout; scalar_t__ ServerPort; int ServerIp; int UdpSock; int Ref; } ;
typedef int IP ;
typedef TYPE_1__ EAP_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ,int,char*) ;
 TYPE_1__* FUNC_6 (int) ;

EAP_CLIENT *FUNC_7(IP *VAR_2, UINT VAR_3, char *VAR_4, UINT VAR_5, UINT VAR_6, char *VAR_7, char *VAR_8, char *VAR_9)
{
 EAP_CLIENT *VAR_10;
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_5 == 0)
 {
  VAR_5 = VAR_0;
 }
 if (VAR_6 == 0)
 {
  VAR_6 = VAR_1;
 }

 VAR_10 = FUNC_6(sizeof(EAP_CLIENT));

 VAR_10->Ref = FUNC_3();

 VAR_10->NextRadiusPacketId = 1;

 VAR_10->UdpSock = FUNC_4(0, FUNC_1(VAR_2));
 FUNC_0(&VAR_10->ServerIp, VAR_2, sizeof(IP));
 VAR_10->ServerPort = VAR_3;
 VAR_10->ResendTimeout = VAR_5;
 VAR_10->GiveupTimeout = VAR_6;
 FUNC_5(VAR_10->SharedSecret, sizeof(VAR_10->SharedSecret), VAR_4);

 FUNC_5(VAR_10->CalledStationStr, sizeof(VAR_10->CalledStationStr), VAR_9);
 FUNC_5(VAR_10->ClientIpStr, sizeof(VAR_10->ClientIpStr), VAR_7);
 FUNC_5(VAR_10->Username, sizeof(VAR_10->Username), VAR_8);
 VAR_10->LastRecvEapId = 0;

 VAR_10->PEAP_CurrentReceivingMsg = FUNC_2();

 return VAR_10;
}
