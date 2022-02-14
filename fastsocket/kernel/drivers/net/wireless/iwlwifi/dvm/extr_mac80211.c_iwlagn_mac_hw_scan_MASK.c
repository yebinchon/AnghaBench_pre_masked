
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {scalar_t__ scan_type; int mutex; struct ieee80211_vif* scan_vif; struct cfg80211_scan_request* scan_request; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_scan_request {scalar_t__ n_channels; TYPE_1__** channels; } ;
struct TYPE_2__ {int band; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct iwl_priv*,struct ieee80211_vif*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_2,
         struct ieee80211_vif *VAR_3,
         struct cfg80211_scan_request *VAR_4)
{
 struct iwl_priv *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 FUNC_0(VAR_5, "enter\n");

 if (VAR_4->n_channels == 0)
  return -VAR_0;

 FUNC_4(&VAR_5->mutex);





 if (VAR_5->scan_type != VAR_1) {
  FUNC_1(VAR_5,
          "SCAN request during internal scan - defer\n");
  VAR_5->scan_request = VAR_4;
  VAR_5->scan_vif = VAR_3;
  VAR_6 = 0;
 } else {
  VAR_5->scan_request = VAR_4;
  VAR_5->scan_vif = VAR_3;




  VAR_6 = FUNC_3(VAR_5, VAR_3, VAR_1,
     VAR_4->channels[0]->band);
  if (VAR_6) {
   VAR_5->scan_request = ((void*)0);
   VAR_5->scan_vif = ((void*)0);
  }
 }

 FUNC_0(VAR_5, "leave\n");

 FUNC_5(&VAR_5->mutex);

 return VAR_6;
}
