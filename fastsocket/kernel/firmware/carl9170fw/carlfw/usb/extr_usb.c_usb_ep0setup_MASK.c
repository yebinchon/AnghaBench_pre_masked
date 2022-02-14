
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ctrlrequest {int bRequestType; } ;
typedef int ctrl ;
struct TYPE_3__ {int ep0_action; } ;
struct TYPE_4__ {TYPE_1__ usb; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 TYPE_2__ VAR_3 ;
 int FUNC_0 (struct usb_ctrlrequest*) ;
 int FUNC_1 (struct usb_ctrlrequest*,int) ;
 int FUNC_2 (struct usb_ctrlrequest*) ;
 int FUNC_3 (struct usb_ctrlrequest*) ;

void FUNC_4(void)
{
 struct usb_ctrlrequest VAR_4;
 int VAR_5 = -1;
 FUNC_1(&VAR_4, sizeof(VAR_4));

 switch (VAR_4.bRequestType & VAR_2) {
 case 129:
  VAR_5 = FUNC_2(&VAR_4);
  break;

 case 130:
  VAR_5 = FUNC_0(&VAR_4);
  break;

 case 128:
  VAR_5 = FUNC_3(&VAR_4);
  break;

 default:
  break;

 }

 if (VAR_5 < 0)
  VAR_3.usb.ep0_action |= VAR_0;




}
