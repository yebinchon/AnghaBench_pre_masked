
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_26__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int rec ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_46__ {TYPE_7__* Syslog; } ;
struct TYPE_45__ {char* Name; TYPE_26__* LoggingRecordCount; int ref; int ClientIP; scalar_t__ NormalClient; } ;
struct TYPE_44__ {scalar_t__ DestPort; int lock; int DestIp; } ;
struct TYPE_43__ {TYPE_5__* UDPHeader; } ;
struct TYPE_42__ {int DstPort; } ;
struct TYPE_41__ {TYPE_3__* IPv4Header; } ;
struct TYPE_40__ {scalar_t__ DstIP; } ;
struct TYPE_39__ {TYPE_9__* Server; } ;
struct TYPE_38__ {int c; } ;
struct TYPE_37__ {int SavePacketLog; } ;
struct TYPE_36__ {int PacketLogger; int Name; TYPE_2__* Cedar; scalar_t__ IsVgsHub; TYPE_13__* Option; int HubMacAddr; TYPE_1__ LogSetting; } ;
struct TYPE_35__ {scalar_t__ MaxLoggedPacketsPerMinute; int NoPhysicalIPOnPacketLog; scalar_t__ NoIPv6PacketLog; scalar_t__ NoIPv4PacketLog; } ;
struct TYPE_34__ {int NoLog; int WritePhysicalIP; TYPE_8__* SrcSession; int DestPhysicalIP; int SrcPhysicalIP; void* DestSessionName; void* SrcSessionName; TYPE_11__* Packet; TYPE_2__* Cedar; } ;
struct TYPE_33__ {scalar_t__ TypeL3; scalar_t__ TypeL4; TYPE_6__ L4; TYPE_4__ L3; int MacAddressDest; int MacAddressSrc; } ;
struct TYPE_32__ {TYPE_12__* Data; } ;
typedef TYPE_8__ SESSION ;
typedef TYPE_9__ SERVER ;
typedef TYPE_10__ RECORD ;
typedef TYPE_11__ PKT ;
typedef TYPE_12__ PACKET_LOG ;
typedef TYPE_13__ HUB_OPTION ;
typedef TYPE_14__ HUB ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_14__*,TYPE_11__*) ;
 int FUNC_2 (TYPE_8__*,scalar_t__,int ) ;
 TYPE_11__* FUNC_3 (TYPE_11__*,int) ;
 void* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_26__*) ;
 int FUNC_10 (int ,TYPE_12__*,char* (*) (TYPE_10__*)) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_13 (TYPE_10__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_14 (TYPE_9__*) ;
 int FUNC_15 (TYPE_9__*,char*,int ,int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int,int ) ;
 int FUNC_18 (int *,int,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_10__*,int) ;
 TYPE_12__* FUNC_21 (int) ;
 scalar_t__ FUNC_22 (int ,int ,int) ;

bool FUNC_23(HUB *VAR_8, SESSION *VAR_9, SESSION *VAR_10, PKT *VAR_11, UINT64 VAR_12)
{
 UINT VAR_13;
 PKT *VAR_14;
 PACKET_LOG *VAR_15;
 SERVER *VAR_16;
 UINT VAR_17;
 bool VAR_18 = 0;
 HUB_OPTION *VAR_19 = ((void*)0);

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return 1;
 }

 VAR_16 = VAR_8->Cedar->Server;

 if (VAR_8->LogSetting.SavePacketLog == 0)
 {

  return 1;
 }

 if (FUNC_22(VAR_8->HubMacAddr, VAR_11->MacAddressSrc, 6) == 0 ||
  FUNC_22(VAR_8->HubMacAddr, VAR_11->MacAddressDest, 6) == 0)
 {
  return 1;
 }

 VAR_19 = VAR_8->Option;


 VAR_13 = FUNC_1(VAR_8, VAR_11);
 if (VAR_13 == VAR_6)
 {

  return 1;
 }

 if (VAR_8->Option != ((void*)0))
 {
  if (VAR_8->Option->NoIPv4PacketLog && (VAR_11->TypeL3 == VAR_2 || VAR_11->TypeL3 == VAR_1))
  {

   return 1;
  }

  if (VAR_8->Option->NoIPv6PacketLog && VAR_11->TypeL3 == VAR_3)
  {

   return 1;
  }
 }

 if (VAR_8->Option != ((void*)0) && VAR_8->Option->MaxLoggedPacketsPerMinute != 0)
 {

  if (FUNC_2(VAR_9, VAR_8->Option->MaxLoggedPacketsPerMinute, VAR_12) == 0)
  {

   return 0;
  }
 }

 if (1)
 {
  if (FUNC_7(VAR_0) != 0)
  {
   VAR_18 = 1;
  }

  if (VAR_8->IsVgsHub)
  {
   VAR_18 = 0;
  }
 }

 VAR_17 = FUNC_14(VAR_16);


 VAR_14 = FUNC_3(VAR_11, VAR_13 == VAR_5 ? 1 : 0);


 VAR_15 = FUNC_21(sizeof(PACKET_LOG));

 VAR_15->Cedar = VAR_8->Cedar;
 VAR_15->Packet = VAR_14;
 VAR_15->NoLog = VAR_18;
 VAR_15->SrcSessionName = FUNC_4(VAR_9->Name);
 if (VAR_10 != ((void*)0))
 {
  VAR_15->DestSessionName = FUNC_4(VAR_10->Name);
 }
 else
 {
  VAR_15->DestSessionName = FUNC_4("");
 }

 if (VAR_19 == ((void*)0) || VAR_19->NoPhysicalIPOnPacketLog == 0)
 {
  if (VAR_9->NormalClient)
  {
   FUNC_17(VAR_15->SrcPhysicalIP, sizeof(VAR_15->SrcPhysicalIP), VAR_9->ClientIP);
  }

  if (VAR_10 != ((void*)0) && VAR_10->NormalClient)
  {
   FUNC_17(VAR_15->DestPhysicalIP, sizeof(VAR_15->DestPhysicalIP), VAR_10->ClientIP);
  }

  VAR_15->WritePhysicalIP = 1;
 }

 if (VAR_9->LoggingRecordCount != ((void*)0))
 {
  UINT VAR_20 = 0;
  while (VAR_9->LoggingRecordCount->c >= 30000)
  {
   FUNC_16(50);
   VAR_20++;
   if (VAR_20 >= 5)
   {
    break;
   }
  }
 }

 VAR_15->SrcSession = VAR_9;
 FUNC_0(VAR_9->ref);

 FUNC_9(VAR_9->LoggingRecordCount);

 if (VAR_17 == VAR_7)
 {
  RECORD VAR_21;
  char *VAR_22;
  wchar_t VAR_23[1024];
  bool VAR_24 = 0;

  if (VAR_11->TypeL3 == VAR_2 && VAR_11->TypeL4 == VAR_4)
  {
   if (VAR_16->Syslog != ((void*)0))
   {
    FUNC_12(VAR_16->Syslog->lock);
    {
     if (FUNC_11(&VAR_16->Syslog->DestIp) == 0 && VAR_16->Syslog->DestPort != 0)
     {
      if (FUNC_8(&VAR_16->Syslog->DestIp) == VAR_11->L3.IPv4Header->DstIP)
      {
       if (FUNC_5(VAR_11->L4.UDPHeader->DstPort) == VAR_16->Syslog->DestPort)
       {
        VAR_24 = 1;
       }
      }
     }
    }
    FUNC_19(VAR_16->Syslog->lock);
   }
  }

  FUNC_20(&VAR_21, sizeof(VAR_21));
  VAR_21.Data = VAR_15;

  VAR_22 = FUNC_13(&VAR_21);
  FUNC_18(VAR_23, sizeof(VAR_23), VAR_22);

  if (VAR_24 == 0)
  {
   FUNC_15(VAR_16, "PACKET_LOG", VAR_8->Name, VAR_23);
  }

  FUNC_6(VAR_22);
 }
 else
 {

  FUNC_10(VAR_8->PacketLogger, VAR_15, FUNC_13);
 }

 return 1;
}
