
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ NumTotalRFPath; int chan; int card_8192_version; } ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;
typedef int HT_CHANNEL_WIDTH ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int ,int,int ,int) ;

void FUNC_4(struct net_device* VAR_4 , HT_CHANNEL_WIDTH VAR_5)
{
 u8 VAR_6;
 struct r8192_priv *VAR_7 = FUNC_1(VAR_4);


 for(VAR_6 = 0; VAR_6 <VAR_7->NumTotalRFPath; VAR_6++)
 {
  if (!FUNC_2(VAR_4, VAR_6))
    continue;

  switch(VAR_5)
  {
   case 129:
    if(VAR_7->card_8192_version == VAR_1 || VAR_7->card_8192_version == VAR_2)
    {
     FUNC_3(VAR_4, (RF90_RADIO_PATH_E)VAR_6, 0x0b, VAR_3, 0x100);
     FUNC_3(VAR_4, (RF90_RADIO_PATH_E)VAR_6, 0x2c, VAR_3, 0x3d7);
     FUNC_3(VAR_4, (RF90_RADIO_PATH_E)VAR_6, 0x0e, VAR_3, 0x021);



    }
    else
    {
     FUNC_0(VAR_0, "PHY_SetRF8256Bandwidth(): unknown hardware version\n");
    }

    break;
   case 128:
    if(VAR_7->card_8192_version == VAR_1 ||VAR_7->card_8192_version == VAR_2)
    {
     FUNC_3(VAR_4, (RF90_RADIO_PATH_E)VAR_6, 0x0b, VAR_3, 0x300);
     FUNC_3(VAR_4, (RF90_RADIO_PATH_E)VAR_6, 0x2c, VAR_3, 0x3ff);
     FUNC_3(VAR_4, (RF90_RADIO_PATH_E)VAR_6, 0x0e, VAR_3, 0x0e1);
    }
    else
    {
     FUNC_0(VAR_0, "PHY_SetRF8256Bandwidth(): unknown hardware version\n");
    }


    break;
   default:
    FUNC_0(VAR_0, "PHY_SetRF8256Bandwidth(): unknown Bandwidth: %#X\n",VAR_5 );
    break;

  }
 }
 return;
}
