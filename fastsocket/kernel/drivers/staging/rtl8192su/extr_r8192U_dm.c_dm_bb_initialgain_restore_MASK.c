
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ cca; scalar_t__ xdagccore1; scalar_t__ xcagccore1; scalar_t__ xbagccore1; scalar_t__ xaagccore1; } ;
struct r8192_priv {TYPE_1__ initgain_backup; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ dig_algorithm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct net_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_11)
{
 struct r8192_priv *VAR_12 = FUNC_1(VAR_11);
 u32 VAR_13 = 0x7f;

 if(VAR_5.dig_algorithm == VAR_1)
  return;



 FUNC_2(VAR_11, VAR_2, VAR_3, 0x8);
 FUNC_2(VAR_11, VAR_7, VAR_13, (u32)VAR_12->initgain_backup.xaagccore1);
 FUNC_2(VAR_11, VAR_8, VAR_13, (u32)VAR_12->initgain_backup.xbagccore1);
 FUNC_2(VAR_11, VAR_9, VAR_13, (u32)VAR_12->initgain_backup.xcagccore1);
 FUNC_2(VAR_11, VAR_10, VAR_13, (u32)VAR_12->initgain_backup.xdagccore1);
 VAR_13 = VAR_4;
 FUNC_2(VAR_11, VAR_6, VAR_13, (u32)VAR_12->initgain_backup.cca);

 FUNC_0(VAR_0, "dm_BBInitialGainRestore 0xc50 is %x\n",VAR_12->initgain_backup.xaagccore1);
 FUNC_0(VAR_0, "dm_BBInitialGainRestore 0xc58 is %x\n",VAR_12->initgain_backup.xbagccore1);
 FUNC_0(VAR_0, "dm_BBInitialGainRestore 0xc60 is %x\n",VAR_12->initgain_backup.xcagccore1);
 FUNC_0(VAR_0, "dm_BBInitialGainRestore 0xc68 is %x\n",VAR_12->initgain_backup.xdagccore1);
 FUNC_0(VAR_0, "dm_BBInitialGainRestore 0xa0a is %x\n",VAR_12->initgain_backup.cca);


 FUNC_2(VAR_11, VAR_2, VAR_3, 0x1);

}
