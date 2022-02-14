
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ MidHighPwrTHR_L1; scalar_t__ MidHighPwrTHR_L2; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dig_enable_flag; long rssi_val; scalar_t__ dig_algorithm; int dig_algorithm_switch; scalar_t__ rx_gain_range_max; scalar_t__ rx_gain_range_min; scalar_t__ backoff_val; scalar_t__ dbg_mode; void* dig_state; scalar_t__ rssi_high_power_highthresh; scalar_t__ rssi_low_thresh; scalar_t__ rssi_high_thresh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 TYPE_1__ VAR_17 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

extern void FUNC_1(struct net_device *VAR_18,
        u32 VAR_19,
        u32 VAR_20)
{
 struct r8192_priv *VAR_21 = FUNC_0(VAR_18);
 if(VAR_19 == VAR_11)
  VAR_21->MidHighPwrTHR_L2 = (u8)VAR_20;
 else if(VAR_19 == VAR_12)
  VAR_21->MidHighPwrTHR_L1 = (u8)VAR_20;
 return;
 if (VAR_19 == VAR_10)
 {
  VAR_17.rssi_high_thresh = VAR_20;
 }
 else if (VAR_19 == VAR_13)
 {
  VAR_17.rssi_low_thresh = VAR_20;
 }
 else if (VAR_19 == VAR_11)
 {
  VAR_17.rssi_high_power_highthresh = VAR_20;
 }
 else if (VAR_19 == VAR_11)
 {
  VAR_17.rssi_high_power_highthresh = VAR_20;
 }
 else if (VAR_19 == VAR_6)
 {
  VAR_17.dig_state = VAR_16;
  VAR_17.dig_enable_flag = 1;
 }
 else if (VAR_19 == VAR_5)
 {
  VAR_17.dig_state = VAR_16;
  VAR_17.dig_enable_flag = 0;
 }
 else if (VAR_19 == VAR_4)
 {
  if(VAR_20 >= VAR_14)
   VAR_20 = VAR_15;
  VAR_17.dbg_mode = (u8)VAR_20;
 }
 else if (VAR_19 == VAR_7)
 {
  if(VAR_20 > 100)
   VAR_20 = 30;
  VAR_17.rssi_val = (long)VAR_20;
 }
 else if (VAR_19 == VAR_2)
 {
  if (VAR_20 >= VAR_1)
   VAR_20 = VAR_0;
  if(VAR_17.dig_algorithm != (u8)VAR_20)
   VAR_17.dig_algorithm_switch = 1;
  VAR_17.dig_algorithm = (u8)VAR_20;
 }
 else if (VAR_19 == VAR_3)
 {
  if(VAR_20 > 30)
   VAR_20 = 30;
  VAR_17.backoff_val = (u8)VAR_20;
 }
 else if(VAR_19 == VAR_9)
 {
  if(VAR_20 == 0)
   VAR_20 = 0x1;
  VAR_17.rx_gain_range_min = (u8)VAR_20;
 }
 else if(VAR_19 == VAR_8)
 {
  if(VAR_20 > 0x50)
   VAR_20 = 0x50;
  VAR_17.rx_gain_range_max = (u8)VAR_20;
 }
}
