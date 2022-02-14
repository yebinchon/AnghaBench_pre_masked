
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * ucast_rate_idx; int bcast_rate_idx; int mgmt_rate_idx; } ;
struct wl12xx_vif {int basic_rate_set; TYPE_3__ ap; } ;
struct TYPE_4__ {int ac_conf_count; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct conf_tx_rate_class {int enabled_rates; int long_retry_limit; int short_retry_limit; scalar_t__ aflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wl1271*,struct conf_tx_rate_class*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct wl1271*,int) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_4(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6)
{
 int VAR_7, VAR_8;
 struct conf_tx_rate_class VAR_9;
 u32 VAR_10;

 FUNC_1(VAR_3, "AP basic rate set: 0x%x",
       VAR_6->basic_rate_set);

 if (VAR_6->basic_rate_set == 0)
  return -VAR_4;

 VAR_9.enabled_rates = VAR_6->basic_rate_set;
 VAR_9.long_retry_limit = 10;
 VAR_9.short_retry_limit = 10;
 VAR_9.aflags = 0;
 VAR_8 = FUNC_0(VAR_5, &VAR_9, VAR_6->ap.mgmt_rate_idx);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_9.enabled_rates = FUNC_2(VAR_5, VAR_6->basic_rate_set);
 VAR_9.short_retry_limit = 10;
 VAR_9.long_retry_limit = 10;
 VAR_9.aflags = 0;
 VAR_8 = FUNC_0(VAR_5, &VAR_9, VAR_6->ap.bcast_rate_idx);
 if (VAR_8 < 0)
  return VAR_8;





 if ((VAR_6->basic_rate_set & VAR_2))
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_0;


 VAR_10 |= VAR_1;


 VAR_10 |= FUNC_3(VAR_5, VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_5->conf.tx.ac_conf_count; VAR_7++) {
  VAR_9.enabled_rates = VAR_10;
  VAR_9.short_retry_limit = 10;
  VAR_9.long_retry_limit = 10;
  VAR_9.aflags = 0;
  VAR_8 = FUNC_0(VAR_5, &VAR_9,
      VAR_6->ap.ucast_rate_idx[VAR_7]);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
