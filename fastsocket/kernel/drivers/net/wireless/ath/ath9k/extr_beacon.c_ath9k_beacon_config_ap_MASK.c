
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int imask; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; scalar_t__ enable_beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*,int ,int ,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_3,
       struct ath_beacon_config *VAR_4)
{
 struct ath_hw *VAR_5 = VAR_3->sc_ah;
 struct ath_common *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7, VAR_8;


 VAR_8 = FUNC_0(VAR_4->beacon_interval);
 VAR_8 /= VAR_1;
 VAR_7 = VAR_8;

 if (VAR_4->enable_beacon)
  VAR_5->imask |= VAR_0;
 else
  VAR_5->imask &= ~VAR_0;

 FUNC_3(VAR_6, VAR_2,
  "AP (%s) nexttbtt: %u intval: %u conf_intval: %u\n",
  (VAR_4->enable_beacon) ? "Enable" : "Disable",
  VAR_7, VAR_8, VAR_4->beacon_interval);

 FUNC_1(VAR_3, VAR_7, VAR_8, 1);
}
