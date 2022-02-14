
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ OFDM_index; scalar_t__ CCK_index; scalar_t__* ThermalMeter; scalar_t__ CurrentChannelBW; scalar_t__ txpower_count; void* bcck_in_ch14; TYPE_2__* ieee80211; void* btxpower_trackingInit; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 scalar_t__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct net_device*,void*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,int,int) ;
 int FUNC_5 (struct net_device*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device * VAR_14)
{

 struct r8192_priv *VAR_15 = FUNC_2(VAR_14);
 u32 VAR_16, VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23 =0, VAR_24=0;

 if(!VAR_15->btxpower_trackingInit)
 {

  VAR_16= FUNC_3(VAR_14, VAR_13, VAR_11);
  for(VAR_23=0; VAR_23<VAR_6; VAR_23++)
  {
   if(VAR_16 == VAR_5[VAR_23])
   {
    VAR_15->OFDM_index= (u8)VAR_23;
    FUNC_0(VAR_2, "Initial reg0x%x = 0x%x, OFDM_index=0x%x\n",
     VAR_13, VAR_16, VAR_15->OFDM_index);
   }
  }


  VAR_17 = FUNC_3(VAR_14, VAR_12, VAR_10);
  for(VAR_23=0 ; VAR_23<VAR_1 ; VAR_23++)
  {
   if(VAR_17 == (u32)VAR_0[VAR_23][0])
   {
    VAR_15->CCK_index =(u8) VAR_23;
    FUNC_0(VAR_2, "Initial reg0x%x = 0x%x, CCK_index=0x%x\n",
     VAR_12, VAR_17, VAR_15->CCK_index);
    break;
   }
  }
  VAR_15->btxpower_trackingInit = VAR_8;

  return;
 }


 VAR_16 = FUNC_4(VAR_14, VAR_7, 0x12, 0x078);
 FUNC_0(VAR_2, "Readback ThermalMeterA = %d \n", VAR_16);
 if(VAR_16 < 3 || VAR_16 > 13)
  return;
 if(VAR_16 >= 12)
  VAR_16 = 12;
 FUNC_0(VAR_2, "Valid ThermalMeterA = %d \n", VAR_16);
 VAR_15->ThermalMeter[0] = 9;
 VAR_15->ThermalMeter[1] = 9;


 if(VAR_15->ThermalMeter[0] >= (u8)VAR_16)
 {
  VAR_18 = VAR_20 = 6+(VAR_15->ThermalMeter[0]-(u8)VAR_16);
  VAR_21 = VAR_20 - 6;
  if(VAR_18 >= VAR_6)
   VAR_18 = VAR_6-1;
  if(VAR_20 >= VAR_1)
   VAR_20 = VAR_1-1;
  if(VAR_21 >= VAR_1)
   VAR_21 = VAR_1-1;
 }
 else
 {
  VAR_22 = ((u8)VAR_16 - VAR_15->ThermalMeter[0]);
  if(VAR_22 >= 6)
   VAR_18 = VAR_20 = 0;
  else
   VAR_18 = VAR_20 = 6 - VAR_22;
  VAR_21 = 0;
 }



 if(VAR_15->CurrentChannelBW != VAR_4)
  VAR_19 = VAR_21;
 else
  VAR_19 = VAR_20;

 if(VAR_15->ieee80211->current_network.channel == 14 && !VAR_15->bcck_in_ch14)
 {
  VAR_15->bcck_in_ch14 = VAR_8;
  VAR_24 = 1;
 }
 else if(VAR_15->ieee80211->current_network.channel != 14 && VAR_15->bcck_in_ch14)
 {
  VAR_15->bcck_in_ch14 = VAR_3;
  VAR_24 = 1;
 }

 if(VAR_15->CCK_index != VAR_19)
 {
  VAR_15->CCK_index = VAR_19;
  VAR_24 = 1;
 }

 if(VAR_24)
 {

  FUNC_1(VAR_14, VAR_15->bcck_in_ch14);
 }
 if(VAR_15->OFDM_index != VAR_18)
 {
  VAR_15->OFDM_index = VAR_18;
  FUNC_5(VAR_14, VAR_13, VAR_11, VAR_5[VAR_15->OFDM_index]);
  FUNC_0(VAR_2, "Update OFDMSwing[%d] = 0x%x\n",
   VAR_15->OFDM_index, VAR_5[VAR_15->OFDM_index]);
 }
 VAR_15->txpower_count = 0;
}
