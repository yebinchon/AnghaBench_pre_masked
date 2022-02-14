
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int xaagccore1; int xbagccore1; int xcagccore1; int xdagccore1; int cca; } ;
struct r8192_priv {TYPE_3__* ieee80211; TYPE_1__ initgain_backup; scalar_t__ up; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int dig_algorithm; } ;
struct TYPE_6__ {int channel; } ;
struct TYPE_7__ {TYPE_2__ current_network; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int,int,int) ;
 int FUNC_5 (struct net_device*,int,int) ;

void FUNC_6(struct net_device *VAR_14, u8 VAR_15)
{


 struct r8192_priv *VAR_16 = FUNC_1(VAR_14);
 u32 VAR_17;
 u8 VAR_18;

 if(VAR_16->up)
 {
  switch(VAR_15)
  {
   case 129:
   FUNC_0(VAR_0, "IG_Backup, backup the initial gain.\n");
    VAR_18 = 0x17;
    VAR_17 = VAR_5;
    if(VAR_8.dig_algorithm == VAR_1)
     FUNC_4(VAR_14, VAR_4, VAR_6, 0x8);
    VAR_16->initgain_backup.xaagccore1 = (u8)FUNC_2(VAR_14, VAR_10, VAR_17);
    VAR_16->initgain_backup.xbagccore1 = (u8)FUNC_2(VAR_14, VAR_11, VAR_17);
    VAR_16->initgain_backup.xcagccore1 = (u8)FUNC_2(VAR_14, VAR_12, VAR_17);
    VAR_16->initgain_backup.xdagccore1 = (u8)FUNC_2(VAR_14, VAR_13, VAR_17);
    VAR_17 = VAR_7;
    VAR_16->initgain_backup.cca = (u8)FUNC_2(VAR_14, VAR_9, VAR_17);

   FUNC_0(VAR_0, "Scan InitialGainBackup 0xc50 is %x\n",VAR_16->initgain_backup.xaagccore1);
   FUNC_0(VAR_0, "Scan InitialGainBackup 0xc58 is %x\n",VAR_16->initgain_backup.xbagccore1);
   FUNC_0(VAR_0, "Scan InitialGainBackup 0xc60 is %x\n",VAR_16->initgain_backup.xcagccore1);
   FUNC_0(VAR_0, "Scan InitialGainBackup 0xc68 is %x\n",VAR_16->initgain_backup.xdagccore1);
   FUNC_0(VAR_0, "Scan InitialGainBackup 0xa0a is %x\n",VAR_16->initgain_backup.cca);

   FUNC_0(VAR_0, "Write scan initial gain = 0x%x \n", VAR_18);
    FUNC_5(VAR_14, VAR_10, VAR_18);
    FUNC_5(VAR_14, VAR_11, VAR_18);
    FUNC_5(VAR_14, VAR_12, VAR_18);
    FUNC_5(VAR_14, VAR_13, VAR_18);
    FUNC_0(VAR_0, "Write scan 0xa0a = 0x%x \n", 0x08);
    FUNC_5(VAR_14, 0xa0a, 0x08);
    break;
   case 128:
   FUNC_0(VAR_0, "IG_Restore, restore the initial gain.\n");
    VAR_17 = 0x7f;
    if(VAR_8.dig_algorithm == VAR_1)
     FUNC_4(VAR_14, VAR_4, VAR_6, 0x8);

    FUNC_4(VAR_14, VAR_10, VAR_17, (u32)VAR_16->initgain_backup.xaagccore1);
    FUNC_4(VAR_14, VAR_11, VAR_17, (u32)VAR_16->initgain_backup.xbagccore1);
    FUNC_4(VAR_14, VAR_12, VAR_17, (u32)VAR_16->initgain_backup.xcagccore1);
    FUNC_4(VAR_14, VAR_13, VAR_17, (u32)VAR_16->initgain_backup.xdagccore1);
    VAR_17 = VAR_7;
    FUNC_4(VAR_14, VAR_9, VAR_17, (u32)VAR_16->initgain_backup.cca);

   FUNC_0(VAR_0, "Scan BBInitialGainRestore 0xc50 is %x\n",VAR_16->initgain_backup.xaagccore1);
   FUNC_0(VAR_0, "Scan BBInitialGainRestore 0xc58 is %x\n",VAR_16->initgain_backup.xbagccore1);
   FUNC_0(VAR_0, "Scan BBInitialGainRestore 0xc60 is %x\n",VAR_16->initgain_backup.xcagccore1);
   FUNC_0(VAR_0, "Scan BBInitialGainRestore 0xc68 is %x\n",VAR_16->initgain_backup.xdagccore1);
   FUNC_0(VAR_0, "Scan BBInitialGainRestore 0xa0a is %x\n",VAR_16->initgain_backup.cca);

    FUNC_3(VAR_14,VAR_16->ieee80211->current_network.channel);


    if(VAR_8.dig_algorithm == VAR_1)
     FUNC_4(VAR_14, VAR_4, VAR_6, 0x1);
    break;
   default:
   FUNC_0(VAR_0, "Unknown IG Operation. \n");
    break;
  }
 }
}
