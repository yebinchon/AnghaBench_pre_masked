
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ipw_priv {int mutex; int * eeprom; } ;
struct ethtool_eeprom {size_t offset; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipw_priv*,scalar_t__,int ) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
      struct ethtool_eeprom *VAR_4, u8 * VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_4->offset + VAR_4->len > VAR_2)
  return -VAR_0;
 FUNC_3(&VAR_6->mutex);
 FUNC_2(&VAR_6->eeprom[VAR_4->offset], VAR_5, VAR_4->len);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  FUNC_0(VAR_6, VAR_7 + VAR_1, VAR_6->eeprom[VAR_7]);
 FUNC_4(&VAR_6->mutex);
 return 0;
}
