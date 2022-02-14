
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
typedef int RF90_RADIO_PATH_E ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ,int,int) ;

bool FUNC_4(struct net_device* VAR_3)
{
 u32 VAR_4 = 0;


 u8 VAR_5;
 bool VAR_6 = 1;
 struct r8192_priv *VAR_7 = FUNC_0(VAR_3);
 BB_REGISTER_DEFINITION_T *VAR_8;







 for(VAR_5 = 0; VAR_5 <VAR_7->NumTotalRFPath; VAR_5++)
 {

  VAR_8 = &VAR_7->PHYRegDef[VAR_5];


  switch(VAR_5)
  {
  case 131:
  case 129:
   VAR_4 = FUNC_1(VAR_3, VAR_8->rfintfs, VAR_2);
   break;
  case 130 :
  case 128:
   VAR_4 = FUNC_1(VAR_3, VAR_8->rfintfs, VAR_2<<16);
   break;
  }


  FUNC_3(VAR_3, VAR_8->rfintfe, VAR_2<<16, 0x1);


  FUNC_3(VAR_3, VAR_8->rfintfo, VAR_2, 0x1);


  FUNC_3(VAR_3, VAR_8->rfHSSIPara2, VAR_0, 0x0);
  FUNC_3(VAR_3, VAR_8->rfHSSIPara2, VAR_1, 0x0);



  switch(VAR_5)
  {
  case 131:

   VAR_6 = FUNC_2(VAR_3,(RF90_RADIO_PATH_E)VAR_5);
   break;
  case 130:

   VAR_6 = FUNC_2(VAR_3,(RF90_RADIO_PATH_E)VAR_5);
   break;
  case 129:
   break;
  case 128:
   break;
  }

                                        ;
  switch(VAR_5)
  {
  case 131:
  case 129:
   FUNC_3(VAR_3, VAR_8->rfintfs, VAR_2, VAR_4);
   break;
  case 130 :
  case 128:
   FUNC_3(VAR_3, VAR_8->rfintfs, VAR_2<<16, VAR_4);
   break;
  }

  if(VAR_6 == 0){

   goto phy_RF8225_Config_ParaFile_Fail;
  }

 }


 return VAR_6;

phy_RF8225_Config_ParaFile_Fail:

 return VAR_6;
}
