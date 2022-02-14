
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct usb_ctrlrequest {void* wLength; void* wIndex; void* wValue; int bRequest; int bRequestType; } ;
struct moschip_port {unsigned char* ctrl_buf; TYPE_3__* control_urb; struct usb_ctrlrequest* dr; TYPE_2__* port; } ;
typedef int __u16 ;
struct TYPE_7__ {int transfer_buffer_length; } ;
struct TYPE_6__ {TYPE_1__* serial; } ;
struct TYPE_5__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,struct usb_device*,int ,unsigned char*,unsigned char*,int,int ,struct moschip_port*) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_4(struct moschip_port *VAR_4, __u16 VAR_5, __u16 VAR_6,
      __u16 *VAR_7)
{
 struct usb_device *VAR_8 = VAR_4->port->serial->dev;
 struct usb_ctrlrequest *VAR_9 = VAR_4->dr;
 unsigned char *VAR_10 = VAR_4->ctrl_buf;
 int VAR_11;

 VAR_9->bRequestType = VAR_2;
 VAR_9->bRequest = VAR_1;
 VAR_9->wValue = FUNC_0(VAR_5);
 VAR_9->wIndex = FUNC_0(VAR_6);
 VAR_9->wLength = FUNC_0(2);

 FUNC_1(VAR_4->control_urb, VAR_8, FUNC_2(VAR_8, 0),
        (unsigned char *)VAR_9, VAR_10, 2,
        VAR_3, VAR_4);
 VAR_4->control_urb->transfer_buffer_length = 2;
 VAR_11 = FUNC_3(VAR_4->control_urb, VAR_0);
 return VAR_11;
}
