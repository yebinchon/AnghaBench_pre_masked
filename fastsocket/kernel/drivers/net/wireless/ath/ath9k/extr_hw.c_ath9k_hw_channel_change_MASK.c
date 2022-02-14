
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int hw_caps; } ;
struct ath_hw {int ah_flags; TYPE_3__* eep_ops; TYPE_2__* curchan; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int channelFlags; scalar_t__ chanmode; } ;
struct TYPE_6__ {int (* set_board_values ) (struct ath_hw*,struct ath9k_channel*) ;} ;
struct TYPE_5__ {int channelFlags; scalar_t__ chanmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int VAR_5 ;
 int FUNC_2 (struct ath_hw*,struct ath9k_channel*,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*,struct ath9k_channel*,scalar_t__*) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_6 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_7 (struct ath_hw*,int *) ;
 int FUNC_8 (struct ath_hw*) ;
 scalar_t__ FUNC_9 (struct ath_hw*,scalar_t__) ;
 int FUNC_10 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_16 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_17 (struct ath_common*,int ,char*,scalar_t__) ;
 int FUNC_18 (struct ath_common*,char*) ;
 int FUNC_19 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_20 (int) ;

__attribute__((used)) static bool FUNC_21(struct ath_hw *VAR_6,
        struct ath9k_channel *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_3(VAR_6);
 u32 VAR_9;
 int VAR_10;
 bool VAR_11 = !!(VAR_6->caps.hw_caps & VAR_2);
 bool VAR_12, VAR_13;
 u8 VAR_14;

 VAR_12 = (VAR_7->channelFlags & (VAR_3 | VAR_4)) !=
        (VAR_6->curchan->channelFlags & (VAR_3 |
          VAR_4));
 VAR_13 = (VAR_7->chanmode != VAR_6->curchan->chanmode);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (FUNC_9(VAR_6, VAR_9)) {
   FUNC_17(VAR_8, VAR_5,
    "Transmit frames pending on queue %d\n", VAR_9);
   return 0;
  }
 }

 if (!FUNC_12(VAR_6)) {
  FUNC_18(VAR_8, "Could not kill baseband RX\n");
  return 0;
 }

 if (VAR_11 && (VAR_12 || VAR_13)) {
  FUNC_8(VAR_6);
  FUNC_20(5);

  FUNC_7(VAR_6, ((void*)0));

  if (FUNC_4(VAR_6, VAR_7, &VAR_14)) {
   FUNC_18(VAR_8, "Failed to do fast channel change\n");
   return 0;
  }
 }

 FUNC_13(VAR_6, VAR_7);

 VAR_10 = FUNC_10(VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_18(VAR_8, "Failed to set channel\n");
  return 0;
 }
 FUNC_14(VAR_6);
 FUNC_2(VAR_6, VAR_7, 0);
 FUNC_11(VAR_6);

 if (FUNC_1(VAR_7) || FUNC_0(VAR_7))
  FUNC_15(VAR_6, VAR_7);

 FUNC_16(VAR_6, VAR_7);

 if (VAR_11 && (VAR_12 || VAR_13)) {
  VAR_6->ah_flags |= VAR_0;
  if (VAR_12 || VAR_14)
   VAR_6->eep_ops->set_board_values(VAR_6, VAR_7);

  FUNC_5(VAR_6, VAR_7);

  if (VAR_12 || VAR_14)
   FUNC_6(VAR_6, VAR_7);
  VAR_6->ah_flags &= ~VAR_0;
 }

 return 1;
}
