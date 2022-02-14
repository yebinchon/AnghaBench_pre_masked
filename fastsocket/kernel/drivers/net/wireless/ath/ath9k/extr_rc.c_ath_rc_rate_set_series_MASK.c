
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ieee80211_tx_rate_control {TYPE_1__* hw; scalar_t__ rts; } ;
struct ieee80211_tx_rate {size_t count; int flags; int idx; } ;
struct ath_rate_table {TYPE_2__* info; } ;
struct TYPE_4__ {int phy; int ratecode; } ;
struct TYPE_3__ {int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const struct ath_rate_table *VAR_4,
       struct ieee80211_tx_rate *VAR_5,
       struct ieee80211_tx_rate_control *VAR_6,
       u8 VAR_7, u8 VAR_8, int VAR_9)
{
 VAR_5->count = VAR_7;
 VAR_5->idx = VAR_4->info[VAR_8].ratecode;

 if (VAR_6->rts || VAR_9)
  VAR_5->flags |= VAR_3;

 if (FUNC_1(VAR_4->info[VAR_8].phy)) {
  VAR_5->flags |= VAR_1;
  if (FUNC_0(VAR_4->info[VAR_8].phy) &&
      FUNC_3(&VAR_6->hw->conf))
   VAR_5->flags |= VAR_0;
  if (FUNC_2(VAR_4->info[VAR_8].phy))
   VAR_5->flags |= VAR_2;
 }
}
