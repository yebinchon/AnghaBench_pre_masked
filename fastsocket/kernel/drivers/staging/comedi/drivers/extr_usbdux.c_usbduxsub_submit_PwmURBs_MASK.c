
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbduxsub {TYPE_1__* interface; TYPE_2__* urbPwm; int comedidev; int sizePwmBuf; int usbdev; } ;
struct TYPE_5__ {int transfer_buffer; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct usbduxsub *VAR_4)
{
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->interface->dev, "comedi_: submitting pwm-urb\n");


 FUNC_2(VAR_4->urbPwm,
     VAR_4->usbdev,
     FUNC_3(VAR_4->usbdev, VAR_2),
     VAR_4->urbPwm->transfer_buffer,
     VAR_4->sizePwmBuf, VAR_3,
     VAR_4->comedidev);

 VAR_5 = FUNC_4(VAR_4->urbPwm, VAR_1);
 if (VAR_5) {
  FUNC_1(&VAR_4->interface->dev,
   "comedi_: usbdux: pwm: usb_submit_urb error %d\n",
   VAR_5);
  return VAR_5;
 }
 return 0;
}
