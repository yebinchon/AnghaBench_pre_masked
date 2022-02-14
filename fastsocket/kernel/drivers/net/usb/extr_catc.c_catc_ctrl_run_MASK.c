
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; void* wLength; void* wIndex; void* wValue; int bRequest; } ;
struct urb {struct usb_device* dev; void* setup_packet; int transfer_buffer; scalar_t__ transfer_buffer_length; int pipe; } ;
struct ctrl_queue {int dir; scalar_t__ len; scalar_t__ buf; scalar_t__ index; scalar_t__ value; int request; } ;
struct catc {int ctrl_tail; struct urb* ctrl_urb; int ctrl_buf; struct usb_ctrlrequest ctrl_dr; struct usb_device* usbdev; struct ctrl_queue* ctrl_queue; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_6(struct catc *VAR_1)
{
 struct ctrl_queue *VAR_2 = VAR_1->ctrl_queue + VAR_1->ctrl_tail;
 struct usb_device *VAR_3 = VAR_1->usbdev;
 struct urb *VAR_4 = VAR_1->ctrl_urb;
 struct usb_ctrlrequest *VAR_5 = &VAR_1->ctrl_dr;
 int VAR_6;

 VAR_5->bRequest = VAR_2->request;
 VAR_5->bRequestType = 0x40 | VAR_2->dir;
 VAR_5->wValue = FUNC_0(VAR_2->value);
 VAR_5->wIndex = FUNC_0(VAR_2->index);
 VAR_5->wLength = FUNC_0(VAR_2->len);

        VAR_4->pipe = VAR_2->dir ? FUNC_3(VAR_3, 0) : FUNC_4(VAR_3, 0);
 VAR_4->transfer_buffer_length = VAR_2->len;
 VAR_4->transfer_buffer = VAR_1->ctrl_buf;
 VAR_4->setup_packet = (void *) VAR_5;
 VAR_4->dev = VAR_3;

 if (!VAR_2->dir && VAR_2->buf && VAR_2->len)
  FUNC_2(VAR_1->ctrl_buf, VAR_2->buf, VAR_2->len);

 if ((VAR_6 = FUNC_5(VAR_1->ctrl_urb, VAR_0)))
  FUNC_1("submit(ctrl_urb) status %d", VAR_6);
}
