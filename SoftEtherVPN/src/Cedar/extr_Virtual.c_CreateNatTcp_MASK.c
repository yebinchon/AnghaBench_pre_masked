
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int NatTable; int TcpMss; int Now; int Counter; } ;
typedef TYPE_1__ VH ;
typedef void* UINT ;
struct TYPE_19__ {scalar_t__ SecureNAT_MaxTcpSynSentPerIp; scalar_t__ SecureNAT_MaxTcpSessionsPerIp; } ;
struct TYPE_18__ {int DisconnectNow; int CurrentRTT; int TcpSendTimeoutSpan; int Id; int SendSeqInit; int TcpStatus; void* RecvFifo; void* SendFifo; int TcpRecvMaxSegmentSize; int TcpSendMaxSegmentSize; int * Sock; int TcpLastRecvAckTime; int LastCommTime; int CreatedTime; void* DestPort; void* DestIp; void* SrcPort; void* SrcIp; int Protocol; int lock; TYPE_1__* v; } ;
typedef TYPE_2__ NAT_ENTRY ;
typedef int IP ;
typedef TYPE_3__ HUB_OPTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*,void*,char*,void*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,int ,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,void*,int ) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_1__*,char*,int ,char*,void*,char*,void*) ;
 TYPE_3__* FUNC_9 (TYPE_1__*) ;
 void* FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *,void*) ;
 TYPE_2__* FUNC_14 (int) ;

NAT_ENTRY *FUNC_15(VH *VAR_4, UINT VAR_5, UINT VAR_6, UINT VAR_7, UINT VAR_8)
{
 NAT_ENTRY *VAR_9;
 HUB_OPTION *VAR_10;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_1(VAR_4) == 0)
 {
  return ((void*)0);
 }

 VAR_10 = FUNC_9(VAR_4);


 if (VAR_10 != ((void*)0) && VAR_10->SecureNAT_MaxTcpSynSentPerIp != 0)
 {
  if (FUNC_4(VAR_4, VAR_5, VAR_2, 1) >= VAR_10->SecureNAT_MaxTcpSynSentPerIp)
  {
   return ((void*)0);
  }
 }


 if (VAR_10 != ((void*)0) && VAR_10->SecureNAT_MaxTcpSessionsPerIp != 0)
 {
  if (FUNC_4(VAR_4, VAR_5, VAR_2, 0) >= VAR_10->SecureNAT_MaxTcpSessionsPerIp)
  {
   NAT_ENTRY *VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_2);

   if (VAR_11 != ((void*)0))
   {
    FUNC_3(VAR_4, VAR_11);
   }
  }
 }


 VAR_9 = FUNC_14(sizeof(NAT_ENTRY));
 VAR_9->Id = FUNC_7(VAR_4->Counter);
 VAR_9->v = VAR_4;
 VAR_9->lock = FUNC_11();
 VAR_9->Protocol = VAR_2;
 VAR_9->SrcIp = VAR_5;
 VAR_9->SrcPort = VAR_6;
 VAR_9->DestIp = VAR_7;
 VAR_9->DestPort = VAR_8;
 VAR_9->CreatedTime = VAR_9->LastCommTime = VAR_4->Now;
 VAR_9->TcpLastRecvAckTime = VAR_4->Now;
 VAR_9->Sock = ((void*)0);
 VAR_9->DisconnectNow = 0;
 VAR_9->TcpSendMaxSegmentSize = VAR_9->TcpRecvMaxSegmentSize = VAR_4->TcpMss;

 VAR_9->SendFifo = FUNC_10();
 VAR_9->RecvFifo = FUNC_10();

 VAR_9->TcpStatus = VAR_3;

 VAR_9->SendSeqInit = FUNC_12();
 VAR_9->CurrentRTT = VAR_1;
 VAR_9->TcpSendTimeoutSpan = VAR_9->CurrentRTT * 2;


 FUNC_0(VAR_4->NatTable, VAR_9);



 {
  IP VAR_12, VAR_13;
  char VAR_14[VAR_0], VAR_15[VAR_0];
  FUNC_13(&VAR_12, VAR_5);
  FUNC_13(&VAR_13, VAR_7);
  FUNC_6(VAR_14, 0, &VAR_12);
  FUNC_6(VAR_15, 0, &VAR_13);
  FUNC_2("NAT_ENTRY: CreateNatTcp %s %u -> %s %u\n", VAR_14, VAR_6, VAR_15, VAR_8);

  FUNC_8(VAR_4, "LH_NAT_TCP_CREATED", VAR_9->Id, VAR_14, VAR_6, VAR_15, VAR_8);
 }


 return VAR_9;
}
