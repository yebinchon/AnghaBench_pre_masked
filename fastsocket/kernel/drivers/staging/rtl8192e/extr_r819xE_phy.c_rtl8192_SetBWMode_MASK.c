
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {int SetBWModeInProgress; int nCur40MhzPrimeSC; int CurrentChannelBW; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int atm_swbw; } ;
typedef scalar_t__ HT_EXTCHNL_OFFSET ;
typedef int HT_CHANNEL_WIDTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_5, HT_CHANNEL_WIDTH VAR_6, HT_EXTCHNL_OFFSET VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_1(VAR_5);


 if(VAR_8->SetBWModeInProgress)
  return;

  FUNC_0(&(VAR_8->ieee80211->atm_swbw));
 VAR_8->SetBWModeInProgress= 1;

 VAR_8->CurrentChannelBW = VAR_6;

 if(VAR_7==VAR_3)
  VAR_8->nCur40MhzPrimeSC = VAR_2;
 else if(VAR_7==VAR_4)
  VAR_8->nCur40MhzPrimeSC = VAR_1;
 else
  VAR_8->nCur40MhzPrimeSC = VAR_0;



 FUNC_2(VAR_5);

}
