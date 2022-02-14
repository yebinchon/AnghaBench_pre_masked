
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct r8180_priv {int RateAdaptivePeriod; int CurrRetryCnt; unsigned long NumTxOkTotal; unsigned long LastTxokCnt; unsigned long LastRxokCnt; long Stats_RecvSignalPower; int CurrentOperaRate; int LastRetryCnt; int TryupingCountNoData; int LastFailTxRate; int LastFailTxRateSS; int FailTxRateCount; int bTryuping; scalar_t__ LastTxThroughput; scalar_t__ TryupingCount; scalar_t__ TryDownCountLowData; int LastRetryRate; int bUpdateARFR; char* chtxpwr_ofdm; char* chtxpwr; int bEnhanceTxPwr; int InitialGain; int RegBModeGainStage; int InitialGainBackUp; TYPE_2__* ieee80211; scalar_t__ NumTxOkBytesTotal; scalar_t__ LastTxOKBytes; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int HighestOperaRate; size_t channel; } ;
struct TYPE_4__ {unsigned long NumRxOkTotal; int rate; TYPE_1__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 void* FUNC_1 (struct net_device*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int ,scalar_t__) ;
 int FUNC_8 (struct net_device*,int ,int) ;

void
FUNC_9(
 struct net_device *VAR_5
 )
{
 struct r8180_priv *VAR_6 = (struct r8180_priv *)FUNC_4(VAR_5);
 unsigned long VAR_7;
 u16 VAR_8;
 u16 VAR_9;

 unsigned long VAR_10;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 u8 VAR_13 = 1;
 u8 VAR_14 = 2;
 u32 VAR_15;
 long VAR_16;
 bool VAR_17 = 0;
     u8 VAR_18=0, VAR_19 = 0;
 char VAR_20, VAR_21;

 VAR_6->RateAdaptivePeriod= VAR_3;


 VAR_8 = VAR_6->CurrRetryCnt;
 VAR_7 = VAR_6->NumTxOkTotal - VAR_6->LastTxokCnt;
 VAR_10 = VAR_6->ieee80211->NumRxOkTotal - VAR_6->LastRxokCnt;
 VAR_16 = VAR_6->Stats_RecvSignalPower;
 VAR_15 = (u32)(VAR_6->NumTxOkBytesTotal - VAR_6->LastTxOKBytes);
 VAR_6->LastTxOKBytes = VAR_6->NumTxOkBytesTotal;
 VAR_6->CurrentOperaRate = VAR_6->ieee80211->rate/5;


 if (VAR_7>0)
 {
  VAR_9 = (u16)(VAR_8*100/VAR_7);
 }
 else
 {
  VAR_9 = (u16)(VAR_8*100/1);
 }
 VAR_6->LastRetryCnt = VAR_6->CurrRetryCnt;
 VAR_6->LastTxokCnt = VAR_6->NumTxOkTotal;
 VAR_6->LastRxokCnt = VAR_6->ieee80211->NumRxOkTotal;
 VAR_6->CurrRetryCnt = 0;


 if (VAR_9==0 && VAR_7 == 0)
 {



  VAR_6->TryupingCountNoData++;



  if (VAR_6->TryupingCountNoData>30)
  {
   VAR_6->TryupingCountNoData = 0;
    VAR_6->CurrentOperaRate = FUNC_1(VAR_5, VAR_6->CurrentOperaRate);

   VAR_6->LastFailTxRate = 0;
   VAR_6->LastFailTxRateSS = -200;
   VAR_6->FailTxRateCount = 0;
  }
  goto SetInitialGain;
 }
        else
 {
  VAR_6->TryupingCountNoData=0;
 }
 if(VAR_6->CurrentOperaRate == 22 || VAR_6->CurrentOperaRate == 72)
 {
  VAR_13 += 9;
 }



 if(FUNC_2(VAR_6->CurrentOperaRate) || VAR_6->CurrentOperaRate == 36)
 {
   VAR_14 += 1;
 }


 if (VAR_6->bTryuping == 1)
 {







  if ( (VAR_9 > 25) && VAR_15 < VAR_6->LastTxThroughput)
  {

   VAR_12 = 1;



  }
  else
  {
   VAR_6->bTryuping = 0;
  }
 }
 else if (VAR_16 > -47 && (VAR_9 < 50))
 {
  if(VAR_6->CurrentOperaRate != VAR_6->ieee80211->current_network.HighestOperaRate )
  {
   VAR_11 = 1;

   VAR_6->TryupingCount += VAR_13;
  }


 }
 else if(VAR_7 > 9 && VAR_7< 100 && VAR_9 >= 600)
 {




  VAR_12 = 1;

  VAR_6->TryDownCountLowData += VAR_14;

 }
 else if ( VAR_6->CurrentOperaRate == 108 )
 {


  if ( (VAR_9>26)&&(VAR_6->LastRetryRate>25))

  {

   VAR_12 = 1;
  }

  else if ( (VAR_9>17)&&(VAR_6->LastRetryRate>16) && (VAR_16 > -72))

  {

   VAR_12 = 1;
  }

  if(VAR_12 && (VAR_16 < -75))
  {
   VAR_6->TryDownCountLowData += VAR_14;
  }


 }
 else if ( VAR_6->CurrentOperaRate == 96 )
 {


  if ( ((VAR_9>48) && (VAR_6->LastRetryRate>47)))


  {

   VAR_12 = 1;
  }

  else if ( ((VAR_9>21) && (VAR_6->LastRetryRate>20)) && (VAR_16 > -74))
  {

   VAR_12 = 1;
  }
  else if((VAR_9> (VAR_6->LastRetryRate + 50 )) && (VAR_6->FailTxRateCount >2 ))

  {
   VAR_12 = 1;
   VAR_6->TryDownCountLowData += VAR_14;
  }
  else if ( (VAR_9<8) && (VAR_6->LastRetryRate<8) )

  {
   VAR_11 = 1;
  }

  if(VAR_12 && (VAR_16 < -75))
  {
   VAR_6->TryDownCountLowData += VAR_14;
  }

 }
 else if ( VAR_6->CurrentOperaRate == 72 )
 {

  if ( (VAR_9>43) && (VAR_6->LastRetryRate>41))

  {

   VAR_12 = 1;
  }
  else if((VAR_9> (VAR_6->LastRetryRate + 50 )) && (VAR_6->FailTxRateCount >2 ))

  {
   VAR_12 = 1;
   VAR_6->TryDownCountLowData += VAR_14;
  }
  else if ( (VAR_9<15) && (VAR_6->LastRetryRate<16))

  {
   VAR_11 = 1;
  }

  if(VAR_12 && (VAR_16 < -80))
  {
   VAR_6->TryDownCountLowData += VAR_14;
  }

 }
 else if ( VAR_6->CurrentOperaRate == 48 )
 {


  if ( ((VAR_9>63) && (VAR_6->LastRetryRate>62)))

  {

   VAR_12 = 1;
  }

  else if ( ((VAR_9>33) && (VAR_6->LastRetryRate>32)) && (VAR_16 > -82) )

  {

   VAR_12 = 1;
  }
  else if((VAR_9> (VAR_6->LastRetryRate + 50 )) && (VAR_6->FailTxRateCount >2 ))


  {
   VAR_12 = 1;
   VAR_6->TryDownCountLowData += VAR_14;
  }
    else if ( (VAR_9<20) && (VAR_6->LastRetryRate<21))

  {
   VAR_11 = 1;
  }

  if(VAR_12 && (VAR_16 < -82))
  {
   VAR_6->TryDownCountLowData += VAR_14;
  }

 }
 else if ( VAR_6->CurrentOperaRate == 36 )
 {




  if ( ((VAR_9>85) && (VAR_6->LastRetryRate>86)))

  {

   VAR_12 = 1;
  }

  else if((VAR_9> (VAR_6->LastRetryRate + 50 )) && (VAR_6->FailTxRateCount >2 ))

  {
   VAR_12 = 1;
   VAR_6->TryDownCountLowData += VAR_14;
  }
  else if ( (VAR_9<22) && (VAR_6->LastRetryRate<23))

  {
   VAR_11 = 1;
  }

 }
 else if ( VAR_6->CurrentOperaRate == 22 )
 {

  if (VAR_9>95)

  {
   VAR_12 = 1;
  }
  else if ( (VAR_9<29) && (VAR_6->LastRetryRate <30) )

   {
   VAR_11 = 1;
   }

  }
 else if ( VAR_6->CurrentOperaRate == 11 )
 {

  if (VAR_9>149)

  {
   VAR_12 = 1;
  }
  else if ( (VAR_9<60) && (VAR_6->LastRetryRate < 65))


   {
   VAR_11 = 1;
   }

  }
 else if ( VAR_6->CurrentOperaRate == 4 )
 {

  if((VAR_9>99) && (VAR_6->LastRetryRate>99))

  {
   VAR_12 = 1;
  }
  else if ( (VAR_9 < 65) && (VAR_6->LastRetryRate < 70))

  {
   VAR_11 = 1;
  }

 }
 else if ( VAR_6->CurrentOperaRate == 2 )
 {

  if( (VAR_9<70) && (VAR_6->LastRetryRate<75))

  {
   VAR_11 = 1;
  }

 }

 if(VAR_11 && VAR_12)
     FUNC_5("StaRateAdaptive87B(): Tx Rate tried upping and downing simultaneously!\n");




 if(!VAR_11 && !VAR_12 && (VAR_6->TryupingCount == 0) && (VAR_6->TryDownCountLowData == 0)
  && VAR_6->CurrentOperaRate != VAR_6->ieee80211->current_network.HighestOperaRate && VAR_6->FailTxRateCount < 2)
 {
  if(VAR_4% (VAR_9 + 101) == 0)
  {
   VAR_11 = 1;
   VAR_6->bTryuping = 1;

  }
 }


 if(VAR_11)
 {
  VAR_6->TryupingCount++;
  VAR_6->TryDownCountLowData = 0;

  {





  }
  if((VAR_6->TryupingCount > (VAR_13 + VAR_6->FailTxRateCount * VAR_6->FailTxRateCount)) ||
   (VAR_16 > VAR_6->LastFailTxRateSS) || VAR_6->bTryuping)
  {
   VAR_6->TryupingCount = 0;



   if(VAR_6->CurrentOperaRate == 22)
    VAR_17 = 1;




   if( ((VAR_6->CurrentOperaRate == 72) || (VAR_6->CurrentOperaRate == 48) || (VAR_6->CurrentOperaRate == 36)) &&
    (VAR_6->FailTxRateCount > 2) )
    VAR_6->RateAdaptivePeriod= (VAR_3/2);




   VAR_6->CurrentOperaRate = FUNC_1(VAR_5, VAR_6->CurrentOperaRate);



   if(VAR_6->CurrentOperaRate ==36)
   {
    VAR_6->bUpdateARFR=1;
    FUNC_8(VAR_5, VAR_0, 0x0F8F);

   }
   else if(VAR_6->bUpdateARFR)
   {
    VAR_6->bUpdateARFR=0;
    FUNC_8(VAR_5, VAR_0, 0x0FFF);

   }


   if(VAR_6->LastFailTxRate != VAR_6->CurrentOperaRate)
   {
    VAR_6->LastFailTxRate = VAR_6->CurrentOperaRate;
    VAR_6->FailTxRateCount = 0;
    VAR_6->LastFailTxRateSS = -200;
   }
  }
 }
 else
 {
  if(VAR_6->TryupingCount > 0)
   VAR_6->TryupingCount --;
 }

 if(VAR_12)
 {
  VAR_6->TryDownCountLowData++;
  VAR_6->TryupingCount = 0;
  {



  }


  if(VAR_6->TryDownCountLowData > VAR_14 || VAR_6->bTryuping)
  {
   VAR_6->TryDownCountLowData = 0;
   VAR_6->bTryuping = 0;

   if(VAR_6->LastFailTxRate == VAR_6->CurrentOperaRate)
   {
    VAR_6->FailTxRateCount ++;

    if(VAR_16 > VAR_6->LastFailTxRateSS)
    {
     VAR_6->LastFailTxRateSS = VAR_16;
    }
   }
   else
   {
    VAR_6->LastFailTxRate = VAR_6->CurrentOperaRate;
    VAR_6->FailTxRateCount = 1;
    VAR_6->LastFailTxRateSS = VAR_16;
   }
   VAR_6->CurrentOperaRate = FUNC_0(VAR_5, VAR_6->CurrentOperaRate);



   if( (VAR_16 < -80) && (VAR_6->CurrentOperaRate > 72 ))
   {
    VAR_6->CurrentOperaRate = 72;

   }


   if(VAR_6->CurrentOperaRate ==36)
   {
    VAR_6->bUpdateARFR=1;
    FUNC_8(VAR_5, VAR_0, 0x0F8F);

   }
   else if(VAR_6->bUpdateARFR)
   {
    VAR_6->bUpdateARFR=0;
    FUNC_8(VAR_5, VAR_0, 0x0FFF);

   }




   if(FUNC_2(VAR_6->CurrentOperaRate))
   {
    VAR_17 = 1;
   }

  }
 }
 else
 {
  if(VAR_6->TryDownCountLowData > 0)
   VAR_6->TryDownCountLowData --;
 }



 if(VAR_6->FailTxRateCount >= 0x15 ||
  (!VAR_11 && !VAR_12 && VAR_6->TryDownCountLowData == 0 && VAR_6->TryupingCount && VAR_6->FailTxRateCount > 0x6))
 {
  VAR_6->FailTxRateCount --;
 }


 VAR_20 = VAR_6->chtxpwr_ofdm[VAR_6->ieee80211->current_network.channel];
 VAR_21 = VAR_6->chtxpwr[VAR_6->ieee80211->current_network.channel];


 if((VAR_6->CurrentOperaRate < 96) &&(VAR_6->CurrentOperaRate > 22))
 {
  VAR_19 = FUNC_6(VAR_5, VAR_1);
  VAR_18 = FUNC_6(VAR_5, VAR_2);


  if(VAR_19 == VAR_21 )
  {
   if(VAR_18 != (VAR_20+2) )
   {
   VAR_6->bEnhanceTxPwr= 1;
   VAR_18 = ((VAR_18+2) > 35) ? 35: (VAR_18+2);
   FUNC_7(VAR_5, VAR_2, VAR_18);

   }
  }

  else if(VAR_19 < VAR_21)
  {
   if(!VAR_6->bEnhanceTxPwr)
   {
    VAR_6->bEnhanceTxPwr= 1;
    VAR_18 = ((VAR_18+2) > 35) ? 35: (VAR_18+2);
    FUNC_7(VAR_5, VAR_2, VAR_18);

   }
  }
 }
 else if(VAR_6->bEnhanceTxPwr)
 {
  VAR_19 = FUNC_6(VAR_5, VAR_1);
  VAR_18 = FUNC_6(VAR_5, VAR_2);


  if(VAR_19 == VAR_21 )
  {
  VAR_6->bEnhanceTxPwr= 0;
  FUNC_7(VAR_5, VAR_2, VAR_20);

  }

  else if(VAR_19 < VAR_21)
  {
   VAR_6->bEnhanceTxPwr= 0;
   VAR_18 = ((VAR_18-2) > 0) ? (VAR_18-2): 0;
   FUNC_7(VAR_5, VAR_2, VAR_18);


  }
 }





SetInitialGain:
 if(VAR_17)
 {
  if(FUNC_2(VAR_6->CurrentOperaRate))
  {
   if(VAR_6->InitialGain > VAR_6->RegBModeGainStage)
   {
    VAR_6->InitialGainBackUp= VAR_6->InitialGain;

    if(VAR_16 < -85)
    {

     VAR_6->InitialGain = VAR_6->RegBModeGainStage;
    }
    else if(VAR_6->InitialGain > VAR_6->RegBModeGainStage + 1)
    {
     VAR_6->InitialGain -= 2;
    }
    else
    {
     VAR_6->InitialGain --;
    }
    FUNC_5("StaRateAdaptive87SE(): update init_gain to index %d for date rate %d\n",VAR_6->InitialGain, VAR_6->CurrentOperaRate);
    FUNC_3(VAR_5);
   }
  }
  else
  {
   if(VAR_6->InitialGain < 4)
   {
    VAR_6->InitialGainBackUp= VAR_6->InitialGain;

    VAR_6->InitialGain ++;
    FUNC_5("StaRateAdaptive87SE(): update init_gain to index %d for date rate %d\n",VAR_6->InitialGain, VAR_6->CurrentOperaRate);
    FUNC_3(VAR_5);
   }
  }
 }


 VAR_6->LastRetryRate = VAR_9;
 VAR_6->LastTxThroughput = VAR_15;
 VAR_6->ieee80211->rate = VAR_6->CurrentOperaRate * 5;
}
