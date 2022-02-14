
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct usbnet*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct usbnet*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_2)
{

 if (FUNC_4(VAR_2, VAR_0, VAR_1,
   VAR_2->net->dev_addr) == 0) {
  if (FUNC_1(VAR_2->net->dev_addr)) {

   if (FUNC_2(VAR_2))
    FUNC_0(VAR_2, "MAC address read from EEPROM");
   return;
  }
 }


 FUNC_3(VAR_2->net->dev_addr);
 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2, "MAC address set to random_ether_addr");
}
