
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int additional_swba_backoff; scalar_t__ dma_beacon_response_time; scalar_t__ sw_beacon_response_time; } ;
struct ath_hw {int txok_interrupt_mask; int txerr_interrupt_mask; int txdesc_interrupt_mask; int txeol_interrupt_mask; int txurn_interrupt_mask; TYPE_1__ config; int opmode; struct ath9k_tx_queue_info* txq; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {int tqi_type; size_t tqi_cwmin; size_t tqi_cwmax; size_t tqi_aifs; size_t tqi_shretry; int tqi_cbrPeriod; size_t tqi_cbrOverflowLimit; size_t tqi_readyTime; size_t tqi_burstTime; int tqi_qflags; int tqi_intFlags; } ;
struct ath9k_channel {int dummy; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (size_t) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 scalar_t__ FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 size_t VAR_30 ;
 int VAR_31 ;


 int VAR_32 ;


 int FUNC_10 (struct ath_hw*) ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 scalar_t__ FUNC_11 (struct ath9k_channel*) ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*,int ,size_t) ;
 int FUNC_14 (struct ath_hw*,int ,size_t) ;
 size_t FUNC_15 (size_t,int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_16 (struct ath_hw*,size_t) ;
 struct ath_common* FUNC_17 (struct ath_hw*) ;
 int FUNC_18 (struct ath_hw*,struct ath9k_tx_queue_info*) ;
 int FUNC_19 (struct ath_common*,int ,char*,size_t) ;

bool FUNC_20(struct ath_hw *VAR_46, u32 VAR_47)
{
 struct ath_common *VAR_48 = FUNC_17(VAR_46);
 struct ath9k_channel *VAR_49 = VAR_46->curchan;
 struct ath9k_tx_queue_info *VAR_50;
 u32 VAR_51, VAR_52, VAR_53;

 VAR_50 = &VAR_46->txq[VAR_47];
 if (VAR_50->tqi_type == VAR_32) {
  FUNC_19(VAR_48, VAR_38, "Reset TXQ, inactive queue: %u\n", VAR_47);
  return 1;
 }

 FUNC_19(VAR_48, VAR_38, "Reset TX queue: %u\n", VAR_47);

 if (VAR_50->tqi_cwmin == VAR_30) {
  if (VAR_49 && FUNC_11(VAR_49))
   VAR_52 = VAR_34;
  else
   VAR_52 = VAR_33;

  for (VAR_51 = 1; VAR_51 < VAR_52; VAR_51 = (VAR_51 << 1) | 1);
 } else
  VAR_51 = VAR_50->tqi_cwmin;

 FUNC_10(VAR_46);

 FUNC_14(VAR_46, FUNC_1(VAR_47),
    FUNC_15(VAR_51, VAR_4) |
    FUNC_15(VAR_50->tqi_cwmax, VAR_3) |
    FUNC_15(VAR_50->tqi_aifs, VAR_2));

 FUNC_14(VAR_46, FUNC_3(VAR_47),
    FUNC_15(VAR_36, VAR_15) |
    FUNC_15(VAR_35, VAR_14) |
    FUNC_15(VAR_50->tqi_shretry, VAR_13));

 FUNC_14(VAR_46, FUNC_5(VAR_47), VAR_24);

 if (FUNC_8(VAR_46) && !FUNC_9(VAR_46))
  FUNC_14(VAR_46, FUNC_2(VAR_47),
     VAR_9 | VAR_11 | 0x1);
 else
  FUNC_14(VAR_46, FUNC_2(VAR_47),
     VAR_9 | VAR_11 | 0x2);

 if (VAR_50->tqi_cbrPeriod) {
  FUNC_14(VAR_46, FUNC_4(VAR_47),
     FUNC_15(VAR_50->tqi_cbrPeriod, VAR_16) |
     FUNC_15(VAR_50->tqi_cbrOverflowLimit, VAR_17));
  FUNC_13(VAR_46, FUNC_5(VAR_47), VAR_25 |
       (VAR_50->tqi_cbrOverflowLimit ?
        VAR_21 : 0));
 }
 if (VAR_50->tqi_readyTime && (VAR_50->tqi_type != 130)) {
  FUNC_14(VAR_46, FUNC_6(VAR_47),
     FUNC_15(VAR_50->tqi_readyTime, VAR_28) |
     VAR_29);
 }

 FUNC_14(VAR_46, FUNC_0(VAR_47),
    FUNC_15(VAR_50->tqi_burstTime, VAR_0) |
    (VAR_50->tqi_burstTime ? VAR_1 : 0));

 if (VAR_50->tqi_burstTime
     && (VAR_50->tqi_qflags & VAR_41))
  FUNC_13(VAR_46, FUNC_5(VAR_47), VAR_27);

 if (VAR_50->tqi_qflags & VAR_39)
  FUNC_13(VAR_46, FUNC_2(VAR_47), VAR_12);

 FUNC_12(VAR_46);

 if (VAR_50->tqi_qflags & VAR_40)
  FUNC_13(VAR_46, FUNC_2(VAR_47), VAR_10);

 switch (VAR_50->tqi_type) {
 case 131:
  FUNC_10(VAR_46);

  FUNC_13(VAR_46, FUNC_5(VAR_47),
       VAR_26
       | VAR_20
       | VAR_23);

  FUNC_13(VAR_46, FUNC_2(VAR_47),
       (VAR_6 <<
        VAR_7)
       | VAR_8
       | VAR_12);

  FUNC_12(VAR_46);






  if (FUNC_7(VAR_46) &&
      VAR_46->opmode != VAR_37) {
   FUNC_14(VAR_46, FUNC_1(VAR_47), FUNC_15(0, VAR_4)
      | FUNC_15(0, VAR_3)
      | FUNC_15(VAR_50->tqi_aifs, VAR_2));
  }
  break;
 case 130:
  FUNC_10(VAR_46);

  FUNC_13(VAR_46, FUNC_5(VAR_47),
       VAR_26
       | VAR_23
       | VAR_22);
  VAR_53 = (VAR_50->tqi_readyTime -
    (VAR_46->config.sw_beacon_response_time -
     VAR_46->config.dma_beacon_response_time) -
    VAR_46->config.additional_swba_backoff) * 1024;
  FUNC_14(VAR_46, FUNC_6(VAR_47),
     VAR_53 | VAR_29);
  FUNC_13(VAR_46, FUNC_2(VAR_47),
       (VAR_6 <<
        VAR_7));

  FUNC_12(VAR_46);

  break;
 case 129:
  FUNC_13(VAR_46, FUNC_5(VAR_47), VAR_23);
  break;
 case 128:
  FUNC_13(VAR_46, FUNC_2(VAR_47), VAR_12);
  break;
 default:
  break;
 }

 if (VAR_50->tqi_intFlags & VAR_31) {
  FUNC_13(VAR_46, FUNC_2(VAR_47),
       FUNC_15(VAR_6,
          VAR_5) |
       VAR_12);
 }

 if (FUNC_7(VAR_46))
  FUNC_14(VAR_46, VAR_18, VAR_19);

 FUNC_16(VAR_46, VAR_47);
 if (VAR_50->tqi_qflags & VAR_44) {
  VAR_46->txok_interrupt_mask |= 1 << VAR_47;
  VAR_46->txerr_interrupt_mask |= 1 << VAR_47;
 }
 if (VAR_50->tqi_qflags & VAR_42)
  VAR_46->txdesc_interrupt_mask |= 1 << VAR_47;
 if (VAR_50->tqi_qflags & VAR_43)
  VAR_46->txeol_interrupt_mask |= 1 << VAR_47;
 if (VAR_50->tqi_qflags & VAR_45)
  VAR_46->txurn_interrupt_mask |= 1 << VAR_47;
 FUNC_18(VAR_46, VAR_50);

 return 1;
}
