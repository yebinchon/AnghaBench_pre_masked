
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {int bDynamicTxHighPower; int bDynamicTxLowPower; unsigned int undecorated_smoothed_pwdb; int bLastDTPFlag_High; int bLastDTPFlag_Low; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned int channel; scalar_t__ atheros_cap_exist; } ;
struct TYPE_4__ {int bdynamic_txpower_enable; scalar_t__ mode; scalar_t__ state; TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9=0;
 unsigned int VAR_10=0;
 if(VAR_8->ieee80211->bdynamic_txpower_enable != 1)
 {
  VAR_8->bDynamicTxHighPower = 0;
  VAR_8->bDynamicTxLowPower = 0;
  return;
 }

 if((VAR_8->ieee80211->current_network.atheros_cap_exist ) && (VAR_8->ieee80211->mode == VAR_2)){
  VAR_9 = VAR_3;
  VAR_10 = VAR_4;
 }
 else
 {
  VAR_9 = VAR_5;
  VAR_10 = VAR_6;
 }


 FUNC_0(VAR_0,"priv->undecorated_smoothed_pwdb = %ld \n" , VAR_8->undecorated_smoothed_pwdb);

 if(VAR_8->ieee80211->state == VAR_1)
 {
  if(VAR_8->undecorated_smoothed_pwdb >= VAR_9)
  {
   VAR_8->bDynamicTxHighPower = 1;
   VAR_8->bDynamicTxLowPower = 0;
  }
  else
  {

   if(VAR_8->undecorated_smoothed_pwdb < VAR_10 && VAR_8->bDynamicTxHighPower == 1)
   {
    VAR_8->bDynamicTxHighPower = 0;
   }

   if(VAR_8->undecorated_smoothed_pwdb < 35)
   {
    VAR_8->bDynamicTxLowPower = 1;
   }
   else if(VAR_8->undecorated_smoothed_pwdb >= 40)
   {
    VAR_8->bDynamicTxLowPower = 0;
   }
  }
 }
 else
 {

  VAR_8->bDynamicTxHighPower = 0;
  VAR_8->bDynamicTxLowPower = 0;
 }

 if( (VAR_8->bDynamicTxHighPower != VAR_8->bLastDTPFlag_High ) ||
  (VAR_8->bDynamicTxLowPower != VAR_8->bLastDTPFlag_Low ) )
 {
  FUNC_0(VAR_0,"SetTxPowerLevel8190()  channel = %d \n" , VAR_8->ieee80211->current_network.channel);
 }
 VAR_8->bLastDTPFlag_High = VAR_8->bDynamicTxHighPower;
 VAR_8->bLastDTPFlag_Low = VAR_8->bDynamicTxLowPower;

}
