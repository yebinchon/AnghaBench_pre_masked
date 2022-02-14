
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_11__ {int ref; } ;
struct TYPE_10__ {int EnableMSCHAPv2; int MsChapV2_ErrorCode; int FlushList; int ClientHostname; int ClientSoftwareName; int Postfix; TYPE_1__* TubeSend; TYPE_1__* TubeRecv; void* ServerPort; int ServerIP; void* ClientPort; int ClientIP; int CryptName; void* AdjustMss; TYPE_3__* Cedar; int AuthProtocol; } ;
struct TYPE_9__ {int Ref; } ;
typedef TYPE_1__ TUBE ;
typedef int THREAD ;
typedef TYPE_2__ PPP_SESSION ;
typedef int IP ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int,int *) ;
 scalar_t__ FUNC_3 (char*) ;
 int * FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int,char*) ;
 TYPE_2__* FUNC_7 (int) ;

THREAD *FUNC_8(CEDAR *VAR_2, IP *VAR_3, UINT VAR_4, IP *VAR_5, UINT VAR_6, TUBE *VAR_7, TUBE *VAR_8, char *VAR_9, char *VAR_10, char *VAR_11, char *VAR_12, UINT VAR_13)
{
 PPP_SESSION *VAR_14;
 THREAD *VAR_15;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return ((void*)0);
 }
 if (FUNC_3(VAR_9))
 {
  VAR_9 = "PPP";
 }
 if (FUNC_3(VAR_12))
 {
  VAR_12 = "";
 }
 if (FUNC_3(VAR_10))
 {
  VAR_10 = "PPP VPN Client";
 }


 VAR_14 = FUNC_7(sizeof(PPP_SESSION));

 VAR_14->EnableMSCHAPv2 = 1;
 VAR_14->AuthProtocol = VAR_1;
 VAR_14->MsChapV2_ErrorCode = 691;

 VAR_14->Cedar = VAR_2;
 FUNC_0(VAR_2->ref);

 VAR_14->AdjustMss = VAR_13;

 FUNC_6(VAR_14->CryptName, sizeof(VAR_14->CryptName), VAR_12);

 FUNC_1(&VAR_14->ClientIP, VAR_3, sizeof(IP));
 VAR_14->ClientPort = VAR_4;

 FUNC_1(&VAR_14->ServerIP, VAR_5, sizeof(IP));
 VAR_14->ServerPort = VAR_6;

 VAR_14->TubeRecv = VAR_8;
 VAR_14->TubeSend = VAR_7;

 FUNC_0(VAR_14->TubeRecv->Ref);
 FUNC_0(VAR_14->TubeSend->Ref);

 FUNC_6(VAR_14->Postfix, sizeof(VAR_14->Postfix), VAR_9);
 FUNC_6(VAR_14->ClientSoftwareName, sizeof(VAR_14->ClientSoftwareName), VAR_10);

 if (FUNC_3(VAR_11))
 {
  FUNC_2(VAR_14->ClientHostname, sizeof(VAR_14->ClientHostname), VAR_3);
 }
 else
 {
  FUNC_6(VAR_14->ClientHostname, sizeof(VAR_14->ClientHostname), VAR_11);
 }

 VAR_14->FlushList = FUNC_5();


 VAR_15 = FUNC_4(VAR_0, VAR_14);

 return VAR_15;
}
