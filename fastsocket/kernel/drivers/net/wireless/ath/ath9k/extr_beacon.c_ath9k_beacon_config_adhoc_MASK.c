
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ath_softc {int sc_flags; struct ath_hw* sc_ah; } ;
struct ath_hw {int imask; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; scalar_t__ enable_beacon; int ibss_creator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_softc*,int,int,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_common*,int ,char*,char*,int,int,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct ath_softc *VAR_4,
          struct ath_beacon_config *VAR_5)
{
 struct ath_hw *VAR_6 = VAR_4->sc_ah;
 struct ath_common *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8, VAR_9;

 FUNC_5(VAR_4);

 VAR_8 = FUNC_1(VAR_5->beacon_interval);

 if (VAR_5->ibss_creator) {
  VAR_9 = VAR_8;
 } else {
  u32 VAR_10, VAR_11, VAR_12;
  u64 VAR_13;





  VAR_13 = FUNC_4(VAR_6);
  VAR_12 = FUNC_0(VAR_13 >> 32, VAR_13) + VAR_2;
  VAR_11 = VAR_12 % VAR_5->beacon_interval;
  VAR_10 = VAR_12 - VAR_11;
  if (VAR_11)
   VAR_10 += VAR_5->beacon_interval;

  VAR_9 = FUNC_1(VAR_10);
 }

 if (VAR_5->enable_beacon)
  VAR_6->imask |= VAR_0;
 else
  VAR_6->imask &= ~VAR_0;

 FUNC_6(VAR_7, VAR_1,
  "IBSS (%s) nexttbtt: %u intval: %u conf_intval: %u\n",
  (VAR_5->enable_beacon) ? "Enable" : "Disable",
  VAR_9, VAR_8, VAR_5->beacon_interval);

 FUNC_2(VAR_4, VAR_9, VAR_8, VAR_5->ibss_creator);





 if (!VAR_5->ibss_creator && VAR_5->enable_beacon)
  FUNC_7(VAR_3, &VAR_4->sc_flags);
}
