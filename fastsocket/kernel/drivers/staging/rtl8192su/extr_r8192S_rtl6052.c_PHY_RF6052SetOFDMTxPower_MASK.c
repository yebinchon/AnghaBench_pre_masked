
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int EEPROMVersion; int LegacyHTTxPowerDiff; int** TxPwrLegacyHtDiff; int TxPwrbandEdgeFlag; int** TxPwrbandEdgeLegacyOfdm; scalar_t__ CurrentChannelBW; int** TxPwrHt20Diff; int** TxPwrbandEdgeHt40; int** TxPwrbandEdgeHt20; int* MCSTxPowerLevelOriginalOffset; scalar_t__ rf_type; int* AntennaTxPwDiff; scalar_t__ bDynamicTxHighPower; scalar_t__ bIgnoreDiffRateTxPowerOffset; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int,int) ;

extern void FUNC_2(struct net_device* VAR_6, u8 VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9, VAR_10, VAR_11;
 u8 VAR_12 = 0;
 u16 VAR_13[6] = {0xe00, 0xe04, 0xe10, 0xe14, 0xe18, 0xe1c};

 u8 VAR_14 = VAR_8->ieee80211->current_network.channel;
 u8 VAR_15[4];
 u8 VAR_16 = 0, VAR_17 = 0 ;
 u8 VAR_18;
 u8 VAR_19 = 0;
 u8 VAR_20=0, VAR_21=0, VAR_22=0;
 u8 VAR_23=0, VAR_24=0;



 if (VAR_8->EEPROMVersion != 2)
 VAR_10 = VAR_7 + (VAR_8->LegacyHTTxPowerDiff & 0xf);
 else if (VAR_8->EEPROMVersion == 2)
 {



  VAR_20 = VAR_8->TxPwrLegacyHtDiff[VAR_3][VAR_14-1];


  VAR_10 = VAR_7 + VAR_20;



  if (VAR_8->TxPwrbandEdgeFlag == 1 )
  {
   VAR_23 = 1;
   VAR_24 = 11;
   VAR_22 = 0;
   if (VAR_14 <= VAR_23)
    VAR_22 = VAR_8->TxPwrbandEdgeLegacyOfdm[VAR_3][0];
   else if (VAR_14 >= VAR_24)
   {
    VAR_22 = VAR_8->TxPwrbandEdgeLegacyOfdm[VAR_3][1];
   }
   VAR_10 -= VAR_22;
   if (VAR_14 <= VAR_23 || VAR_14 >= VAR_24)
   {


   }
  }

 }
 VAR_10 = (VAR_10<<24) | (VAR_10<<16) |(VAR_10<<8) |VAR_10;


 if(VAR_8->EEPROMVersion == 2)
 {



  if (VAR_8->CurrentChannelBW == VAR_0)
  {

   VAR_21 = VAR_8->TxPwrHt20Diff[VAR_3][VAR_14-1];


   if (VAR_21 < 8)
    VAR_7 += VAR_21;
   else
    VAR_7 -= (16-VAR_21);



  }


  if (VAR_8->TxPwrbandEdgeFlag == 1 )
  {
   VAR_22 = 0;
   if (VAR_8->CurrentChannelBW == VAR_1)
   {
    if (VAR_14 <= 3)
     VAR_22 = VAR_8->TxPwrbandEdgeHt40[VAR_3][0];
    else if (VAR_14 >= 9)
     VAR_22 = VAR_8->TxPwrbandEdgeHt40[VAR_3][1];
    if (VAR_14 <= 3 || VAR_14 >= 9)
    {


    }
   }
   else if (VAR_8->CurrentChannelBW == VAR_0)
   {
    if (VAR_14 <= 1)
     VAR_22 = VAR_8->TxPwrbandEdgeHt20[VAR_3][0];
    else if (VAR_14 >= 11)
     VAR_22 = VAR_8->TxPwrbandEdgeHt20[VAR_3][1];
    if (VAR_14 <= 1 || VAR_14 >= 11)
    {


    }
   }
   VAR_7 -= VAR_22;

  }
 }
 VAR_11 = VAR_7;
 VAR_11 = (VAR_11<<24) | (VAR_11<<16) |(VAR_11<<8) |VAR_11;



 for(VAR_12=0; VAR_12<6; VAR_12++)
 {




  if(VAR_8->bIgnoreDiffRateTxPowerOffset)
   VAR_9 = ((VAR_12<2)?VAR_10:VAR_11);
  else
  VAR_9 = VAR_8->MCSTxPowerLevelOriginalOffset[VAR_12] + ((VAR_12<2)?VAR_10:VAR_11);
  if (VAR_8->rf_type == VAR_4)
  {
   VAR_19 = VAR_8->AntennaTxPwDiff[0];


   if (VAR_19 >= 8)
   {
    VAR_16 = 0x10-VAR_19;

   }
   else if (VAR_19 >= 0)
   {
    VAR_17 = VAR_2-VAR_19;

   }
  }

  for (VAR_18= 0; VAR_18 <4; VAR_18++)
  {
   VAR_15[VAR_18] = (u8)((VAR_9 & (0x7f<<(VAR_18*8)))>>(VAR_18*8));
   if (VAR_15[VAR_18] > VAR_2)
    VAR_15[VAR_18] = VAR_2;






   if (VAR_8->rf_type == VAR_4)
   {
    if (VAR_19 >= 8)
    {
     if (VAR_15[VAR_18] <VAR_16)
     {

      VAR_15[VAR_18] = VAR_16;
     }
    }
    else if (VAR_19 >= 1)
    {
     if (VAR_15[VAR_18] > VAR_17)
     {

      VAR_15[VAR_18] = VAR_17;
     }
    }

   }

  }





  if(VAR_8->bDynamicTxHighPower == VAR_5)
  {

   if(VAR_12 > 1)
   {
    VAR_9 = 0x03030303;
   }

   else
   {
    VAR_9 = (VAR_15[3]<<24) | (VAR_15[2]<<16) |(VAR_15[1]<<8) |VAR_15[0];
   }

  }
  else
  {
   VAR_9 = (VAR_15[3]<<24) | (VAR_15[2]<<16) |(VAR_15[1]<<8) |VAR_15[0];

  }





  FUNC_1(VAR_6, VAR_13[VAR_12], 0x7f7f7f7f, VAR_9);
 }

}
