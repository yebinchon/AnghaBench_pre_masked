
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int dev; int fe; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_0)
{
 VAR_0->fe = FUNC_0(VAR_0->dev);
 return 0;
}
