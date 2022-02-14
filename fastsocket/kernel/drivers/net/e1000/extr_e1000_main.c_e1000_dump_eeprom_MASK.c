
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int * u16 ;
struct net_device {struct ethtool_ops* ethtool_ops; } ;
struct ethtool_ops {int (* get_eeprom ) (struct net_device*,struct ethtool_eeprom*,int*) ;int (* get_eeprom_len ) (struct net_device*) ;} ;
struct ethtool_eeprom {int len; scalar_t__ offset; } ;
struct e1000_adapter {struct net_device* netdev; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int ,int,int,int*,int,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct ethtool_eeprom*,int*) ;

__attribute__((used)) static void FUNC_6(struct e1000_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 struct ethtool_eeprom VAR_7;
 const struct ethtool_ops *VAR_8 = VAR_6->ethtool_ops;
 u8 *VAR_9;
 int VAR_10;
 u16 VAR_11, VAR_12 = 0;

 VAR_7.len = VAR_8->get_eeprom_len(VAR_6);
 VAR_7.offset = 0;

 VAR_9 = FUNC_1(VAR_7.len, VAR_3);
 if (!VAR_9)
  return;

 VAR_8->get_eeprom(VAR_6, &VAR_7, VAR_9);

 VAR_11 = (VAR_9[VAR_1 * 2]) +
     (VAR_9[VAR_1 * 2 + 1] << 8);
 for (VAR_10 = 0; VAR_10 < VAR_1 * 2; VAR_10 += 2)
  VAR_12 += VAR_9[VAR_10] + (VAR_9[VAR_10 + 1] << 8);
 VAR_12 = VAR_2 - VAR_12;

 FUNC_2("/*********************/\n");
 FUNC_2("Current EEPROM Checksum : 0x%04x\n", VAR_11);
 FUNC_2("Calculated              : 0x%04x\n", VAR_12);

 FUNC_2("Offset    Values\n");
 FUNC_2("========  ======\n");
 FUNC_3(VAR_4, "", VAR_0, 16, 1, VAR_9, 128, 0);

 FUNC_2("Include this output when contacting your support provider.\n");
 FUNC_2("This is not a software error! Something bad happened to\n");
 FUNC_2("your hardware or EEPROM image. Ignoring this problem could\n");
 FUNC_2("result in further problems, possibly loss of data,\n");
 FUNC_2("corruption or system hangs!\n");
 FUNC_2("The MAC Address will be reset to 00:00:00:00:00:00,\n");
 FUNC_2("which is invalid and requires you to set the proper MAC\n");
 FUNC_2("address manually before continuing to enable this network\n");
 FUNC_2("device. Please inspect the EEPROM dump and report the\n");
 FUNC_2("issue to your hardware vendor or Intel Customer Support.\n");
 FUNC_2("/*********************/\n");

 FUNC_0(VAR_9);
}
