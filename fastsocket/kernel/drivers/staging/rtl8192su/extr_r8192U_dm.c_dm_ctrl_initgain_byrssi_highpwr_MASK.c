
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ undecorated_smoothed_pwdb; scalar_t__ reset_count; scalar_t__ CurrentChannelBW; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ rssi_high_power_lowthresh; scalar_t__ rssi_high_power_highthresh; scalar_t__ dig_highpwr_state; scalar_t__ rssi_high_thresh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net_device*,scalar_t__,int ,int) ;
 int FUNC_2 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(
 struct net_device * VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_0(VAR_7);
 static u32 VAR_9 = 0;


 if ((VAR_8->undecorated_smoothed_pwdb > VAR_4.rssi_high_power_lowthresh) &&
  (VAR_8->undecorated_smoothed_pwdb < VAR_4.rssi_high_power_highthresh))
 {
  return;
 }




 if (VAR_8->undecorated_smoothed_pwdb >= VAR_4.rssi_high_power_highthresh)
 {
  if (VAR_4.dig_highpwr_state == VAR_1 &&
   (VAR_8->reset_count == VAR_9))
   return;
  else
   VAR_4.dig_highpwr_state = VAR_1;


  if (VAR_8->CurrentChannelBW != VAR_2)
  {
   FUNC_1(VAR_7, (VAR_6+3), VAR_3, 0x10);




  }
  else
   FUNC_2(VAR_7, VAR_5, 0x43);
 }
 else
 {
  if (VAR_4.dig_highpwr_state == VAR_0&&
   (VAR_8->reset_count == VAR_9))
   return;
  else
   VAR_4.dig_highpwr_state = VAR_0;

  if (VAR_8->undecorated_smoothed_pwdb < VAR_4.rssi_high_power_lowthresh &&
    VAR_8->undecorated_smoothed_pwdb >= VAR_4.rssi_high_thresh)
  {

   if (VAR_8->CurrentChannelBW != VAR_2)
   {



     FUNC_2(VAR_7, (VAR_6+3), 0x20);





   }
   else
    FUNC_2(VAR_7, VAR_5, 0x44);
  }
 }

 VAR_9 = VAR_8->reset_count;

}
