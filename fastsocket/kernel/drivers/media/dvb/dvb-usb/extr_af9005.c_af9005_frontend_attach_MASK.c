
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct dvb_usb_adapter {TYPE_1__* dev; int fe; } ;
struct TYPE_3__ {struct usb_device* udev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int *,int) ;
 int FUNC_2 (int *,int,int (*) (char*,int)) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_1)
{
 u8 VAR_2[8];
 int VAR_3;





 struct usb_device *VAR_4 = VAR_1->dev->udev;
 FUNC_4(VAR_4, FUNC_6(VAR_4, 2));
 FUNC_4(VAR_4, FUNC_5(VAR_4, 1));
 if (VAR_0) {
  FUNC_3("EEPROM DUMP\n");
  for (VAR_3 = 0; VAR_3 < 255; VAR_3 += 8) {
   FUNC_1(VAR_1->dev, VAR_3, VAR_2, 8);
   FUNC_3("ADDR %x ", VAR_3);
   FUNC_2(VAR_2, 8, FUNC_3);
  }
 }
 VAR_1->fe = FUNC_0(VAR_1->dev);
 return 0;
}
