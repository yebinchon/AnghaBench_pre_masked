
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ CustomerID; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dig_enable_flag; int initialgain_lowerbound_state; int rssi_val; int rx_gain_range_min; int rx_gain_range_max; int backoff_val; int rssi_high_power_highthresh; int rssi_high_power_lowthresh; int rssi_high_thresh; int rssi_low_thresh; void* dig_highpwr_state; void* dig_state; scalar_t__ dig_algorithm_switch; int dbg_mode; int dig_algorithm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_13)
{
 struct r8192_priv *VAR_14 = FUNC_0(VAR_13);

 VAR_12.dig_enable_flag = 1;
 VAR_12.dig_algorithm = VAR_0;
 VAR_12.dbg_mode = VAR_1;
 VAR_12.dig_algorithm_switch = 0;


 VAR_12.dig_state = VAR_10;
 VAR_12.dig_highpwr_state = VAR_10;
 VAR_12.initialgain_lowerbound_state = 0;

 VAR_12.rssi_low_thresh = VAR_9;
 VAR_12.rssi_high_thresh = VAR_8;

 VAR_12.rssi_high_power_lowthresh = VAR_4;
 VAR_12.rssi_high_power_highthresh = VAR_3;

 VAR_12.rssi_val = 50;
 VAR_12.backoff_val = VAR_2;
 VAR_12.rx_gain_range_max = VAR_5;
 if(VAR_14->CustomerID == VAR_11)
  VAR_12.rx_gain_range_min = VAR_7;
 else
  VAR_12.rx_gain_range_min = VAR_6;

}
