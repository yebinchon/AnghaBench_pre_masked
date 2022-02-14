
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_21__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_33__ {scalar_t__ num_item; } ;
struct TYPE_32__ {int IsFlooding; int Size; } ;
struct TYPE_28__ {int Value; } ;
struct TYPE_31__ {int Cancel; TYPE_8__* PacketQueue; TYPE_4__* Session; TYPE_3__ DownloadLimiter; } ;
struct TYPE_30__ {int* MacAddressSrc; int PacketSize; int PacketData; } ;
struct TYPE_29__ {scalar_t__ VLanId; scalar_t__ AdjustMss; scalar_t__ UdpAccelMss; scalar_t__ RUdpMss; int CancelList; int Cedar; TYPE_21__* Hub; scalar_t__ IsRUDPSession; scalar_t__ IsUsingUdpAcceleration; int LastDLinkSTPPacketSendTick; int LastDLinkSTPPacketDataHash; TYPE_1__* Policy; } ;
struct TYPE_27__ {int VlanTypeId; int DisableAdjustTcpMss; scalar_t__ FixForDLinkBPDU; } ;
struct TYPE_26__ {TYPE_2__* Option; } ;
struct TYPE_25__ {int MaxDownload; scalar_t__ CheckMac; } ;
typedef TYPE_3__ TRAFFIC_LIMITER ;
typedef TYPE_4__ SESSION ;
typedef TYPE_5__ PKT ;
typedef TYPE_6__ HUB_PA ;
typedef TYPE_7__ BLOCK ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int,int,int) ;
 int FUNC_2 (TYPE_21__*,TYPE_4__*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (TYPE_8__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (int*,int ,int ) ;
 TYPE_7__* FUNC_14 (void*,int,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (void**,int*,scalar_t__,int) ;

void FUNC_18(HUB_PA *VAR_4, SESSION *VAR_5, void *VAR_6, UINT VAR_7, PKT *VAR_8, bool VAR_9, bool VAR_10)
{
 BLOCK *VAR_11;

 if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 if (VAR_7 < 14)
 {
  FUNC_6(VAR_6);
  return;
 }

 if (VAR_10 == 0)
 {
  if (VAR_5 != ((void*)0))
  {

   if (FUNC_2(VAR_5->Hub, VAR_5, VAR_4->Session, VAR_8) == 0)
   {
    FUNC_6(VAR_6);
    return;
   }
  }
 }

 if (VAR_5 != ((void*)0))
 {
  if (VAR_4->Session->Policy->MaxDownload != 0)
  {

   if (VAR_8 != ((void*)0) && FUNC_10(VAR_4->Session, VAR_8) == 0)
   {
    TRAFFIC_LIMITER *VAR_12 = &VAR_4->DownloadLimiter;
    FUNC_9(VAR_12, VAR_8);

    if ((VAR_12->Value * (UINT64)1000 / (UINT64)VAR_1) > VAR_4->Session->Policy->MaxDownload)
    {

     FUNC_6(VAR_6);
     return;
    }
   }
  }
 }

 if (VAR_8 != ((void*)0) && VAR_5 != ((void*)0) && VAR_5->Hub != ((void*)0) && VAR_5->Hub->Option != ((void*)0) && VAR_5->Hub->Option->FixForDLinkBPDU)
 {

  UCHAR *VAR_13 = VAR_8->MacAddressSrc;
  if ((VAR_13[0] == 0x00 && VAR_13[1] == 0x80 && VAR_13[2] == 0xc8 && VAR_13[3] == 0x00 && VAR_13[4] == 0x00 && VAR_13[5] == 0x00) ||
   (VAR_13[0] == 0x00 && VAR_13[1] == 0x0d && VAR_13[2] == 0x88 && VAR_13[3] == 0x00 && VAR_13[4] == 0x00 && VAR_13[5] == 0x00))
  {
   SESSION *VAR_14 = VAR_4->Session;

   if (VAR_14 != ((void*)0))
   {
    if (VAR_14->Policy != ((void*)0) && VAR_14->Policy->CheckMac)
    {
     UCHAR VAR_15[VAR_3];
     FUNC_13(VAR_15, VAR_8->PacketData, VAR_8->PacketSize);

     FUNC_5(VAR_14->LastDLinkSTPPacketDataHash, VAR_15, VAR_3);
     VAR_14->LastDLinkSTPPacketSendTick = FUNC_15();
    }
   }
  }
 }


 if (VAR_4->Session != ((void*)0) && VAR_4->Session->VLanId != 0)
 {
  UINT VAR_16 = 0;
  if (VAR_5 != ((void*)0) && VAR_5->Hub != ((void*)0) && VAR_5->Hub->Option != ((void*)0))
  {
   VAR_16 = VAR_5->Hub->Option->VlanTypeId;
  }
  if (FUNC_17(&VAR_6, &VAR_7, VAR_4->Session->VLanId, VAR_16) == 0)
  {
   FUNC_6(VAR_6);
   return;
  }
 }

 if (VAR_5 != ((void*)0) && VAR_4->Session != ((void*)0) && VAR_5->Hub != ((void*)0) && VAR_5->Hub->Option != ((void*)0))
 {
  if (VAR_4->Session->AdjustMss != 0 ||
   (VAR_4->Session->IsUsingUdpAcceleration && VAR_4->Session->UdpAccelMss != 0) ||
   (VAR_4->Session->IsRUDPSession && VAR_4->Session->RUdpMss != 0))
  {
   if (VAR_5->Hub->Option->DisableAdjustTcpMss == 0)
   {
    UINT VAR_17 = VAR_0;

    if (VAR_4->Session->AdjustMss != 0)
    {
     VAR_17 = FUNC_12(VAR_17, VAR_4->Session->AdjustMss);
    }

    if (VAR_4->Session->IsUsingUdpAcceleration && VAR_4->Session->UdpAccelMss != 0)
    {
     VAR_17 = FUNC_12(VAR_17, VAR_4->Session->UdpAccelMss);
    }
    else if (VAR_4->Session->IsRUDPSession && VAR_4->Session->RUdpMss != 0)
    {
     VAR_17 = FUNC_12(VAR_17, VAR_4->Session->RUdpMss);
    }


    if (VAR_17 != VAR_0)
    {
     FUNC_1(VAR_6, VAR_7, VAR_17, VAR_5->Hub->Option->VlanTypeId);
    }
   }
  }
 }


 VAR_11 = FUNC_14(VAR_6, VAR_7, 0);

 FUNC_11(VAR_4->PacketQueue);
 {

  if (VAR_4->PacketQueue->num_item < VAR_2)
  {

   FUNC_8(VAR_4->PacketQueue, VAR_11);

   if (VAR_9)
   {
    if (VAR_5 != ((void*)0))
    {
     VAR_11->IsFlooding = 1;
     FUNC_4(VAR_5->Cedar, VAR_11->Size);
    }
   }
  }
  else
  {

   FUNC_7(VAR_11);
  }
 }
 FUNC_16(VAR_4->PacketQueue);


 if (VAR_5 != ((void*)0))
 {
  FUNC_0(VAR_5->CancelList, VAR_4->Cancel);
 }
 else
 {
  FUNC_3(VAR_4->Cancel);
 }
}
