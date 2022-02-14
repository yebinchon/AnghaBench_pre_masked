
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {int CurrentChannelBW; int Record_CCK_20Mindex; int CCK_index; int Record_CCK_40Mindex; scalar_t__ bcck_in_ch14; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_2(VAR_3);

 if(VAR_4->ieee80211->current_network.channel == 14 && !VAR_4->bcck_in_ch14)
  VAR_4->bcck_in_ch14 = VAR_2;
 else if(VAR_4->ieee80211->current_network.channel != 14 && VAR_4->bcck_in_ch14)
  VAR_4->bcck_in_ch14 = VAR_1;


 switch(VAR_4->CurrentChannelBW)
 {

  case 129:
   if(VAR_4->Record_CCK_20Mindex == 0)
    VAR_4->Record_CCK_20Mindex = 6;
   VAR_4->CCK_index = VAR_4->Record_CCK_20Mindex;
   FUNC_0(VAR_0, "20MHz, CCK_Tx_Power_Track_BW_Switch_ThermalMeter(),CCK_index = %d\n", VAR_4->CCK_index);
  break;


  case 128:
   VAR_4->CCK_index = VAR_4->Record_CCK_40Mindex;
   FUNC_0(VAR_0, "40MHz, CCK_Tx_Power_Track_BW_Switch_ThermalMeter(), CCK_index = %d\n", VAR_4->CCK_index);
  break;
 }
 FUNC_1(VAR_3, VAR_4->bcck_in_ch14);
}
