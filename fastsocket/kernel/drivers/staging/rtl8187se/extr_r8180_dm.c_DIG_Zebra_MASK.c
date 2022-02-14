
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct r8180_priv {int FalseAlarmRegValue; int InitialGain; int DozePeriodInPast2Sec; int RegBModeGainStage; int DIG_NumberFallbackVote; int InitialGainBackUp; int DIG_NumberUpgradeVote; scalar_t__ RegDigOfdmFaUpTh; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;

void
FUNC_2(
 struct net_device *VAR_0
 )
{
 struct r8180_priv *VAR_1 = FUNC_1(VAR_0);
 u16 VAR_2, VAR_3;
 u16 VAR_4, VAR_5;
 int VAR_6 = 7;
 int VAR_7 = 4;
 u32 VAR_8=0;



 VAR_2 = (u16)(VAR_1->FalseAlarmRegValue & 0x0000ffff);
 VAR_3 = (u16)((VAR_1->FalseAlarmRegValue >> 16) & 0x0000ffff);
 VAR_4 = 0x15;
 VAR_5 = ((u16)(VAR_1->RegDigOfdmFaUpTh)) << 8;





 if (VAR_1->InitialGain == 0 )
 {
  VAR_1->InitialGain = 4;
 }

 {
  VAR_4 = 0x20;
 }


 VAR_8 = (2000-VAR_1 ->DozePeriodInPast2Sec);

 VAR_1 ->DozePeriodInPast2Sec=0;

 if(VAR_8)
 {


  VAR_4 = (u16)((VAR_4*VAR_8) / 2000) ;
  VAR_5 = (u16)((VAR_5*VAR_8) / 2000) ;

 }
 else
 {
  ;
 }


 VAR_6 = 8;
 VAR_7 = VAR_1->RegBModeGainStage;

 if (VAR_3 > VAR_4)
 {
  if (VAR_3 > VAR_5)
  {
   VAR_1->DIG_NumberFallbackVote++;
   if (VAR_1->DIG_NumberFallbackVote >1)
   {

    if (VAR_1->InitialGain < VAR_6)
    {
     VAR_1->InitialGainBackUp= VAR_1->InitialGain;

     VAR_1->InitialGain = (VAR_1->InitialGain + 1);


     FUNC_0(VAR_0);
    }
    VAR_1->DIG_NumberFallbackVote = 0;
    VAR_1->DIG_NumberUpgradeVote=0;
   }
  }
  else
  {
   if (VAR_1->DIG_NumberFallbackVote)
    VAR_1->DIG_NumberFallbackVote--;
  }
  VAR_1->DIG_NumberUpgradeVote=0;
 }
 else
 {
  if (VAR_1->DIG_NumberFallbackVote)
   VAR_1->DIG_NumberFallbackVote--;
  VAR_1->DIG_NumberUpgradeVote++;

  if (VAR_1->DIG_NumberUpgradeVote>9)
  {
   if (VAR_1->InitialGain > VAR_7)
   {
    VAR_1->InitialGainBackUp= VAR_1->InitialGain;

    VAR_1->InitialGain = (VAR_1->InitialGain - 1);


    FUNC_0(VAR_0);
   }
   VAR_1->DIG_NumberFallbackVote = 0;
   VAR_1->DIG_NumberUpgradeVote=0;
  }
 }



}
