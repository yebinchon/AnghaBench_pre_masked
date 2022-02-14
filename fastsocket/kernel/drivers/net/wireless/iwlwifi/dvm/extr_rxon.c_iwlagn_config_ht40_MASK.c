
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_40mhz; int extension_chan_offset; } ;
struct iwl_rxon_context {TYPE_1__ ht; } ;
struct ieee80211_conf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_1 (struct ieee80211_conf*) ;

void FUNC_2(struct ieee80211_conf *VAR_3,
   struct iwl_rxon_context *VAR_4)
{
 if (FUNC_0(VAR_3)) {
  VAR_4->ht.extension_chan_offset =
   VAR_1;
  VAR_4->ht.is_40mhz = 1;
 } else if (FUNC_1(VAR_3)) {
  VAR_4->ht.extension_chan_offset =
   VAR_0;
  VAR_4->ht.is_40mhz = 1;
 } else {
  VAR_4->ht.extension_chan_offset =
   VAR_2;
  VAR_4->ht.is_40mhz = 0;
 }
}
