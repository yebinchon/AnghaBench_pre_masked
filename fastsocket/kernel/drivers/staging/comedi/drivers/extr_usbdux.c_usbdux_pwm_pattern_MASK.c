
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbduxsub {int sizePwmBuf; TYPE_1__* urbPwm; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsub* private; } ;
struct TYPE_2__ {scalar_t__ transfer_buffer; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2, int VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 struct usbduxsub *VAR_6 = VAR_1->private;
 int VAR_7, VAR_8;
 char *VAR_9;
 char VAR_10;
 char VAR_11;
 char VAR_12;

 if (!VAR_6)
  return -VAR_0;


 VAR_10 = (1 << VAR_3);

 VAR_11 = (16 << VAR_3);


 VAR_8 = VAR_6->sizePwmBuf;
 VAR_9 = (char *)(VAR_6->urbPwm->transfer_buffer);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_12 = *VAR_9;

  VAR_12 = VAR_12 & (~VAR_10);

  if (VAR_7 < VAR_4)
   VAR_12 = VAR_12 | VAR_10;

  if (!VAR_5) {

   VAR_12 = VAR_12 & (~VAR_11);
  } else {

   VAR_12 = VAR_12 | VAR_11;
  }
  *(VAR_9++) = VAR_12;
 }
 return 1;
}
