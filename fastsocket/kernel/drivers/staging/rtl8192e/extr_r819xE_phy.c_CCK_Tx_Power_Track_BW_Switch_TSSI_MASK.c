
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {int CurrentChannelBW; void* bcck_in_ch14; TYPE_2__* ieee80211; scalar_t__ CCKPresentAttentuation; scalar_t__ CCKPresentAttentuation_difference; scalar_t__ CCKPresentAttentuation_40Mdefault; scalar_t__ CCKPresentAttentuation_20Mdefault; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 void* VAR_3 ;
 int FUNC_1 (struct net_device*,void*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4 )
{
 struct r8192_priv *VAR_5 = FUNC_2(VAR_4);

 switch(VAR_5->CurrentChannelBW)
 {

  case 129:

   VAR_5->CCKPresentAttentuation =
    VAR_5->CCKPresentAttentuation_20Mdefault + VAR_5->CCKPresentAttentuation_difference;

   if(VAR_5->CCKPresentAttentuation > (VAR_0-1))
    VAR_5->CCKPresentAttentuation = VAR_0-1;
   if(VAR_5->CCKPresentAttentuation < 0)
    VAR_5->CCKPresentAttentuation = 0;

   FUNC_0(VAR_1, "20M, priv->CCKPresentAttentuation = %d\n", VAR_5->CCKPresentAttentuation);

   if(VAR_5->ieee80211->current_network.channel== 14 && !VAR_5->bcck_in_ch14)
   {
    VAR_5->bcck_in_ch14 = VAR_3;
    FUNC_1(VAR_4,VAR_5->bcck_in_ch14);
   }
   else if(VAR_5->ieee80211->current_network.channel != 14 && VAR_5->bcck_in_ch14)
   {
    VAR_5->bcck_in_ch14 = VAR_2;
    FUNC_1(VAR_4,VAR_5->bcck_in_ch14);
   }
   else
    FUNC_1(VAR_4,VAR_5->bcck_in_ch14);
  break;


  case 128:

   VAR_5->CCKPresentAttentuation =
    VAR_5->CCKPresentAttentuation_40Mdefault + VAR_5->CCKPresentAttentuation_difference;

   FUNC_0(VAR_1, "40M, priv->CCKPresentAttentuation = %d\n", VAR_5->CCKPresentAttentuation);
   if(VAR_5->CCKPresentAttentuation > (VAR_0-1))
    VAR_5->CCKPresentAttentuation = VAR_0-1;
   if(VAR_5->CCKPresentAttentuation < 0)
    VAR_5->CCKPresentAttentuation = 0;

   if(VAR_5->ieee80211->current_network.channel == 14 && !VAR_5->bcck_in_ch14)
   {
    VAR_5->bcck_in_ch14 = VAR_3;
    FUNC_1(VAR_4,VAR_5->bcck_in_ch14);
   }
   else if(VAR_5->ieee80211->current_network.channel != 14 && VAR_5->bcck_in_ch14)
   {
    VAR_5->bcck_in_ch14 = VAR_2;
    FUNC_1(VAR_4,VAR_5->bcck_in_ch14);
   }
   else
    FUNC_1(VAR_4,VAR_5->bcck_in_ch14);
  break;
 }
}
