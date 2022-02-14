
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ reset_count; scalar_t__ CurrentChannelBW; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_connect_state; scalar_t__ cur_connect_state; scalar_t__ rssi_val; scalar_t__ rssi_high_power_highthresh; scalar_t__ curpd_thstate; scalar_t__ rssi_low_thresh; scalar_t__ rssi_high_thresh; scalar_t__ rssi_high_power_lowthresh; scalar_t__ prepd_thstate; scalar_t__ dig_algorithm_switch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct net_device*,scalar_t__,int ,int) ;
 int FUNC_2 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(
 struct net_device * VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_0(VAR_9);
 static u8 VAR_11=0, VAR_12=0;
 static u32 VAR_13 = 0;

 if(VAR_6.dig_algorithm_switch)
 {
  VAR_11 = 0;
  VAR_13 = 0;
 }

 if(VAR_6.pre_connect_state == VAR_6.cur_connect_state)
 {
  if(VAR_6.cur_connect_state == VAR_0)
  {
   if (VAR_6.rssi_val >= VAR_6.rssi_high_power_highthresh)
    VAR_6.curpd_thstate = VAR_1;
   else if ((VAR_6.rssi_val <= VAR_6.rssi_low_thresh))
    VAR_6.curpd_thstate = VAR_2;
   else if ((VAR_6.rssi_val >= VAR_6.rssi_high_thresh) &&
     (VAR_6.rssi_val < VAR_6.rssi_high_power_lowthresh))
    VAR_6.curpd_thstate = VAR_3;
   else
    VAR_6.curpd_thstate = VAR_6.prepd_thstate;
  }
  else
  {
   VAR_6.curpd_thstate = VAR_2;
  }
 }
 else
 {
  VAR_6.curpd_thstate = VAR_2;
 }


 if(VAR_10->reset_count != VAR_13)
 {
  VAR_12 = 1;
  VAR_13 = VAR_10->reset_count;
 }

 {
  if((VAR_6.prepd_thstate != VAR_6.curpd_thstate) ||
   (VAR_11<=3) || VAR_12)
  {

   if(VAR_6.curpd_thstate == VAR_2)
   {

    if (VAR_10->CurrentChannelBW != VAR_4)
    {


     FUNC_1(VAR_9, (VAR_8+3), VAR_5, 0x00);



    }
    else
     FUNC_2(VAR_9, VAR_7, 0x42);
   }
   else if(VAR_6.curpd_thstate == VAR_3)
   {

    if (VAR_10->CurrentChannelBW != VAR_4)
    {





      FUNC_2(VAR_9, (VAR_8+3), 0x20);




    }
    else
     FUNC_2(VAR_9, VAR_7, 0x44);
   }
   else if(VAR_6.curpd_thstate == VAR_1)
   {

    if (VAR_10->CurrentChannelBW != VAR_4)
    {



      FUNC_2(VAR_9, (VAR_8+3), 0x10);




    }
    else
     FUNC_2(VAR_9, VAR_7, 0x43);
   }
   VAR_6.prepd_thstate = VAR_6.curpd_thstate;
   if(VAR_11 <= 3)
    VAR_11++;
   VAR_12 = 0;
  }
 }
}
