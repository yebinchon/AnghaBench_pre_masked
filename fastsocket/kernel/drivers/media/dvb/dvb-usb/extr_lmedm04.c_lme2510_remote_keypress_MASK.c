
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_usb_device {int rc_dev; } ;
struct dvb_usb_adapter {struct dvb_usb_device* dev; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_0, u16 VAR_1)
{
 struct dvb_usb_device *VAR_2 = VAR_0->dev;

 FUNC_0(1, "INT Key Keypress =%04x", VAR_1);

 if (VAR_1 > 0)
  FUNC_1(VAR_2->rc_dev, VAR_1, 0);

 return 0;
}
