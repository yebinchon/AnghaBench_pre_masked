
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct il_tx_cmd {int data_retry_limit; int rate_n_flags; int tx_flags; scalar_t__ initial_rate_idx; int rts_retry_limit; } ;
struct TYPE_7__ {int valid_tx_ant; } ;
struct il_priv {int mgmt_tx_ant; TYPE_3__ hw_params; int * bands; } ;
struct TYPE_6__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {size_t band; TYPE_2__ control; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;
struct TYPE_8__ {int plcp; } ;
struct TYPE_5__ {int idx; int flags; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct il_priv*,int *,int ) ;
 TYPE_4__* VAR_10 ;
 int FUNC_5 (int,int const) ;
 int FUNC_6 (int *,struct ieee80211_sta*) ;

__attribute__((used)) static void
FUNC_7(struct il_priv *VAR_11,
    struct il_tx_cmd *VAR_12,
    struct ieee80211_tx_info *VAR_13,
    struct ieee80211_sta *VAR_14,
    __le16 VAR_15)
{
 const u8 VAR_16 = 60;
 u32 VAR_17;
 int VAR_18;
 u8 VAR_19;
 u8 VAR_20;


 if (FUNC_3(VAR_15))
  VAR_19 = 3;
 else
  VAR_19 = VAR_2;
 VAR_12->data_retry_limit = VAR_19;

 VAR_12->rts_retry_limit = FUNC_5(VAR_19, VAR_16);



 if (FUNC_2(VAR_15)) {
  VAR_12->initial_rate_idx = 0;
  VAR_12->tx_flags |= VAR_9;
  return;
 }







 VAR_18 = VAR_13->control.rates[0].idx;
 if ((VAR_13->control.rates[0].flags & VAR_1) || VAR_18 < 0
     || VAR_18 > VAR_6)
  VAR_18 = FUNC_6(&VAR_11->bands[VAR_13->band], VAR_14);

 if (VAR_13->band == VAR_0)
  VAR_18 += VAR_4;

 VAR_20 = VAR_10[VAR_18].plcp;

 VAR_17 = 0;


 if (VAR_18 >= VAR_3 && VAR_18 <= VAR_5)
  VAR_17 |= VAR_8;


 FUNC_4(VAR_11, &VAR_11->mgmt_tx_ant, VAR_11->hw_params.valid_tx_ant);
 VAR_17 |= FUNC_0(VAR_11->mgmt_tx_ant) << VAR_7;


 VAR_12->rate_n_flags = FUNC_1(VAR_20 | VAR_17);
}
