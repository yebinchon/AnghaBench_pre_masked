
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int tx_params; int* rx_mask; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_2__ mcs; int ampdu_density; int ampdu_factor; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_priv {TYPE_3__* ah; } ;
struct TYPE_4__ {int hw_caps; } ;
struct TYPE_6__ {int rxchainmask; int txchainmask; TYPE_1__ caps; } ;


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
 int FUNC_0 (int ,int) ;
 struct ath_common* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ath9k_htc_priv *VAR_13,
    struct ieee80211_sta_ht_cap *VAR_14)
{
 struct ath_common *VAR_15 = FUNC_1(VAR_13->ah);
 u8 VAR_16, VAR_17;
 int VAR_18;

 VAR_14->ht_supported = 1;
 VAR_14->cap = VAR_7 |
         VAR_6 |
         VAR_5 |
         VAR_2;

 if (VAR_13->ah->caps.hw_caps & VAR_0)
  VAR_14->cap |= VAR_4;

 VAR_14->cap |= (1 << VAR_3);

 VAR_14->ampdu_factor = VAR_8;
 VAR_14->ampdu_density = VAR_12;

 FUNC_3(&VAR_14->mcs, 0, sizeof(VAR_14->mcs));


 VAR_16 = FUNC_0(VAR_13->ah->txchainmask, 2);
 VAR_17 = FUNC_0(VAR_13->ah->rxchainmask, 2);

 FUNC_2(VAR_15, VAR_1, "TX streams %d, RX streams: %d\n",
  VAR_16, VAR_17);

 if (VAR_16 != VAR_17) {
  VAR_14->mcs.tx_params |= VAR_11;
  VAR_14->mcs.tx_params |= ((VAR_16 - 1) <<
        VAR_10);
 }

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
  VAR_14->mcs.rx_mask[VAR_18] = 0xff;

 VAR_14->mcs.tx_params |= VAR_9;
}
