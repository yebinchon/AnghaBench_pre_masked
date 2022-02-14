
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_onetouch {int is_open; TYPE_1__* irq; int udev; } ;
struct input_dev {int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct usb_onetouch* FUNC_1 (struct input_dev*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_2)
{
 struct usb_onetouch *VAR_3 = FUNC_1(VAR_2);

 VAR_3->is_open = 1;
 VAR_3->irq->dev = VAR_3->udev;
 if (FUNC_2(VAR_3->irq, VAR_1)) {
  FUNC_0(&VAR_2->dev, "usb_submit_urb failed\n");
  return -VAR_0;
 }

 return 0;
}
