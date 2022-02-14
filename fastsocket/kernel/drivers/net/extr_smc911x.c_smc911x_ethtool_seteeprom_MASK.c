
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
            struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7;


 if ((VAR_7=FUNC_1(VAR_3, VAR_1, 0 ))!=0)
  return VAR_7;
 for(VAR_6=VAR_4->offset;VAR_6<(VAR_4->offset+VAR_4->len);VAR_6++) {

  if ((VAR_7=FUNC_1(VAR_3, VAR_0, VAR_6 ))!=0)
   return VAR_7;

  if ((VAR_7=FUNC_0(VAR_3, *VAR_5))!=0)
    return VAR_7;
  if ((VAR_7=FUNC_1(VAR_3, VAR_2, VAR_6 ))!=0)
   return VAR_7;
  }
  return 0;
}
