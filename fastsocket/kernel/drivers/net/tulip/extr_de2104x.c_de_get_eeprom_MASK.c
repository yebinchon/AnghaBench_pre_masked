
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ magic; int len; } ;
struct de_private {int ee_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 struct de_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
    struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 struct de_private *VAR_6 = FUNC_1(VAR_3);

 if (!VAR_6->ee_data)
  return -VAR_2;
 if ((VAR_4->offset != 0) || (VAR_4->magic != 0) ||
     (VAR_4->len != VAR_0))
  return -VAR_1;
 FUNC_0(VAR_5, VAR_6->ee_data, VAR_4->len);

 return 0;
}
