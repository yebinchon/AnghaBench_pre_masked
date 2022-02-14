
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_usbvision {int ctl_input; size_t dev_model; int video_inputs; } ;
struct TYPE_2__ {int codec; } ;




 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_usbvision*,int ,int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (struct usb_usbvision*,int) ;
 int VAR_8 ;

int FUNC_3(struct usb_usbvision *VAR_9, int VAR_10)
{


 int VAR_11[4] = { VAR_0, 0, 0, VAR_3 };
 int VAR_12[] = { 1, 0, 0, 0 };





 FUNC_0(VAR_10, 0, VAR_9->video_inputs);
 VAR_9->ctl_input = VAR_10;





 switch (VAR_7[VAR_9->dev_model].codec) {
 case 128:
  VAR_11[1] = VAR_2;
  if (VAR_6) {



   VAR_11[2] = VAR_1;
  } else {
   VAR_11[2] = VAR_4;
  }
  break;
 case 129:
 default:

  VAR_11[1] = VAR_1;
  VAR_11[2] = VAR_4;
  break;
 }
 FUNC_1(VAR_9, VAR_8, VAR_5, VAR_11[VAR_10], 0, 0);
 FUNC_2(VAR_9, VAR_12[VAR_10]);
 return 0;
}
