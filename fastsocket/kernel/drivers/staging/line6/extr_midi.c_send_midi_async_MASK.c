
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_line6_pod {int dummy; } ;
struct usb_line6 {TYPE_3__* usbdev; TYPE_1__* line6midi; int ifcdev; int interval; int ep_control_write; } ;
struct urb {scalar_t__ actual_length; } ;
struct TYPE_6__ {int idProduct; } ;
struct TYPE_7__ {TYPE_2__ descriptor; } ;
struct TYPE_5__ {int num_active_send_urbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_line6*,char,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct usb_line6_pod*,unsigned char*,int) ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,TYPE_3__*,int ,unsigned char*,int,int ,struct usb_line6*,int ) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_line6 *VAR_5, unsigned char *VAR_6,
      int VAR_7)
{
 struct urb *VAR_8;
 int VAR_9;
 unsigned char *VAR_10;

 VAR_8 = FUNC_5(0, VAR_2);

 if (VAR_8 == 0) {
  FUNC_0(VAR_5->ifcdev, "Out of memory\n");
  return -VAR_1;
 }





 VAR_10 = FUNC_1(VAR_7, VAR_2);

 if (VAR_10 == 0) {
  FUNC_7(VAR_8);
  FUNC_0(VAR_5->ifcdev, "Out of memory\n");
  return -VAR_1;
 }

 FUNC_3(VAR_10, VAR_6, VAR_7);
 FUNC_6(VAR_8, VAR_5->usbdev,
    FUNC_8(VAR_5->usbdev,
      VAR_5->ep_control_write),
    VAR_10, VAR_7, VAR_4, VAR_5,
    VAR_5->interval);
 VAR_8->actual_length = 0;
 VAR_9 = FUNC_9(VAR_8, VAR_2);

 if (VAR_9 < 0) {
  FUNC_0(VAR_5->ifcdev, "usb_submit_urb failed\n");
  FUNC_7(VAR_8);
  return -VAR_0;
 }

 ++VAR_5->line6midi->num_active_send_urbs;

 switch (VAR_5->usbdev->descriptor.idProduct) {
 case 134:
 case 133:
 case 132:
 case 130:
 case 129:
 case 128:
 case 131:
  FUNC_4((struct usb_line6_pod *)VAR_5, VAR_6,
         VAR_7);
  break;

 default:
  VAR_3;
 }

 return 0;
}
