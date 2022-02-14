
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ETH_HashTableHigh; int ETH_HashTableLow; int ETH_PauseTime; int ETH_VLANTagIdentifier; int ETH_DescriptorSkipLength; int ETH_DMAArbitration; int ETH_TxDMABurstLength; int ETH_RxDMABurstLength; int ETH_FixedBurst; int ETH_AddressAlignedBeats; int ETH_SecondFrameOperate; int ETH_ReceiveThresholdControl; int ETH_ForwardUndersizedGoodFrames; int ETH_ForwardErrorFrames; int ETH_TransmitThresholdControl; int ETH_TransmitStoreForward; int ETH_FlushReceivedFrame; int ETH_ReceiveStoreForward; int ETH_DropTCPIPChecksumErrorFrame; int ETH_VLANTagComparison; int ETH_TransmitFlowControl; int ETH_ReceiveFlowControl; int ETH_UnicastPauseFrameDetect; int ETH_PauseLowThreshold; int ETH_ZeroQuantaPause; int ETH_UnicastFramesFilter; int ETH_MulticastFramesFilter; int ETH_PromiscuousMode; int ETH_DestinationAddrFilter; int ETH_BroadcastFramesReception; int ETH_PassControlFrames; int ETH_SourceAddrFilter; int ETH_ReceiveAll; int ETH_DeferralCheck; int ETH_BackOffLimit; int ETH_AutomaticPadCRCStrip; int ETH_RetryTransmission; int ETH_ChecksumOffload; int ETH_Mode; int ETH_LoopbackMode; int ETH_ReceiveOwn; int ETH_Speed; int ETH_CarrierSense; int ETH_InterFrameGap; int ETH_Jabber; int ETH_Watchdog; int ETH_AutoNegotiation; } ;
typedef TYPE_1__ ETH_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;

void FUNC_0(ETH_InitTypeDef* VAR_42)
{




  VAR_42->ETH_AutoNegotiation = VAR_1;

  VAR_42->ETH_Watchdog = VAR_40;

  VAR_42->ETH_Jabber = VAR_16;

  VAR_42->ETH_InterFrameGap = VAR_15;

  VAR_42->ETH_CarrierSense = VAR_5;

  VAR_42->ETH_Speed = VAR_32;

  VAR_42->ETH_ReceiveOwn = VAR_25;

  VAR_42->ETH_LoopbackMode = VAR_17;

  VAR_42->ETH_Mode = VAR_18;

  VAR_42->ETH_ChecksumOffload = VAR_6;

  VAR_42->ETH_RetryTransmission = VAR_28;

  VAR_42->ETH_AutomaticPadCRCStrip = VAR_2;

  VAR_42->ETH_BackOffLimit = VAR_3;

  VAR_42->ETH_DeferralCheck = VAR_8;

  VAR_42->ETH_ReceiveAll = VAR_23;

  VAR_42->ETH_SourceAddrFilter = VAR_31;

  VAR_42->ETH_PassControlFrames = VAR_20;

  VAR_42->ETH_BroadcastFramesReception = VAR_4;

  VAR_42->ETH_DestinationAddrFilter = VAR_9;

  VAR_42->ETH_PromiscuousMode = VAR_22;

  VAR_42->ETH_MulticastFramesFilter = VAR_19;

  VAR_42->ETH_UnicastFramesFilter = VAR_37;

  VAR_42->ETH_HashTableHigh = 0x0;
  VAR_42->ETH_HashTableLow = 0x0;

  VAR_42->ETH_PauseTime = 0x0;
  VAR_42->ETH_ZeroQuantaPause = VAR_41;
  VAR_42->ETH_PauseLowThreshold = VAR_21;
  VAR_42->ETH_UnicastPauseFrameDetect = VAR_38;
  VAR_42->ETH_ReceiveFlowControl = VAR_24;
  VAR_42->ETH_TransmitFlowControl = VAR_33;

  VAR_42->ETH_VLANTagComparison = VAR_39;
  VAR_42->ETH_VLANTagIdentifier = 0x0;




  VAR_42->ETH_DropTCPIPChecksumErrorFrame = VAR_10;

  VAR_42->ETH_ReceiveStoreForward = VAR_26;

  VAR_42->ETH_FlushReceivedFrame = VAR_12;

  VAR_42->ETH_TransmitStoreForward = VAR_34;

  VAR_42->ETH_TransmitThresholdControl = VAR_35;

  VAR_42->ETH_ForwardErrorFrames = VAR_13;

  VAR_42->ETH_ForwardUndersizedGoodFrames = VAR_14;

  VAR_42->ETH_ReceiveThresholdControl = VAR_27;


  VAR_42->ETH_SecondFrameOperate = VAR_30;

  VAR_42->ETH_AddressAlignedBeats = VAR_0;

  VAR_42->ETH_FixedBurst = VAR_11;

  VAR_42->ETH_RxDMABurstLength = VAR_29;
  VAR_42->ETH_TxDMABurstLength = VAR_36;

  VAR_42->ETH_DescriptorSkipLength = 0x0;

  VAR_42->ETH_DMAArbitration = VAR_7;
}
