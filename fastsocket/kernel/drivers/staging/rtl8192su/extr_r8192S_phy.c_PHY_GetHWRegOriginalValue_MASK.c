
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {void* framesync; void* framesyncC34; void** DefaultInitialGain; void** MCSTxPowerLevelOriginalOffset; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,void*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_2 (struct net_device*,int ,int ) ;

void FUNC_3(struct net_device* VAR_16)
{
 struct r8192_priv *VAR_17 = FUNC_1(VAR_16);



 VAR_17->MCSTxPowerLevelOriginalOffset[0] =
  FUNC_2(VAR_16, VAR_14, VAR_2);
 VAR_17->MCSTxPowerLevelOriginalOffset[1] =
  FUNC_2(VAR_16, VAR_15, VAR_2);
 VAR_17->MCSTxPowerLevelOriginalOffset[2] =
  FUNC_2(VAR_16, VAR_10, VAR_2);
 VAR_17->MCSTxPowerLevelOriginalOffset[3] =
  FUNC_2(VAR_16, VAR_11, VAR_2);
 VAR_17->MCSTxPowerLevelOriginalOffset[4] =
  FUNC_2(VAR_16, VAR_12, VAR_2);
 VAR_17->MCSTxPowerLevelOriginalOffset[5] =
  FUNC_2(VAR_16, VAR_13, VAR_2);


 VAR_17->MCSTxPowerLevelOriginalOffset[6] =
  FUNC_2(VAR_16, VAR_9, VAR_2);
 FUNC_0(VAR_0, "Legacy OFDM =%08x/%08x HT_OFDM=%08x/%08x/%08x/%08x\n",
 VAR_17->MCSTxPowerLevelOriginalOffset[0], VAR_17->MCSTxPowerLevelOriginalOffset[1] ,
 VAR_17->MCSTxPowerLevelOriginalOffset[2], VAR_17->MCSTxPowerLevelOriginalOffset[3] ,
 VAR_17->MCSTxPowerLevelOriginalOffset[4], VAR_17->MCSTxPowerLevelOriginalOffset[5] );


 VAR_17->DefaultInitialGain[0] = FUNC_2(VAR_16, VAR_5, VAR_1);
 VAR_17->DefaultInitialGain[1] = FUNC_2(VAR_16, VAR_6, VAR_1);
 VAR_17->DefaultInitialGain[2] = FUNC_2(VAR_16, VAR_7, VAR_1);
 VAR_17->DefaultInitialGain[3] = FUNC_2(VAR_16, VAR_8, VAR_1);
 FUNC_0(VAR_0, "Default initial gain (c50=0x%x, c58=0x%x, c60=0x%x, c68=0x%x) \n",
   VAR_17->DefaultInitialGain[0], VAR_17->DefaultInitialGain[1],
   VAR_17->DefaultInitialGain[2], VAR_17->DefaultInitialGain[3]);


 VAR_17->framesync = FUNC_2(VAR_16, VAR_4, VAR_1);
 VAR_17->framesyncC34 = FUNC_2(VAR_16, VAR_3, VAR_2);
 FUNC_0(VAR_0, "Default framesync (0x%x) = 0x%x \n",
    VAR_4, VAR_17->framesync);
}
