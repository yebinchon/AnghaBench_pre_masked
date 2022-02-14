
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {unsigned int pipe; int transfer_flags; unsigned char* transfer_buffer; int transfer_buffer_length; int interval; int complete; struct hci_dev* context; int dev; } ;
struct hci_dev {int name; struct btusb_data* driver_data; } ;
struct btusb_data {int isoc_anchor; TYPE_1__* isoc_rx_ep; int udev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct urb*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct urb*,int,int) ;
 int VAR_5 ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 struct urb* FUNC_5 (int,int ) ;
 int FUNC_6 (struct urb*,int *) ;
 int FUNC_7 (struct urb*) ;
 unsigned int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static int FUNC_11(struct hci_dev *VAR_6, gfp_t VAR_7)
{
 struct btusb_data *VAR_8 = VAR_6->driver_data;
 struct urb *VAR_9;
 unsigned char *VAR_10;
 unsigned int VAR_11;
 int VAR_12, VAR_13;

 FUNC_0("%s", VAR_6->name);

 if (!VAR_8->isoc_rx_ep)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_0, VAR_7);
 if (!VAR_9)
  return -VAR_2;

 VAR_13 = FUNC_4(VAR_8->isoc_rx_ep->wMaxPacketSize) *
      VAR_0;

 VAR_10 = FUNC_3(VAR_13, VAR_7);
 if (!VAR_10) {
  FUNC_7(VAR_9);
  return -VAR_2;
 }

 VAR_11 = FUNC_8(VAR_8->udev, VAR_8->isoc_rx_ep->bEndpointAddress);

 VAR_9->dev = VAR_8->udev;
 VAR_9->pipe = VAR_11;
 VAR_9->context = VAR_6;
 VAR_9->complete = VAR_5;
 VAR_9->interval = VAR_8->isoc_rx_ep->bInterval;

 VAR_9->transfer_flags = VAR_3 | VAR_4;
 VAR_9->transfer_buffer = VAR_10;
 VAR_9->transfer_buffer_length = VAR_13;

 FUNC_2(VAR_9, VAR_13,
   FUNC_4(VAR_8->isoc_rx_ep->wMaxPacketSize));

 FUNC_6(VAR_9, &VAR_8->isoc_anchor);

 VAR_12 = FUNC_9(VAR_9, VAR_7);
 if (VAR_12 < 0) {
  FUNC_1("%s urb %p submission failed (%d)",
      VAR_6->name, VAR_9, -VAR_12);
  FUNC_10(VAR_9);
 }

 FUNC_7(VAR_9);

 return VAR_12;
}
