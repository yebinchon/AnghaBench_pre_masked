
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int data; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int eedump_len; int version; int driver; } ;
struct asix_data {int eeprom_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct net_device*,struct ethtool_drvinfo*) ;

__attribute__((used)) static void FUNC_3 (struct net_device *VAR_2,
     struct ethtool_drvinfo *VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(VAR_2);
 struct asix_data *VAR_5 = (struct asix_data *)&VAR_4->data;


 FUNC_2(VAR_2, VAR_3);
 FUNC_1 (VAR_3->driver, VAR_1, sizeof VAR_3->driver);
 FUNC_1 (VAR_3->version, VAR_0, sizeof VAR_3->version);
 VAR_3->eedump_len = VAR_5->eeprom_len;
}
