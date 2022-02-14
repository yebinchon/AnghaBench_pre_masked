
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct hci_dev {int name; struct btusb_data* driver_data; } ;
struct btusb_data {int intr_anchor; TYPE_1__* intr_ep; int udev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bInterval; int bEndpointAddress; int wMaxPacketSize; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct urb*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*,int *) ;
 int FUNC_6 (struct urb*,int ,unsigned int,unsigned char*,int,int ,struct hci_dev*,int ) ;
 int FUNC_7 (struct urb*) ;
 unsigned int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static int FUNC_11(struct hci_dev *VAR_4, gfp_t VAR_5)
{
 struct btusb_data *VAR_6 = VAR_4->driver_data;
 struct urb *VAR_7;
 unsigned char *VAR_8;
 unsigned int VAR_9;
 int VAR_10, VAR_11;

 FUNC_0("%s", VAR_4->name);

 if (!VAR_6->intr_ep)
  return -VAR_0;

 VAR_7 = FUNC_4(0, VAR_5);
 if (!VAR_7)
  return -VAR_1;

 VAR_11 = FUNC_3(VAR_6->intr_ep->wMaxPacketSize);

 VAR_8 = FUNC_2(VAR_11, VAR_5);
 if (!VAR_8) {
  FUNC_7(VAR_7);
  return -VAR_1;
 }

 VAR_9 = FUNC_8(VAR_6->udev, VAR_6->intr_ep->bEndpointAddress);

 FUNC_6(VAR_7, VAR_6->udev, VAR_9, VAR_8, VAR_11,
      VAR_3, VAR_4,
      VAR_6->intr_ep->bInterval);

 VAR_7->transfer_flags |= VAR_2;

 FUNC_5(VAR_7, &VAR_6->intr_anchor);

 VAR_10 = FUNC_9(VAR_7, VAR_5);
 if (VAR_10 < 0) {
  FUNC_1("%s urb %p submission failed (%d)",
      VAR_4->name, VAR_7, -VAR_10);
  FUNC_10(VAR_7);
 }

 FUNC_7(VAR_7);

 return VAR_10;
}
