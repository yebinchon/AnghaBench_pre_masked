
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ CustomerID; scalar_t__ rf_type; int rate_adaptive; } ;
struct net_device {int dummy; } ;
typedef TYPE_1__* prate_adaptive ;
struct TYPE_2__ {int ping_rssi_enable; int ping_rssi_thresh_for_ra; int upper_rssi_threshold_ratr; int middle_rssi_threshold_ratr; int low_rssi_threshold_ratr; int low_rssi_threshold_ratr_40M; int low_rssi_threshold_ratr_20M; int ping_rssi_ratr; void* low_rssi_thresh_for_ra40M; void* low_rssi_thresh_for_ra20M; void* high_rssi_thresh_for_ra; void* low2high_rssi_thresh_for_ra40M; void* low2high_rssi_thresh_for_ra20M; void* high2low_rssi_thresh_for_ra; int ratr_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device * VAR_7)
{

 struct r8192_priv *VAR_8 = FUNC_0(VAR_7);
 prate_adaptive VAR_9 = (prate_adaptive)&VAR_8->rate_adaptive;

 VAR_9->ratr_state = VAR_0;
 VAR_9->high2low_rssi_thresh_for_ra = VAR_4;
 VAR_9->low2high_rssi_thresh_for_ra20M = VAR_5+5;
 VAR_9->low2high_rssi_thresh_for_ra40M = VAR_6+5;

 VAR_9->high_rssi_thresh_for_ra = VAR_4+5;
 VAR_9->low_rssi_thresh_for_ra20M = VAR_5;
 VAR_9->low_rssi_thresh_for_ra40M = VAR_6;

 if(VAR_8->CustomerID == VAR_3)
  VAR_9->ping_rssi_enable = 1;
 else
  VAR_9->ping_rssi_enable = 0;
 VAR_9->ping_rssi_thresh_for_ra = 15;


 if (VAR_8->rf_type == VAR_2)
 {


  VAR_9->upper_rssi_threshold_ratr = 0x8f0f0000;
  VAR_9->middle_rssi_threshold_ratr = 0x8f0ff000;
  VAR_9->low_rssi_threshold_ratr = 0x8f0ff001;
  VAR_9->low_rssi_threshold_ratr_40M = 0x8f0ff005;
  VAR_9->low_rssi_threshold_ratr_20M = 0x8f0ff001;
  VAR_9->ping_rssi_ratr = 0x0000000d;
 }
 else if (VAR_8->rf_type == VAR_1)
 {
  VAR_9->upper_rssi_threshold_ratr = 0x000f0000;
  VAR_9->middle_rssi_threshold_ratr = 0x000ff000;
  VAR_9->low_rssi_threshold_ratr = 0x000ff001;
  VAR_9->low_rssi_threshold_ratr_40M = 0x000ff005;
  VAR_9->low_rssi_threshold_ratr_20M = 0x000ff001;
  VAR_9->ping_rssi_ratr = 0x0000000d;
 }

}
