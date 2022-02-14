
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct r8192_priv {size_t NumTotalRFPath; TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rfintfs; int rfHSSIPara2; int rfintfo; int rfintfe; } ;
typedef scalar_t__ RT_STATUS ;
typedef size_t RF90_RADIO_PATH_E ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,size_t) ;
 size_t FUNC_4 (struct net_device*,size_t) ;
 int FUNC_5 (struct net_device*,size_t,int,int ) ;
 int FUNC_6 (struct net_device*,size_t,int,int ,int) ;
 scalar_t__ FUNC_7 (struct net_device*,int ,size_t) ;
 int FUNC_8 (struct net_device*,int ,int,int) ;

RT_STATUS FUNC_9(struct net_device* VAR_10)
{
 u32 VAR_11 = 0;
 u8 VAR_12;
 RT_STATUS VAR_13 = VAR_5;
 BB_REGISTER_DEFINITION_T *VAR_14;
 struct r8192_priv *VAR_15 = FUNC_1(VAR_10);
 u32 VAR_16 = 0x3;
 u32 VAR_17 = 0x7f1;
 u32 VAR_18 = 0;
 u8 VAR_19 = 5, VAR_20 = 5;
 u8 VAR_21 = 0;



 for(VAR_12 = (RF90_RADIO_PATH_E)131; VAR_12 <VAR_15->NumTotalRFPath; VAR_12++)
 {
  if (!FUNC_3(VAR_10, VAR_12))
    continue;

  VAR_14 = &VAR_15->PHYRegDef[VAR_12];





  switch(VAR_12)
  {
  case 131:
  case 129:
   VAR_11 = FUNC_2(VAR_10, VAR_14->rfintfs, VAR_9);
   break;
  case 130 :
  case 128:
   VAR_11 = FUNC_2(VAR_10, VAR_14->rfintfs, VAR_9<<16);
   break;
  }


  FUNC_8(VAR_10, VAR_14->rfintfe, VAR_9<<16, 0x1);


  FUNC_8(VAR_10, VAR_14->rfintfo, VAR_9, 0x1);


  FUNC_8(VAR_10, VAR_14->rfHSSIPara2, VAR_6, 0x0);
  FUNC_8(VAR_10, VAR_14->rfHSSIPara2, VAR_7, 0x0);

  FUNC_6(VAR_10, (RF90_RADIO_PATH_E) VAR_12, 0x0, VAR_8, 0xbf);



  VAR_13 = FUNC_7(VAR_10, VAR_3, (RF90_RADIO_PATH_E)VAR_12);
  if(VAR_13!= VAR_5)
  {
   FUNC_0(VAR_0, "PHY_RF8256_Config():Check Radio[%d] Fail!!\n", VAR_12);
   goto phy_RF8256_Config_ParaFile_Fail;
  }

  VAR_20 = VAR_19;
  VAR_18 = 0;

  switch(VAR_12)
  {
  case 131:
   while(VAR_18!=VAR_17 && VAR_20!=0)
   {
    VAR_21 = FUNC_4(VAR_10,(RF90_RADIO_PATH_E)VAR_12);
    VAR_18 = FUNC_5(VAR_10, (RF90_RADIO_PATH_E)VAR_12, VAR_16, VAR_8);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_12, VAR_16, VAR_18);
    VAR_20--;
   }
   break;
  case 130:
   while(VAR_18!=VAR_17 && VAR_20!=0)
   {
    VAR_21 = FUNC_4(VAR_10,(RF90_RADIO_PATH_E)VAR_12);
    VAR_18 = FUNC_5(VAR_10, (RF90_RADIO_PATH_E)VAR_12, VAR_16, VAR_8);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_12, VAR_16, VAR_18);
    VAR_20--;
   }
   break;
  case 129:
   while(VAR_18!=VAR_17 && VAR_20!=0)
   {
    VAR_21 = FUNC_4(VAR_10,(RF90_RADIO_PATH_E)VAR_12);
    VAR_18 = FUNC_5(VAR_10, (RF90_RADIO_PATH_E)VAR_12, VAR_16, VAR_8);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_12, VAR_16, VAR_18);
    VAR_20--;
   }
   break;
  case 128:
   while(VAR_18!=VAR_17 && VAR_20!=0)
   {
    VAR_21 = FUNC_4(VAR_10,(RF90_RADIO_PATH_E)VAR_12);
    VAR_18 = FUNC_5(VAR_10, (RF90_RADIO_PATH_E)VAR_12, VAR_16, VAR_8);
    FUNC_0(VAR_2, "RF %d %d register final value: %x\n", VAR_12, VAR_16, VAR_18);
    VAR_20--;
   }
   break;
  }

                                        ;
  switch(VAR_12)
  {
  case 131:
  case 129:
   FUNC_8(VAR_10, VAR_14->rfintfs, VAR_9, VAR_11);
   break;
  case 130 :
  case 128:
   FUNC_8(VAR_10, VAR_14->rfintfs, VAR_9<<16, VAR_11);
   break;
  }

  if(VAR_21){
   FUNC_0(VAR_0, "phy_RF8256_Config_ParaFile():Radio[%d] Fail!!", VAR_12);
   goto phy_RF8256_Config_ParaFile_Fail;
  }

 }

 FUNC_0(VAR_1, "PHY Initialization Success\n") ;
 return VAR_5;

phy_RF8256_Config_ParaFile_Fail:
 FUNC_0(VAR_0, "PHY Initialization failed\n") ;
 return VAR_4;
}
