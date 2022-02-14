
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int eeprom_len; } ;
struct net_device {int dummy; } ;


 struct niu* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct niu *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->eeprom_len;
}
