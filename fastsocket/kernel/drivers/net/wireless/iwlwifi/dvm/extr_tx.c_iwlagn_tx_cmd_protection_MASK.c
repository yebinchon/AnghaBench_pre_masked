
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct iwl_priv *VAR_4,
         struct ieee80211_tx_info *VAR_5,
         __le16 VAR_6, __le32 *VAR_7)
{
 if (VAR_5->control.rates[0].flags & VAR_2 ||
     VAR_5->control.rates[0].flags & VAR_1 ||
     VAR_5->flags & VAR_0)
  *VAR_7 |= VAR_3;
}
