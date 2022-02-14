
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; int offset; int magic; } ;


 int VAR_0 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
           struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(VAR_1);

 VAR_2->magic = VAR_0;

 return FUNC_1(VAR_4, VAR_2->offset, VAR_2->len, VAR_3);
}
