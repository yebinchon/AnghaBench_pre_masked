
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {int undecorated_smoothed_pwdb; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int dig_enable_flag; scalar_t__ dbg_mode; int cur_connect_state; int pre_connect_state; scalar_t__ dig_algorithm_switch; int rssi_val; int dig_state; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(
 struct net_device *VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_3(VAR_8);
 u8 VAR_10;
 static u8 VAR_11=0;

 if (VAR_7.dig_enable_flag == 0)
  return;


 if(VAR_7.dig_algorithm_switch)
  VAR_11 = 0;
 if(VAR_11 <= 3)
 {
  for(VAR_10=0; VAR_10<3; VAR_10++)
   FUNC_4(VAR_8, VAR_5, VAR_6, 0x8);
  VAR_11++;
  VAR_7.dig_state = VAR_3;
 }

 if(VAR_9->ieee80211->state == VAR_4)
  VAR_7.cur_connect_state = VAR_0;
 else
  VAR_7.cur_connect_state = VAR_1;




 if(VAR_7.dbg_mode == VAR_2)
  VAR_7.rssi_val = VAR_9->undecorated_smoothed_pwdb;

 FUNC_1(VAR_8);
 FUNC_2(VAR_8);
 FUNC_0(VAR_8);
 if(VAR_7.dig_algorithm_switch)
  VAR_7.dig_algorithm_switch = 0;
 VAR_7.pre_connect_state = VAR_7.cur_connect_state;

}
