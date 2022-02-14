
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_3__ {void* cca; void* xdagccore1; void* xcagccore1; void* xbagccore1; void* xaagccore1; } ;
struct r8192_priv {TYPE_1__ initgain_backup; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ dig_algorithm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct net_device*,int ,int ) ;
 int FUNC_3 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_12)
{
 struct r8192_priv *VAR_13 = FUNC_1(VAR_12);
 u32 VAR_14 = VAR_3;

 if(VAR_6.dig_algorithm == VAR_1)
  return;


 FUNC_3(VAR_12, VAR_2, VAR_4, 0x8);
 VAR_13->initgain_backup.xaagccore1 = (u8)FUNC_2(VAR_12, VAR_8, VAR_14);
 VAR_13->initgain_backup.xbagccore1 = (u8)FUNC_2(VAR_12, VAR_9, VAR_14);
 VAR_13->initgain_backup.xcagccore1 = (u8)FUNC_2(VAR_12, VAR_10, VAR_14);
 VAR_13->initgain_backup.xdagccore1 = (u8)FUNC_2(VAR_12, VAR_11, VAR_14);
 VAR_14 = VAR_5;
 VAR_13->initgain_backup.cca = (u8)FUNC_2(VAR_12, VAR_7, VAR_14);

 FUNC_0(VAR_0, "BBInitialGainBackup 0xc50 is %x\n",VAR_13->initgain_backup.xaagccore1);
 FUNC_0(VAR_0, "BBInitialGainBackup 0xc58 is %x\n",VAR_13->initgain_backup.xbagccore1);
 FUNC_0(VAR_0, "BBInitialGainBackup 0xc60 is %x\n",VAR_13->initgain_backup.xcagccore1);
 FUNC_0(VAR_0, "BBInitialGainBackup 0xc68 is %x\n",VAR_13->initgain_backup.xdagccore1);
 FUNC_0(VAR_0, "BBInitialGainBackup 0xa0a is %x\n",VAR_13->initgain_backup.cca);

}
