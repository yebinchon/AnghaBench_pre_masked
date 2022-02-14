
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8192_priv {int SifsTime; void* framesync; void* framesyncC34; void** DefaultInitialGain; void** MCSTxPowerLevelOriginalOffset; void* CCKTxPowerLevelOriginalOffset; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,void*,...) ;
 int VAR_3 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 void* FUNC_2 (struct net_device*,int ) ;
 void* FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (struct net_device*,int ) ;

void FUNC_5(struct net_device* VAR_16)
{
 struct r8192_priv *VAR_17 = FUNC_1(VAR_16);
 VAR_17->DefaultInitialGain[0] = FUNC_2(VAR_16, VAR_6);
 VAR_17->DefaultInitialGain[1] = FUNC_2(VAR_16, VAR_7);
 VAR_17->DefaultInitialGain[2] = FUNC_2(VAR_16, VAR_8);
 VAR_17->DefaultInitialGain[3] = FUNC_2(VAR_16, VAR_9);
 FUNC_0(VAR_1, "Default initial gain (c50=0x%x, c58=0x%x, c60=0x%x, c68=0x%x) \n",
  VAR_17->DefaultInitialGain[0], VAR_17->DefaultInitialGain[1],
  VAR_17->DefaultInitialGain[2], VAR_17->DefaultInitialGain[3]);


 VAR_17->framesync = FUNC_2(VAR_16, VAR_5);
 VAR_17->framesyncC34 = FUNC_3(VAR_16, VAR_4);
 FUNC_0(VAR_1, "Default framesync (0x%x) = 0x%x \n",
  VAR_5, VAR_17->framesync);

 VAR_17->SifsTime = FUNC_4(VAR_16, VAR_3);
 return;
}
