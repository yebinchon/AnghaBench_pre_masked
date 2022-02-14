
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* adapter; int generic_bulk_ctrl_endpoint; } ;
struct dvb_usb_device {int i2c_adap; TYPE_3__ props; int udev; } ;
struct dvb_usb_adapter {int * fe; struct dvb_usb_device* dev; } ;
struct TYPE_4__ {int endpoint; } ;
struct TYPE_5__ {TYPE_1__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int,int) ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_adapter *VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_3->dev;


 if (FUNC_6(VAR_4->udev, 0, 0) < 0)
  FUNC_2("set interface failed");


 FUNC_4(VAR_4->udev,
  FUNC_7(VAR_4->udev, VAR_4->props.generic_bulk_ctrl_endpoint));
 FUNC_4(VAR_4->udev,
  FUNC_5(VAR_4->udev, VAR_4->props.generic_bulk_ctrl_endpoint));
 FUNC_4(VAR_4->udev,
  FUNC_5(VAR_4->udev, VAR_4->props.adapter[0].stream.endpoint));



 if (FUNC_0(VAR_4, 0x07, 0) < 0) {
  FUNC_2("clear tuner gpio failed");
  return -VAR_0;
 }
 FUNC_3(100);
 if (FUNC_0(VAR_4, 0x07, 1) < 0) {
  FUNC_2("set tuner gpio failed");
  return -VAR_0;
 }
 FUNC_3(100);


 VAR_3->fe = FUNC_1(VAR_1, &VAR_2,
  &VAR_4->i2c_adap);
 if (VAR_3->fe == ((void*)0))
  return -VAR_0;

 return 0;
}
