
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_2__* udev; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,int ,int,int ,int *,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct dvb_usb_device *VAR_3)
{
 u8 VAR_4;
 int VAR_5 = FUNC_2(VAR_3->udev->descriptor.idProduct);

 if (FUNC_1(VAR_3, VAR_0, 0, 0, &VAR_4, 1))
  return -VAR_1;

 if (FUNC_1(VAR_3, VAR_0, 1, 0, &VAR_4, 1))
  return -VAR_1;

 if (VAR_5 == VAR_2)
  if (FUNC_0(VAR_3))
   return -VAR_1;
 return 0;
}
