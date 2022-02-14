
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_flags; } ;
struct hci_dev {int name; struct btusb_data* driver_data; } ;
struct btusb_data {int bulk_anchor; int udev; TYPE_1__* bulk_rx_ep; } ;
typedef int gfp_t ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct urb*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_2 (int,int ) ;
 struct urb* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*,int ,unsigned int,unsigned char*,int,int ,struct hci_dev*) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;
 int FUNC_10 (struct urb*) ;

__attribute__((used)) static int FUNC_11(struct hci_dev *VAR_5, gfp_t VAR_6)
{
 struct btusb_data *VAR_7 = VAR_5->driver_data;
 struct urb *VAR_8;
 unsigned char *VAR_9;
 unsigned int VAR_10;
 int VAR_11, VAR_12 = VAR_2;

 FUNC_0("%s", VAR_5->name);

 if (!VAR_7->bulk_rx_ep)
  return -VAR_0;

 VAR_8 = FUNC_3(0, VAR_6);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_12, VAR_6);
 if (!VAR_9) {
  FUNC_6(VAR_8);
  return -VAR_1;
 }

 VAR_10 = FUNC_8(VAR_7->udev, VAR_7->bulk_rx_ep->bEndpointAddress);

 FUNC_5(VAR_8, VAR_7->udev, VAR_10,
     VAR_9, VAR_12, VAR_4, VAR_5);

 VAR_8->transfer_flags |= VAR_3;

 FUNC_7(VAR_7->udev);
 FUNC_4(VAR_8, &VAR_7->bulk_anchor);

 VAR_11 = FUNC_9(VAR_8, VAR_6);
 if (VAR_11 < 0) {
  FUNC_1("%s urb %p submission failed (%d)",
      VAR_5->name, VAR_8, -VAR_11);
  FUNC_10(VAR_8);
 }

 FUNC_6(VAR_8);

 return VAR_11;
}
