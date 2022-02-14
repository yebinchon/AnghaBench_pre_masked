
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__* DefaultInitialGain; scalar_t__ reset_count; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_connect_state; scalar_t__ cur_connect_state; scalar_t__ rssi_val; scalar_t__ backoff_val; scalar_t__ rx_gain_range_max; scalar_t__ cur_ig_value; scalar_t__ rx_gain_range_min; scalar_t__ pre_ig_value; scalar_t__ dig_algorithm_switch; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(
 struct net_device * VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_0(VAR_6);
 u8 VAR_8=0;
 static u8 VAR_9=0, VAR_10=0;
 static u32 VAR_11=0;

 if(VAR_1.dig_algorithm_switch)
 {
  VAR_9 = 0;
  VAR_11 = 0;
 }

 if(VAR_1.pre_connect_state == VAR_1.cur_connect_state)
 {
  if(VAR_1.cur_connect_state == VAR_0)
  {
   if((VAR_1.rssi_val+10-VAR_1.backoff_val) > VAR_1.rx_gain_range_max)
    VAR_1.cur_ig_value = VAR_1.rx_gain_range_max;
   else if((VAR_1.rssi_val+10-VAR_1.backoff_val) < VAR_1.rx_gain_range_min)
    VAR_1.cur_ig_value = VAR_1.rx_gain_range_min;
   else
    VAR_1.cur_ig_value = VAR_1.rssi_val+10-VAR_1.backoff_val;
  }
  else
  {
   if(VAR_1.cur_ig_value == 0)
    VAR_1.cur_ig_value = VAR_7->DefaultInitialGain[0];
   else
    VAR_1.cur_ig_value = VAR_1.pre_ig_value;
  }
 }
 else
 {
  VAR_1.cur_ig_value = VAR_7->DefaultInitialGain[0];
  VAR_1.pre_ig_value = 0;
 }



 if(VAR_7->reset_count != VAR_11)
 {
  VAR_10 = 1;
  VAR_11 = VAR_7->reset_count;
 }

 if(VAR_1.pre_ig_value != FUNC_1(VAR_6, VAR_2))
  VAR_10 = 1;

 {
  if((VAR_1.pre_ig_value != VAR_1.cur_ig_value)
   || !VAR_9 || VAR_10)
  {
   VAR_8 = (u8)VAR_1.cur_ig_value;


   FUNC_2(VAR_6, VAR_2, VAR_8);
   FUNC_2(VAR_6, VAR_3, VAR_8);
   FUNC_2(VAR_6, VAR_4, VAR_8);
   FUNC_2(VAR_6, VAR_5, VAR_8);
   VAR_1.pre_ig_value = VAR_1.cur_ig_value;
   VAR_9 = 1;
   VAR_10 = 0;
  }
 }
}
