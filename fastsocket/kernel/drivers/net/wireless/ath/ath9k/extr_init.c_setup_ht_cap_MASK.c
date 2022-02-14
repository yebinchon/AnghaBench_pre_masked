
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int tx_params; int* rx_mask; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_2__ mcs; int ampdu_density; int ampdu_factor; } ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct TYPE_3__ {int hw_caps; } ;
struct ath_hw {int rxchainmask; int txchainmask; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
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
 int FUNC_6 (int ,int) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_common*,int ,char*,int,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ath_softc *VAR_16,
    struct ieee80211_sta_ht_cap *VAR_17)
{
 struct ath_hw *VAR_18 = VAR_16->sc_ah;
 struct ath_common *VAR_19 = FUNC_7(VAR_18);
 u8 VAR_20, VAR_21;
 int VAR_22, VAR_23;

 VAR_17->ht_supported = 1;
 VAR_17->cap = VAR_9 |
         VAR_8 |
         VAR_7 |
         VAR_3;

 if (VAR_16->sc_ah->caps.hw_caps & VAR_0)
  VAR_17->cap |= VAR_4;

 if (VAR_16->sc_ah->caps.hw_caps & VAR_1)
  VAR_17->cap |= VAR_6;

 VAR_17->ampdu_factor = VAR_11;
 VAR_17->ampdu_density = VAR_15;

 if (FUNC_2(VAR_18) || FUNC_4(VAR_18) || FUNC_5(VAR_18))
  VAR_23 = 1;
 else if (FUNC_3(VAR_18))
  VAR_23 = 2;
 else if (FUNC_1(VAR_18))
  VAR_23 = 3;
 else
  VAR_23 = 2;

 if (FUNC_0(VAR_18)) {
  if (VAR_23 >= 2)
   VAR_17->cap |= VAR_10;
  VAR_17->cap |= (1 << VAR_5);
 }


 FUNC_9(&VAR_17->mcs, 0, sizeof(VAR_17->mcs));
 VAR_20 = FUNC_6(VAR_18->txchainmask, VAR_23);
 VAR_21 = FUNC_6(VAR_18->rxchainmask, VAR_23);

 FUNC_8(VAR_19, VAR_2, "TX streams %d, RX streams: %d\n",
  VAR_20, VAR_21);

 if (VAR_20 != VAR_21) {
  VAR_17->mcs.tx_params |= VAR_14;
  VAR_17->mcs.tx_params |= ((VAR_20 - 1) <<
    VAR_13);
 }

 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
  VAR_17->mcs.rx_mask[VAR_22] = 0xff;

 VAR_17->mcs.tx_params |= VAR_12;
}
