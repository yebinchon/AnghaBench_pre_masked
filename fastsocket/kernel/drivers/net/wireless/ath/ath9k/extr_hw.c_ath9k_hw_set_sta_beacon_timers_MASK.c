
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {struct ath9k_hw_capabilities caps; } ;
struct ath_common {int dummy; } ;
struct ath9k_beacon_state {scalar_t__ bs_nexttbtt; scalar_t__ bs_intval; scalar_t__ bs_sleepduration; scalar_t__ bs_dtimperiod; scalar_t__ bs_nextdtim; int bs_tsfoor_threshold; int bs_bmissthreshold; } ;


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
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 scalar_t__ VAR_24 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_common*,int ,char*,scalar_t__) ;

void FUNC_9(struct ath_hw *VAR_25,
        const struct ath9k_beacon_state *VAR_26)
{
 u32 VAR_27, VAR_28, VAR_29, VAR_30;
 struct ath9k_hw_capabilities *VAR_31 = &VAR_25->caps;
 struct ath_common *VAR_32 = FUNC_7(VAR_25);

 FUNC_0(VAR_25);

 FUNC_4(VAR_25, VAR_5, FUNC_6(VAR_26->bs_nexttbtt));

 FUNC_4(VAR_25, VAR_0,
    FUNC_6(VAR_26->bs_intval));
 FUNC_4(VAR_25, VAR_1,
    FUNC_6(VAR_26->bs_intval));

 FUNC_1(VAR_25);

 FUNC_2(VAR_25, VAR_7,
        VAR_8, VAR_26->bs_bmissthreshold);

 VAR_28 = VAR_26->bs_intval;

 if (VAR_26->bs_sleepduration > VAR_28)
  VAR_28 = VAR_26->bs_sleepduration;

 VAR_29 = VAR_26->bs_dtimperiod;
 if (VAR_26->bs_sleepduration > VAR_29)
  VAR_29 = VAR_26->bs_sleepduration;

 if (VAR_28 == VAR_29)
  VAR_27 = VAR_26->bs_nextdtim;
 else
  VAR_27 = VAR_26->bs_nexttbtt;

 FUNC_8(VAR_32, VAR_20, "next DTIM %d\n", VAR_26->bs_nextdtim);
 FUNC_8(VAR_32, VAR_20, "next beacon %d\n", VAR_27);
 FUNC_8(VAR_32, VAR_20, "beacon period %d\n", VAR_28);
 FUNC_8(VAR_32, VAR_20, "DTIM period %d\n", VAR_29);

 FUNC_0(VAR_25);

 FUNC_4(VAR_25, VAR_4,
    FUNC_6(VAR_26->bs_nextdtim - VAR_24));
 FUNC_4(VAR_25, VAR_6, FUNC_6(VAR_27 - VAR_24));

 FUNC_4(VAR_25, VAR_9,
    FUNC_5((VAR_22 << 3), VAR_11)
    | VAR_10);

 if (VAR_31->hw_caps & VAR_19)
  VAR_30 = (VAR_21 << 3);
 else
  VAR_30 = VAR_23;

 FUNC_4(VAR_25, VAR_12,
    FUNC_5(VAR_30, VAR_13));

 FUNC_4(VAR_25, VAR_16, FUNC_6(VAR_28));
 FUNC_4(VAR_25, VAR_2, FUNC_6(VAR_29));

 FUNC_1(VAR_25);

 FUNC_3(VAR_25, VAR_15,
      VAR_14 | VAR_17 |
      VAR_3);


 FUNC_4(VAR_25, VAR_18, VAR_26->bs_tsfoor_threshold);
}
