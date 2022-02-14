
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ETH_DMAArbitration; int ETH_TxDMABurstLength; int ETH_RxDMABurstLength; int ETH_FixedBurst; int ETH_AddressAlignedBeats; int ETH_SecondFrameOperate; int ETH_ForwardUndersizedGoodFrames; int ETH_ForwardErrorFrames; int ETH_TransmitStoreForward; int ETH_ReceiveStoreForward; int ETH_DropTCPIPChecksumErrorFrame; int ETH_ChecksumOffload; int ETH_UnicastFramesFilter; int ETH_MulticastFramesFilter; int ETH_PromiscuousMode; int ETH_BroadcastFramesReception; int ETH_ReceiveAll; int ETH_AutomaticPadCRCStrip; int ETH_RetryTransmission; int ETH_LoopbackMode; int ETH_AutoNegotiation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_5 (int,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;

__attribute__((used)) static void FUNC_6(void)
{

  FUNC_5(VAR_25 | VAR_27 |
                        VAR_26, VAR_0);


  FUNC_0();


  FUNC_3();


  while (FUNC_1() == VAR_28);



  FUNC_4(&VAR_12);



  VAR_12.ETH_AutoNegotiation = VAR_2;




  VAR_12.ETH_LoopbackMode = VAR_13;
  VAR_12.ETH_RetryTransmission = VAR_18;
  VAR_12.ETH_AutomaticPadCRCStrip = VAR_3;
  VAR_12.ETH_ReceiveAll = VAR_16;
  VAR_12.ETH_BroadcastFramesReception = VAR_4;
  VAR_12.ETH_PromiscuousMode = VAR_15;
  VAR_12.ETH_MulticastFramesFilter = VAR_14;
  VAR_12.ETH_UnicastFramesFilter = VAR_23;
  VAR_12.ETH_DropTCPIPChecksumErrorFrame = VAR_7;
  VAR_12.ETH_ReceiveStoreForward = VAR_17;
  VAR_12.ETH_TransmitStoreForward = VAR_21;

  VAR_12.ETH_ForwardErrorFrames = VAR_10;
  VAR_12.ETH_ForwardUndersizedGoodFrames = VAR_11;
  VAR_12.ETH_SecondFrameOperate = VAR_20;
  VAR_12.ETH_AddressAlignedBeats = VAR_1;
  VAR_12.ETH_FixedBurst = VAR_9;
  VAR_12.ETH_RxDMABurstLength = VAR_19;
  VAR_12.ETH_TxDMABurstLength = VAR_22;
  VAR_12.ETH_DMAArbitration = VAR_6;


  VAR_24 = FUNC_2(&VAR_12, 1);
  if(VAR_24 == VAR_8)
     VAR_24 = FUNC_2(&VAR_12, 2);
}
