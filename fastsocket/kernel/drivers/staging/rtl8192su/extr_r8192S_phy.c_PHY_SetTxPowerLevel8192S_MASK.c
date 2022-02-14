
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ bTXPowerDataReadFromEEPORM; size_t** RfTxPwrLevelCck; scalar_t__ rf_type; size_t** RfTxPwrLevelOfdm1T; size_t** RfTxPwrLevelOfdm2T; int EEPROMVersion; scalar_t__ CurrentChannelBW; size_t** TxPwrHt20Diff; int TxPwrbandEdgeFlag; size_t** TxPwrbandEdgeHt40; size_t** TxPwrbandEdgeHt20; size_t* AntennaTxPwDiff; size_t LegacyHTTxPowerDiff; size_t CurrentCckTxPwrIdx; size_t CurrentOfdm24GTxPwrIdx; int rf_chip; int CcxCellPwr; TYPE_2__* ieee80211; scalar_t__ bWithCcxCellPwr; } ;
struct net_device {int dummy; } ;
typedef int s8 ;
struct TYPE_3__ {size_t channel; } ;
struct TYPE_4__ {scalar_t__ iw_mode; TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,size_t) ;
 int FUNC_1 (struct net_device*,size_t) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;




 int FUNC_2 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 size_t FUNC_4 (struct net_device*,int ,int ) ;
 int VAR_15 ;
 int FUNC_5 (struct net_device*,int ,int,int) ;

void FUNC_6(struct net_device* VAR_16, u8 VAR_17)
{
 struct r8192_priv *VAR_18 = FUNC_3(VAR_16);

 u8 VAR_19 = (u8)VAR_1, VAR_20 = 0x10;
 s8 VAR_21 = 0;
 u32 VAR_22;
 u8 VAR_23 = (VAR_17 -1);

 u8 VAR_24[2] = {0};
 u8 VAR_25[2] = {0}, VAR_26[2] = {0};
 u8 VAR_27 = 0, VAR_28 = 2;

 if(VAR_18->bTXPowerDataReadFromEEPORM == VAR_2)
  return;





 {
  VAR_19 = VAR_18->RfTxPwrLevelCck[0][VAR_23];

  if (VAR_18->rf_type == VAR_7 || VAR_18->rf_type == VAR_6)
  {

  VAR_20 = VAR_18->RfTxPwrLevelOfdm1T[0][VAR_23];






  VAR_28 = 1;
  VAR_25[0] = VAR_26[0] = VAR_18->RfTxPwrLevelOfdm1T[0][VAR_23];
  }
  else if (VAR_18->rf_type == VAR_8)
  {

  VAR_20 = VAR_18->RfTxPwrLevelOfdm2T[0][VAR_23];

  VAR_21 = VAR_18->RfTxPwrLevelOfdm2T[1][VAR_23] -
      VAR_18->RfTxPwrLevelOfdm2T[0][VAR_23];
  VAR_25[0] = VAR_26[0] = VAR_18->RfTxPwrLevelOfdm2T[0][VAR_23];
  VAR_25[1] = VAR_26[1] = VAR_18->RfTxPwrLevelOfdm2T[1][VAR_23];
 }





 if (VAR_18->EEPROMVersion == 2)
 {
  if (VAR_18->CurrentChannelBW == VAR_3)
  {
   for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++)
   {

    VAR_24[VAR_27] = VAR_18->TxPwrHt20Diff[VAR_27][VAR_23];


    if (VAR_24[VAR_27] < 8)
    {
     VAR_25[VAR_27] += VAR_24[VAR_27];
    }
    else
    {
     VAR_25[VAR_27] -= (15-VAR_24[VAR_27]);
    }
   }


   if (VAR_18->rf_type == VAR_8)
    VAR_21 = VAR_25[1] - VAR_25[0];




  }


  if (VAR_18->TxPwrbandEdgeFlag == 1 )
  {
   for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++)
   {
    VAR_24[VAR_27] = 0;
    if (VAR_18->CurrentChannelBW == VAR_4)
    {
     if (VAR_17 <= 3)
      VAR_24[VAR_27] = VAR_18->TxPwrbandEdgeHt40[VAR_27][0];
     else if (VAR_17 >= 9)
      VAR_24[VAR_27] = VAR_18->TxPwrbandEdgeHt40[VAR_27][1];
     else
      VAR_24[VAR_27] = 0;

     VAR_26[VAR_27] -= VAR_24[VAR_27];
    }
    else if (VAR_18->CurrentChannelBW == VAR_3)
    {
     if (VAR_17 == 1)
      VAR_24[VAR_27] = VAR_18->TxPwrbandEdgeHt20[VAR_27][0];
     else if (VAR_17 >= 11)
      VAR_24[VAR_27] = VAR_18->TxPwrbandEdgeHt20[VAR_27][1];
     else
      VAR_24[VAR_27] = 0;

     VAR_25[VAR_27] -= VAR_24[VAR_27];
    }
   }

   if (VAR_18->rf_type == VAR_8)
   {

    if (VAR_18->CurrentChannelBW == VAR_4)
     VAR_21 = VAR_26[1] - VAR_26[0];
    else
     VAR_21 = VAR_25[1] - VAR_25[0];
   }
   if (VAR_18->CurrentChannelBW == VAR_3)
   {
    if (VAR_17 <= 1 || VAR_17 >= 11)
    {



    }
   }
   else
   {
    if (VAR_17 <= 3 || VAR_17 >= 9)
    {



    }
   }
  }
  }



 if(VAR_21 > 7)
  VAR_21 = 7;
 if(VAR_21 < -8)
  VAR_21 = -8;





  VAR_21 &= 0xf;


  VAR_18->AntennaTxPwDiff[2] = 0;
  VAR_18->AntennaTxPwDiff[1] = 0;
  VAR_18->AntennaTxPwDiff[0] = (u8)(VAR_21);


  VAR_22 = ( VAR_18->AntennaTxPwDiff[2]<<8 |
      VAR_18->AntennaTxPwDiff[1]<<4 |
      VAR_18->AntennaTxPwDiff[0] );


  FUNC_5(VAR_16, VAR_15, (VAR_12|VAR_13|VAR_14), VAR_22);
 }
 VAR_18->CurrentCckTxPwrIdx = VAR_19;
 VAR_18->CurrentOfdm24GTxPwrIdx = VAR_20;

 switch(VAR_18->rf_chip)
 {
  case 130:


  break;

  case 129:
   break;

  case 131:
   FUNC_0(VAR_16, VAR_19);
   FUNC_1(VAR_16, VAR_20);
   break;

  case 128:
   break;
  default:
   break;
 }

}
