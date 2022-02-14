
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
typedef int RF90_RADIO_PATH_E ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int,int) ;

RT_STATUS FUNC_6(struct net_device* VAR_5)
{
 u32 VAR_6 = 0;



 u8 VAR_7;
 RT_STATUS VAR_8 = VAR_1;
 struct r8192_priv *VAR_9 = FUNC_1(VAR_5);
 BB_REGISTER_DEFINITION_T *VAR_10;







 for(VAR_7 = 0; VAR_7 <VAR_9->NumTotalRFPath; VAR_7++)
 {

  VAR_10 = &VAR_9->PHYRegDef[VAR_7];


  switch(VAR_7)
  {
  case 131:
  case 129:
   VAR_6 = FUNC_3(VAR_5, VAR_10->rfintfs, VAR_4);
   break;
  case 130 :
  case 128:
   VAR_6 = FUNC_3(VAR_5, VAR_10->rfintfs, VAR_4<<16);
   break;
  }


  FUNC_5(VAR_5, VAR_10->rfintfe, VAR_4<<16, 0x1);


  FUNC_5(VAR_5, VAR_10->rfintfo, VAR_4, 0x1);


  FUNC_5(VAR_5, VAR_10->rfHSSIPara2, VAR_2, 0x0);
  FUNC_5(VAR_5, VAR_10->rfHSSIPara2, VAR_3, 0x0);



  switch(VAR_7)
  {
  case 131:
   VAR_8= FUNC_4(VAR_5,(RF90_RADIO_PATH_E)VAR_7);
   break;
  case 130:
   VAR_8= FUNC_4(VAR_5,(RF90_RADIO_PATH_E)VAR_7);
   break;
  case 129:
   break;
  case 128:
   break;
  }

                                        ;
  switch(VAR_7)
  {
  case 131:
  case 129:
   FUNC_5(VAR_5, VAR_10->rfintfs, VAR_4, VAR_6);
   break;
  case 130 :
  case 128:
   FUNC_5(VAR_5, VAR_10->rfintfs, VAR_4<<16, VAR_6);
   break;
  }

  if(VAR_8 != VAR_1){
   FUNC_2("phy_RF6052_Config_ParaFile():Radio[%d] Fail!!", VAR_7);
   goto phy_RF6052_Config_ParaFile_Fail;
  }

 }

 FUNC_0(VAR_0, "<---phy_RF6052_Config_ParaFile()\n");
 return VAR_8;

phy_RF6052_Config_ParaFile_Fail:
 return VAR_8;
}
