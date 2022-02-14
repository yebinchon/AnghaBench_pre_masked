
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct niu {scalar_t__ eeprom_len; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,...) ;
 struct niu* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
     struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct niu *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_2->offset;
 VAR_6 = VAR_2->len;

 if (VAR_5 + VAR_6 < VAR_5)
  return -VAR_0;
 if (VAR_5 >= VAR_4->eeprom_len)
  return -VAR_0;
 if (VAR_5 + VAR_6 > VAR_4->eeprom_len)
  VAR_6 = VAR_2->len = VAR_4->eeprom_len - VAR_5;

 if (VAR_5 & 3) {
  u32 VAR_8, VAR_9;

  VAR_8 = VAR_5 & 3;
  VAR_9 = 4 - VAR_8;
  if (VAR_9 > VAR_6)
   VAR_9 = VAR_6;

  VAR_7 = FUNC_3(FUNC_0((VAR_5 - VAR_8) / 4));
  FUNC_1(VAR_3, ((char *)&VAR_7) + VAR_8, VAR_9);
  VAR_3 += VAR_9;
  VAR_6 -= VAR_9;
  VAR_5 += VAR_9;
 }
 while (VAR_6 >= 4) {
  VAR_7 = FUNC_3(FUNC_0(VAR_5 / 4));
  FUNC_1(VAR_3, &VAR_7, 4);
  VAR_3 += 4;
  VAR_6 -= 4;
  VAR_5 += 4;
 }
 if (VAR_6) {
  VAR_7 = FUNC_3(FUNC_0(VAR_5 / 4));
  FUNC_1(VAR_3, &VAR_7, VAR_6);
 }
 return 0;
}
