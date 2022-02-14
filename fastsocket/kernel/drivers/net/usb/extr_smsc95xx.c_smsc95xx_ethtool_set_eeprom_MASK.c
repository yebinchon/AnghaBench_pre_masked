
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; int offset; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,char*,int ) ;
 struct usbnet* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
           struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 struct usbnet *VAR_5 = FUNC_1(VAR_2);

 if (VAR_3->magic != VAR_1) {
  FUNC_0(VAR_5, "EEPROM: magic value mismatch, magic = 0x%x",
   VAR_3->magic);
  return -VAR_0;
 }

 return FUNC_2(VAR_5, VAR_3->offset, VAR_3->len, VAR_4);
}
