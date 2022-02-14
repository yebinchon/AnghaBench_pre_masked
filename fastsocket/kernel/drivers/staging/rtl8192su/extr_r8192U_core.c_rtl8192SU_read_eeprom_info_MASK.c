
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {scalar_t__ RegChannelPlan; void* EepromOrEfuse; void* AutoloadFailFlag; scalar_t__ card_8192_version; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ VERSION_8192S ;
struct TYPE_8__ {int EEPROMChannelPlan; } ;
struct TYPE_7__ {int ChannelPlan; scalar_t__ RegChannelPlan; void* bChnlPlanFromHW; } ;
struct TYPE_6__ {void* bEnabled; } ;
typedef int RT_CHANNEL_DOMAIN ;
typedef TYPE_1__* PRT_DOT11D_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 void* VAR_7 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;

 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,char*,...) ;
 void* VAR_10 ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_13)
{
 struct r8192_priv *VAR_14 = FUNC_4(VAR_13);
 u8 VAR_15;

 FUNC_3(VAR_1, "====> ReadAdapterInfo8192SUsb\n");


 VAR_14->card_8192_version = (VERSION_8192S)((FUNC_6(VAR_13, VAR_8)>>16)&0xF);
 FUNC_3(VAR_1, "Chip Version ID: 0x%2x\n", VAR_14->card_8192_version);

 VAR_15 = FUNC_5(VAR_13, VAR_6);


 if (VAR_15 & VAR_3)
 {
  FUNC_3(VAR_1, "Boot from EEPROM\n");
  VAR_14->EepromOrEfuse = VAR_10;
 }
 else
 {
  FUNC_3(VAR_1, "Boot from EFUSE\n");
  VAR_14->EepromOrEfuse = VAR_7;
 }


 if (VAR_15 & VAR_2)
 {
  FUNC_3(VAR_1, "Autoload OK!!\n");
  VAR_14->AutoloadFailFlag=VAR_7;
  FUNC_8(VAR_13);
 }
 else
 {
  FUNC_3(VAR_1, "AutoLoad Fail reported from CR9346!!\n");
  VAR_14->AutoloadFailFlag=VAR_10;
  FUNC_7(VAR_13);


  if(!VAR_14->EepromOrEfuse)
  {
   FUNC_3(VAR_1, "Update shadow map for EFuse future use!!\n");
   FUNC_0(VAR_13);
  }
 }
 FUNC_3(VAR_1, "<==== ReadAdapterInfo8192SUsb\n");


}
