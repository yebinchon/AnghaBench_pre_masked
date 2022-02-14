
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {int flags; int max_rates; int channel_change_time; char* rate_control_algorithm; scalar_t__ sta_data_size; TYPE_1__* wiphy; int queues; int extra_tx_headroom; } ;
struct TYPE_2__ {int interface_modes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_5)
{
 VAR_5->flags = VAR_2

     | VAR_1
     | VAR_0;

 VAR_5->extra_tx_headroom = FUNC_1();
 VAR_5->queues = VAR_4;
 VAR_5->max_rates = 2;


 VAR_5->channel_change_time = 7 * 1000;
 VAR_5->wiphy->interface_modes = FUNC_0(VAR_3);

 VAR_5->rate_control_algorithm = "minstrel_ht";

 VAR_5->sta_data_size = 0;
 return FUNC_2(VAR_5);
}
