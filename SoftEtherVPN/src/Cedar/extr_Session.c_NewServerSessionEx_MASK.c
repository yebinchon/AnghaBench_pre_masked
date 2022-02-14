
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int user_name_upper ;
typedef int tmp ;
typedef int rand ;
typedef int pc_name ;
typedef int name ;
typedef int machine ;
typedef int hub_name_upper ;
typedef void* UCHAR ;
struct TYPE_24__ {TYPE_14__* Server; } ;
struct TYPE_23__ {char* InProcPrefix; int ref; TYPE_1__* Thread; } ;
struct TYPE_22__ {char* Name; int SessionCounter; scalar_t__ IsVgsSuperRelayHub; scalar_t__ IsVgsHub; } ;
struct TYPE_21__ {int ServerMode; int InProcMode; int* IpcMacAddress; int UniqueId; int SessionKey32; int SessionKey; int * Policy; int Name; TYPE_5__* Connection; int PacketAdapter; int DelayedPacketList; int ClientStatus; TYPE_4__* Hub; TYPE_1__* Thread; int QoS; void* OldTraffic; void* TrafficLock; int CancelList; int Cancel1; int HaltEvent; void* Traffic; int LastCommTime; int CreatedTime; TYPE_6__* Cedar; int ref; void* lock; int LoggingRecordCount; } ;
struct TYPE_20__ {int NumTokens; char** Token; } ;
struct TYPE_19__ {int ref; } ;
struct TYPE_18__ {scalar_t__ ServerType; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ SESSION ;
typedef int POLICY ;
typedef TYPE_4__ HUB ;
typedef TYPE_5__ CONNECTION ;
typedef TYPE_6__ CEDAR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,void**,int) ;
 int VAR_2 ;
 int FUNC_3 (int*,void**,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,char*,char*,...) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (TYPE_14__*,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (char*,int,int*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 void* FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_6__*,int ,int *) ;
 void* FUNC_22 () ;
 TYPE_2__* FUNC_23 (char*,char*) ;
 int FUNC_24 (void**,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_25 (void**,char*,int ) ;
 int FUNC_26 (char*,int,char*) ;
 scalar_t__ FUNC_27 (char*,int ) ;
 int FUNC_28 (char*,int,char*) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (char*) ;
 int FUNC_31 () ;
 int FUNC_32 (char*) ;
 TYPE_3__* FUNC_33 (int) ;

SESSION *FUNC_34(CEDAR *VAR_7, CONNECTION *VAR_8, HUB *VAR_9, char *VAR_10, POLICY *VAR_11, bool VAR_12, UCHAR *VAR_13)
{
 SESSION *VAR_14;
 char VAR_15[VAR_3];
 char VAR_16[VAR_3];
 char VAR_17[VAR_4 + 1];

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_14 = FUNC_33(sizeof(SESSION));

 VAR_14->LoggingRecordCount = FUNC_16();
 VAR_14->lock = FUNC_19();
 VAR_14->ref = FUNC_20();
 VAR_14->Cedar = VAR_7;
 VAR_14->ServerMode = 1;
 VAR_14->CreatedTime = VAR_14->LastCommTime = FUNC_31();
 VAR_14->Traffic = FUNC_22();
 VAR_14->HaltEvent = FUNC_17();
 VAR_14->Cancel1 = FUNC_14();
 VAR_14->CancelList = FUNC_15();
 VAR_14->Thread = VAR_8->Thread;
 VAR_14->TrafficLock = FUNC_19();
 VAR_14->OldTraffic = FUNC_22();
 VAR_14->QoS = FUNC_10(VAR_7->Server, "b_support_qos");
 FUNC_0(VAR_14->Thread->ref);
 VAR_14->Hub = VAR_9;
 VAR_14->ClientStatus = VAR_2;


 VAR_14->DelayedPacketList = FUNC_18(((void*)0));


 VAR_14->PacketAdapter = FUNC_8();

 VAR_14->Connection = VAR_8;
 FUNC_0(VAR_8->ref);


 FUNC_28(VAR_16, sizeof(VAR_16), VAR_9->Name);
 FUNC_30(VAR_16);
 FUNC_28(VAR_17, sizeof(VAR_17), VAR_10);
 FUNC_30(VAR_17);

 if ((FUNC_27(VAR_10, VAR_0) != 0) && (FUNC_27(VAR_10, VAR_1) != 0) || (VAR_7->Server == ((void*)0) || VAR_7->Server->ServerType == VAR_5))
 {
  if (FUNC_12(VAR_8->InProcPrefix))
  {
   FUNC_6(VAR_15, sizeof(VAR_15), "SID-%s-%u", VAR_17, FUNC_11(VAR_9->SessionCounter));
  }
  else
  {
   FUNC_6(VAR_15, sizeof(VAR_15), "SID-%s-[%s]-%u", VAR_17, VAR_8->InProcPrefix, FUNC_11(VAR_9->SessionCounter));
  }

  if (VAR_9->IsVgsHub || VAR_9->IsVgsSuperRelayHub)
  {
   UCHAR VAR_18[5];
   char VAR_19[32];

   FUNC_24(VAR_18, sizeof(VAR_18));

   FUNC_2(VAR_19, sizeof(VAR_19), VAR_18, sizeof(VAR_18));

   FUNC_26(VAR_15, sizeof(VAR_15), "-");
   FUNC_26(VAR_15, sizeof(VAR_15), VAR_19);
  }
 }
 else
 {
  UCHAR VAR_20[VAR_6];
  char VAR_21[VAR_3];
  FUNC_24(VAR_20, sizeof(VAR_20));
  FUNC_2(VAR_21, sizeof(VAR_21), VAR_20, 3);

  if (FUNC_27(VAR_10, VAR_1) != 0)
  {
   FUNC_6(VAR_15, sizeof(VAR_15), "SID-%s-%s", VAR_17,
    VAR_21);
  }
  else
  {
   char VAR_22[VAR_3];
   TOKEN_LIST *VAR_23;

   FUNC_9(VAR_21, sizeof(VAR_21));
   VAR_23 = FUNC_23(VAR_21, ".");
   if (VAR_23->NumTokens >= 1)
   {
    FUNC_28(VAR_22, sizeof(VAR_22), VAR_23->Token[0]);
   }
   else
   {
    FUNC_28(VAR_22, sizeof(VAR_22), "pc");
   }
   FUNC_7(VAR_23);

   FUNC_30(VAR_22);

   FUNC_6(VAR_15, sizeof(VAR_15), "SID-%s-%s-%u", VAR_17, VAR_22,
    FUNC_11(VAR_9->SessionCounter));
  }
 }

 VAR_14->Name = FUNC_4(VAR_15);
 VAR_14->Policy = VAR_11;
 VAR_14->InProcMode = VAR_12;


 FUNC_1(VAR_9, VAR_14);


 FUNC_21(VAR_7, VAR_14->SessionKey, &VAR_14->SessionKey32);


 if (VAR_14->InProcMode)
 {
  if (VAR_13 != ((void*)0))
  {
   FUNC_3(VAR_14->IpcMacAddress, VAR_13, 6);
  }
  else
  {
   char VAR_24[VAR_3];
   char VAR_25[VAR_3];
   UCHAR VAR_26[VAR_6];

   FUNC_9(VAR_25, sizeof(VAR_25));

   FUNC_6(VAR_24, sizeof(VAR_24), "%s@%s@%u", VAR_25, VAR_9->Name, VAR_14->UniqueId);

   FUNC_30(VAR_24);
   FUNC_32(VAR_24);

   FUNC_25(VAR_26, VAR_24, FUNC_29(VAR_24));

   VAR_14->IpcMacAddress[0] = 0xCA;
   VAR_14->IpcMacAddress[1] = VAR_26[1];
   VAR_14->IpcMacAddress[2] = VAR_26[2];
   VAR_14->IpcMacAddress[3] = VAR_26[3];
   VAR_14->IpcMacAddress[4] = VAR_26[4];
   VAR_14->IpcMacAddress[5] = VAR_26[5];

   FUNC_13(VAR_24, sizeof(VAR_24), VAR_14->IpcMacAddress);
   FUNC_5("MAC Address for IPC: %s\n", VAR_24);
  }
 }

 return VAR_14;
}
