
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ath_softc {int sc_flags; struct ath_hw* sc_ah; } ;
struct ath_hw {int imask; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; int dtim_period; int dtim_count; int listen_interval; int bmiss_timeout; } ;
struct ath9k_beacon_state {int bs_intval; int bs_nexttbtt; int bs_dtimperiod; int bs_nextdtim; int bs_cfpperiod; int bs_cfpnext; int bs_bmissthreshold; int bs_sleepduration; scalar_t__ bs_cfpmaxduration; int bs_tsfoor_threshold; } ;
typedef int bs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,struct ath9k_beacon_state*) ;
 int FUNC_9 (struct ath_common*,int ,char*,...) ;
 int FUNC_10 (struct ath9k_beacon_state*,int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct ath_softc *VAR_6,
        struct ath_beacon_config *VAR_7)
{
 struct ath_hw *VAR_8 = VAR_6->sc_ah;
 struct ath_common *VAR_9 = FUNC_3(VAR_8);
 struct ath9k_beacon_state VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16 = 0, VAR_17, VAR_18;
 u64 VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23;


 if (!FUNC_12(VAR_5, &VAR_6->sc_flags)) {
  FUNC_9(VAR_9, VAR_3,
   "STA is not yet associated..skipping beacon config\n");
  return;
 }

 FUNC_10(&VAR_10, 0, sizeof(VAR_10));
 VAR_17 = VAR_7->beacon_interval;





 VAR_11 = VAR_7->dtim_period;
 VAR_12 = VAR_7->dtim_count;
 if (VAR_12 >= VAR_11)
  VAR_12 = 0;
 VAR_14 = 1;
 VAR_15 = 0;

 VAR_13 = VAR_7->listen_interval * VAR_17;





 VAR_19 = FUNC_6(VAR_8);
 VAR_18 = FUNC_2(VAR_19>>32, VAR_19) + VAR_4;

 VAR_20 = VAR_18 / VAR_17 + 1;
 VAR_21 = VAR_18 % VAR_17;
 VAR_16 = VAR_18 - VAR_21;
 if (VAR_21)
  VAR_16 += VAR_17;


 VAR_22 = VAR_20 % VAR_11;

 VAR_23 = (VAR_20 / VAR_11) % VAR_14;
 if (VAR_22)
  VAR_23++;

 VAR_12 -= VAR_22;
 if (VAR_12 < 0)
  VAR_12 += VAR_11;

 VAR_15 -= VAR_23;
 if (VAR_15 < 0)
  VAR_15 += VAR_14;

 VAR_10.bs_intval = VAR_17;
 VAR_10.bs_nexttbtt = VAR_16;
 VAR_10.bs_dtimperiod = VAR_11*VAR_17;
 VAR_10.bs_nextdtim = VAR_10.bs_nexttbtt + VAR_12*VAR_17;
 VAR_10.bs_cfpperiod = VAR_14*VAR_10.bs_dtimperiod;
 VAR_10.bs_cfpnext = VAR_10.bs_nextdtim + VAR_15*VAR_10.bs_dtimperiod;
 VAR_10.bs_cfpmaxduration = 0;







 if (VAR_13 > VAR_17) {
  VAR_10.bs_bmissthreshold = VAR_7->listen_interval *
   VAR_2 / 2;
 } else {
  VAR_10.bs_bmissthreshold = FUNC_0(VAR_7->bmiss_timeout, VAR_17);
  if (VAR_10.bs_bmissthreshold > 15)
   VAR_10.bs_bmissthreshold = 15;
  else if (VAR_10.bs_bmissthreshold <= 0)
   VAR_10.bs_bmissthreshold = 1;
 }
 VAR_10.bs_sleepduration = FUNC_11(FUNC_1(100), VAR_13);
 if (VAR_10.bs_sleepduration > VAR_10.bs_dtimperiod)
  VAR_10.bs_sleepduration = VAR_10.bs_dtimperiod;


 VAR_10.bs_tsfoor_threshold = VAR_1;

 FUNC_9(VAR_9, VAR_3, "tsf: %llu tsftu: %u\n", VAR_19, VAR_18);
 FUNC_9(VAR_9, VAR_3,
  "bmiss: %u sleep: %u cfp-period: %u maxdur: %u next: %u\n",
  VAR_10.bs_bmissthreshold, VAR_10.bs_sleepduration,
  VAR_10.bs_cfpperiod, VAR_10.bs_cfpmaxduration, VAR_10.bs_cfpnext);



 FUNC_4(VAR_8);
 FUNC_8(VAR_8, &VAR_10);
 VAR_8->imask |= VAR_0;

 FUNC_7(VAR_8);
 FUNC_5(VAR_8);
}
