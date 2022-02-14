
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nic {scalar_t__ eeprom; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ magic; size_t offset; int len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nic*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 struct nic* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
 struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 struct nic *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3->magic != VAR_0)
  return -VAR_1;

 FUNC_1(&((u8 *)VAR_5->eeprom)[VAR_3->offset], VAR_4, VAR_3->len);

 return FUNC_0(VAR_5, VAR_3->offset >> 1,
  (VAR_3->len >> 1) + 1);
}
