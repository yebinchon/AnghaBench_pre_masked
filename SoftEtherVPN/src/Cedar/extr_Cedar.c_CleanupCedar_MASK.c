
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int CurrentActiveLinks; int FifoBudgetLock; int QueueBudgetLock; int CurrentTcpQueueSizeLock; int CurrentRegionLock; int OpenVPNPublicPortsLock; int UdpPortList; int AcceptingSockets; int CedarSuperLock; int AssignedClientLicense; int AssignedBridgeLicense; struct TYPE_9__* BuildInfo; struct TYPE_9__* VerString; int TrafficLock; int Traffic; struct TYPE_9__* HttpAcceptEncoding; struct TYPE_9__* HttpAcceptLanguage; struct TYPE_9__* HttpAccept; struct TYPE_9__* HttpUserAgent; struct TYPE_9__* MachineName; struct TYPE_9__* ServerStr; int TrafficDiffList; struct TYPE_9__* HubName; struct TYPE_9__* Name; struct TYPE_9__* CipherList; scalar_t__ ServerK; int * ServerX; int * DebugLog; int CurrentSessions; int ConnectionIncrement; int lock; int UDPEntryList; int ConnectionList; int HubList; int ListenerList; int CaList; int WebUI; } ;
typedef TYPE_1__ TRAFFIC_DIFF ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(CEDAR *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_15(VAR_0->WebUI);
 FUNC_3(VAR_0);







 for (VAR_1 = 0;VAR_1 < FUNC_12(VAR_0->CaList);VAR_1++)
 {
  X *VAR_2 = FUNC_11(VAR_0->CaList, VAR_1);
  FUNC_10(VAR_2);
 }
 FUNC_14(VAR_0->CaList);

 FUNC_14(VAR_0->ListenerList);
 FUNC_14(VAR_0->HubList);
 FUNC_14(VAR_0->ConnectionList);

 FUNC_14(VAR_0->UDPEntryList);
 FUNC_1(VAR_0->lock);
 FUNC_0(VAR_0->ConnectionIncrement);
 FUNC_0(VAR_0->CurrentSessions);

 if (VAR_0->DebugLog != ((void*)0))
 {
  FUNC_6(VAR_0->DebugLog);
 }

 if (VAR_0->ServerX)
 {
  FUNC_10(VAR_0->ServerX);
 }
 if (VAR_0->ServerK)
 {
  FUNC_4(VAR_0->ServerK);
 }

 if (VAR_0->CipherList)
 {
  FUNC_2(VAR_0->CipherList);
 }

 for (VAR_1 = 0;VAR_1 < FUNC_12(VAR_0->TrafficDiffList);VAR_1++)
 {
  TRAFFIC_DIFF *VAR_3 = FUNC_11(VAR_0->TrafficDiffList, VAR_1);
  FUNC_2(VAR_3->Name);
  FUNC_2(VAR_3->HubName);
  FUNC_2(VAR_3);
 }

 FUNC_14(VAR_0->TrafficDiffList);

 FUNC_2(VAR_0->ServerStr);
 FUNC_2(VAR_0->MachineName);

 FUNC_2(VAR_0->HttpUserAgent);
 FUNC_2(VAR_0->HttpAccept);
 FUNC_2(VAR_0->HttpAcceptLanguage);
 FUNC_2(VAR_0->HttpAcceptEncoding);

 FUNC_9(VAR_0->Traffic);

 FUNC_1(VAR_0->TrafficLock);

 FUNC_7(VAR_0);

 FUNC_2(VAR_0->VerString);
 FUNC_2(VAR_0->BuildInfo);

 FUNC_5(VAR_0);

 FUNC_0(VAR_0->AssignedBridgeLicense);
 FUNC_0(VAR_0->AssignedClientLicense);

 FUNC_8(VAR_0);

 FUNC_1(VAR_0->CedarSuperLock);

 FUNC_0(VAR_0->AcceptingSockets);

 FUNC_13(VAR_0->UdpPortList);

 FUNC_1(VAR_0->OpenVPNPublicPortsLock);

 FUNC_1(VAR_0->CurrentRegionLock);

 FUNC_1(VAR_0->CurrentTcpQueueSizeLock);
 FUNC_1(VAR_0->QueueBudgetLock);
 FUNC_1(VAR_0->FifoBudgetLock);

 FUNC_0(VAR_0->CurrentActiveLinks);

 FUNC_2(VAR_0);
}
