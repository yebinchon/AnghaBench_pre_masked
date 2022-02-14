
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {void* CurrentChannelBW; scalar_t__ SetBWModeInProgress; scalar_t__ up; int nCur40MhzPrimeSC; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ HT_EXTCHNL_OFFSET ;
typedef void* HT_CHANNEL_WIDTH ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_7 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_8, HT_CHANNEL_WIDTH VAR_9, HT_EXTCHNL_OFFSET VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_2(VAR_8);
 HT_CHANNEL_WIDTH VAR_12 = VAR_11->CurrentChannelBW;
 if(VAR_11->SetBWModeInProgress)
  return;

 VAR_11->SetBWModeInProgress= VAR_7;

 VAR_11->CurrentChannelBW = VAR_9;

 if(VAR_10==VAR_5)
  VAR_11->nCur40MhzPrimeSC = VAR_4;
 else if(VAR_10==VAR_6)
  VAR_11->nCur40MhzPrimeSC = VAR_3;
 else
  VAR_11->nCur40MhzPrimeSC = VAR_2;

 if((VAR_11->up) )
 {
 FUNC_1(VAR_8);
 }
 else
 {
  FUNC_0(VAR_0, "PHY_SetBWMode8192S() SetBWModeInProgress FALSE driver sleep or unload\n");
  VAR_11->SetBWModeInProgress= VAR_1;
  VAR_11->CurrentChannelBW = VAR_12;
 }
}
