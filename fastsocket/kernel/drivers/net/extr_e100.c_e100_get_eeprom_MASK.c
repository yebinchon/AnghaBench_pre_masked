
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nic {scalar_t__ eeprom; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {size_t offset; int len; int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 struct nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
 struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct nic *VAR_4 = FUNC_1(VAR_1);

 VAR_2->magic = VAR_0;
 FUNC_0(VAR_3, &((u8 *)VAR_4->eeprom)[VAR_2->offset], VAR_2->len);

 return 0;
}
