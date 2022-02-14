
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct hci_dev {int name; struct btusb_data* driver_data; } ;
struct btusb_data {int isoc_altsetting; struct usb_endpoint_descriptor* isoc_rx_ep; struct usb_endpoint_descriptor* isoc_tx_ep; int udev; struct usb_interface* isoc; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_2 (struct usb_endpoint_descriptor*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int inline FUNC_4(struct hci_dev *VAR_1, int VAR_2)
{
 struct btusb_data *VAR_3 = VAR_1->driver_data;
 struct usb_interface *VAR_4 = VAR_3->isoc;
 struct usb_endpoint_descriptor *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_3->isoc)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3->udev, 1, VAR_2);
 if (VAR_7 < 0) {
  FUNC_0("%s setting interface failed (%d)", VAR_1->name, -VAR_7);
  return VAR_7;
 }

 VAR_3->isoc_altsetting = VAR_2;

 VAR_3->isoc_tx_ep = ((void*)0);
 VAR_3->isoc_rx_ep = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_4->cur_altsetting->desc.bNumEndpoints; VAR_6++) {
  VAR_5 = &VAR_4->cur_altsetting->endpoint[VAR_6].desc;

  if (!VAR_3->isoc_tx_ep && FUNC_2(VAR_5)) {
   VAR_3->isoc_tx_ep = VAR_5;
   continue;
  }

  if (!VAR_3->isoc_rx_ep && FUNC_1(VAR_5)) {
   VAR_3->isoc_rx_ep = VAR_5;
   continue;
  }
 }

 if (!VAR_3->isoc_tx_ep || !VAR_3->isoc_rx_ep) {
  FUNC_0("%s invalid SCO descriptors", VAR_1->name);
  return -VAR_0;
 }

 return 0;
}
