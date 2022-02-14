
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int data; } ;
struct net_device {int dummy; } ;
struct asix_data {int eeprom_len; } ;


 struct usbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_0(VAR_0);
 struct asix_data *VAR_2 = (struct asix_data *)&VAR_1->data;

 return VAR_2->eeprom_len;
}
