
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int bInterval; } ;
struct us_data {scalar_t__ protocol; int ep_bInterval; int pusb_dev; int recv_intr_pipe; int recv_bulk_pipe; int send_bulk_pipe; int recv_ctrl_pipe; int send_ctrl_pipe; TYPE_1__* pusb_intf; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_4__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;
 int FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct us_data *VAR_2)
{
 struct usb_host_interface *VAR_3 =
  VAR_2->pusb_intf->cur_altsetting;
 int VAR_4;
 struct usb_endpoint_descriptor *VAR_5;
 struct usb_endpoint_descriptor *VAR_6 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_7 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_8 = ((void*)0);







 for (VAR_4 = 0; VAR_4 < VAR_3->desc.bNumEndpoints; VAR_4++) {
  VAR_5 = &VAR_3->endpoint[VAR_4].desc;

  if (FUNC_4(VAR_5)) {
   if (FUNC_1(VAR_5)) {
    if (!VAR_6)
     VAR_6 = VAR_5;
   } else {
    if (!VAR_7)
     VAR_7 = VAR_5;
   }
  }

  else if (FUNC_2(VAR_5)) {
   if (!VAR_8)
    VAR_8 = VAR_5;
  }
 }

 if (!VAR_6 || !VAR_7 || (VAR_2->protocol == VAR_1 && !VAR_8)) {
  FUNC_0("Endpoint sanity check failed! Rejecting dev.\n");
  return -VAR_0;
 }


 VAR_2->send_ctrl_pipe = FUNC_9(VAR_2->pusb_dev, 0);
 VAR_2->recv_ctrl_pipe = FUNC_6(VAR_2->pusb_dev, 0);
 VAR_2->send_bulk_pipe = FUNC_8(VAR_2->pusb_dev,
  FUNC_3(VAR_7));
 VAR_2->recv_bulk_pipe = FUNC_5(VAR_2->pusb_dev,
  FUNC_3(VAR_6));
 if (VAR_8) {
  VAR_2->recv_intr_pipe = FUNC_7(VAR_2->pusb_dev,
   FUNC_3(VAR_8));
  VAR_2->ep_bInterval = VAR_8->bInterval;
 }
 return 0;
}
