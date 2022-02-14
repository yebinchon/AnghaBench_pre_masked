
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;
struct ethtool_eeprom {int offset; int len; int magic; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*,int) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1,
  struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct jme_adapter *VAR_4 = FUNC_1(VAR_1);
 int VAR_5, VAR_6 = VAR_2->offset, VAR_7 = VAR_2->len;




 VAR_2->magic = VAR_0;
 for (VAR_5 = 0 ; VAR_5 < VAR_7 ; ++VAR_5)
  VAR_3[VAR_5] = FUNC_0(VAR_4, VAR_5 + VAR_6);

 return 0;
}
