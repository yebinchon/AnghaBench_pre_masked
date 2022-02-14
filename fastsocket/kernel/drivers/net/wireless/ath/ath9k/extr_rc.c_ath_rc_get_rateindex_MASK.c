
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_tx_rate {int flags; int idx; } ;
struct ath_rate_table {TYPE_1__* info; } ;
struct ath_rate_priv {int max_valid_rate; int* valid_rate_index; struct ath_rate_table* rate_table; } ;
struct TYPE_2__ {scalar_t__ ratecode; int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ath_rate_priv *VAR_2,
    struct ieee80211_tx_rate *VAR_3)
{
 const struct ath_rate_table *VAR_4 = VAR_2->rate_table;
 int VAR_5, VAR_6, VAR_7 = 0;

 if (!(VAR_3->flags & VAR_0))
  return VAR_3->idx;

 for (VAR_6 = 0; VAR_6 < VAR_2->max_valid_rate; VAR_6++) {
  VAR_7 = VAR_2->valid_rate_index[VAR_6];

  if (FUNC_0(VAR_4->info[VAR_7].phy) &&
      VAR_4->info[VAR_7].ratecode == VAR_3->idx)
   break;
 }

 VAR_5 = VAR_7;

 if (VAR_3->flags & VAR_1)
  VAR_5++;

 return VAR_5;
}
