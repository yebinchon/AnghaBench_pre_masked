
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_iface_limit {int max; int types; } ;
struct rt2x00_dev {TYPE_3__* hw; struct ieee80211_iface_combination* if_combinations; TYPE_1__* ops; struct ieee80211_iface_limit if_limits_ap; } ;
struct ieee80211_iface_combination {int n_limits; int max_interfaces; int num_different_channels; struct ieee80211_iface_limit* limits; } ;
struct TYPE_6__ {TYPE_2__* wiphy; } ;
struct TYPE_5__ {int n_iface_combinations; struct ieee80211_iface_combination* iface_combinations; } ;
struct TYPE_4__ {int max_ap_intf; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct rt2x00_dev *VAR_3)
{
 struct ieee80211_iface_limit *VAR_4;
 struct ieee80211_iface_combination *VAR_5;

 if (VAR_3->ops->max_ap_intf < 2)
  return;




 VAR_4 = &VAR_3->if_limits_ap;
 VAR_4->max = VAR_3->ops->max_ap_intf;
 VAR_4->types = FUNC_0(VAR_1);







 VAR_5 = &VAR_3->if_combinations[VAR_0];
 VAR_5->limits = VAR_4;
 VAR_5->n_limits = 1;
 VAR_5->max_interfaces = VAR_4->max;
 VAR_5->num_different_channels = 1;




 VAR_3->hw->wiphy->iface_combinations = VAR_3->if_combinations;
 VAR_3->hw->wiphy->n_iface_combinations = 1;
}
