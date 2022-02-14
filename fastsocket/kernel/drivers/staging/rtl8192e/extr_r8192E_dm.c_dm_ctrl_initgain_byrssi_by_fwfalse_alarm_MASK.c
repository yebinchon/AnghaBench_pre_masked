
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ undecorated_smoothed_pwdb; scalar_t__ reset_count; scalar_t__ CurrentChannelBW; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int dig_enable_flag; scalar_t__ dig_state; scalar_t__ rssi_low_thresh; scalar_t__ rssi_high_thresh; void* dig_highpwr_state; scalar_t__ dig_algorithm_switch; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_2__ VAR_7 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct net_device*,int ,int ,int) ;
 int FUNC_3 (struct net_device*,int,int) ;

__attribute__((used)) static void FUNC_4(
 struct net_device *VAR_14)
{
 struct r8192_priv *VAR_15 = FUNC_1(VAR_14);
 static u32 VAR_16 = 0;
 u8 VAR_17;

 if (VAR_7.dig_enable_flag == 0)
  return;

 if(VAR_7.dig_algorithm_switch)
 {
  VAR_7.dig_state = VAR_0;

  for(VAR_17=0; VAR_17<3; VAR_17++)
   FUNC_2(VAR_14, VAR_5, VAR_6, 0x1);
  VAR_7.dig_algorithm_switch = 0;
 }

 if (VAR_15->ieee80211->state != VAR_4)
  return;


 if ((VAR_15->undecorated_smoothed_pwdb > VAR_7.rssi_low_thresh) &&
  (VAR_15->undecorated_smoothed_pwdb < VAR_7.rssi_high_thresh))
 {
  return;
 }







 if ((VAR_15->undecorated_smoothed_pwdb <= VAR_7.rssi_low_thresh))
 {


  if (VAR_7.dig_state == VAR_1 &&
   (VAR_15->reset_count == VAR_16))
  {
   return;
  }
  else
  {
   VAR_16 = VAR_15->reset_count;
  }


  VAR_7.dig_highpwr_state = VAR_0;
  VAR_7.dig_state = VAR_1;


  FUNC_2(VAR_14, VAR_5, VAR_6, 0x8);


  FUNC_3(VAR_14, VAR_9, 0x17);
  FUNC_3(VAR_14, VAR_11, 0x17);
  FUNC_3(VAR_14, VAR_12, 0x17);
  FUNC_3(VAR_14, VAR_13, 0x17);


  if (VAR_15->CurrentChannelBW != VAR_3)
  {





    FUNC_3(VAR_14, (VAR_10+3), 0x00);
  }
  else
   FUNC_3(VAR_14, VAR_8, 0x42);


  FUNC_3(VAR_14, 0xa0a, 0x08);



  return;

 }



 if ((VAR_15->undecorated_smoothed_pwdb >= VAR_7.rssi_high_thresh) )
 {
  u8 VAR_18 = 0;

  if (VAR_7.dig_state == VAR_2 &&
   (VAR_15->reset_count == VAR_16))
  {
   FUNC_0(VAR_14);
   return;
  }
  else
  {
   if (VAR_15->reset_count != VAR_16)
    VAR_18 = 1;

   VAR_16 = VAR_15->reset_count;
  }

  VAR_7.dig_state = VAR_2;




  if (VAR_18 == 1)
  {
   FUNC_3(VAR_14, VAR_9, 0x2c);
   FUNC_3(VAR_14, VAR_11, 0x2c);
   FUNC_3(VAR_14, VAR_12, 0x2c);
   FUNC_3(VAR_14, VAR_13, 0x2c);
  }
  else
  {
  FUNC_3(VAR_14, VAR_9, 0x20);
  FUNC_3(VAR_14, VAR_11, 0x20);
  FUNC_3(VAR_14, VAR_12, 0x20);
  FUNC_3(VAR_14, VAR_13, 0x20);
  }


  if (VAR_15->CurrentChannelBW != VAR_3)
  {





    FUNC_3(VAR_14, (VAR_10+3), 0x20);
  }
  else
   FUNC_3(VAR_14, VAR_8, 0x44);


  FUNC_3(VAR_14, 0xa0a, 0xcd);






  FUNC_2(VAR_14, VAR_5, VAR_6, 0x1);

 }

 FUNC_0(VAR_14);

}
