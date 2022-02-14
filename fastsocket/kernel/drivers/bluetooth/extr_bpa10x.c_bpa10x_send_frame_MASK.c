
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ctrlrequest {int wLength; int wValue; int wIndex; int bRequest; int bRequestType; } ;
struct urb {int setup_packet; } ;
struct sk_buff {int len; int data; scalar_t__ dev; } ;
struct TYPE_3__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {int name; TYPE_1__ stat; int flags; struct bpa10x_data* driver_data; } ;
struct bpa10x_data {int tx_anchor; int udev; } ;
struct TYPE_4__ {int pkt_type; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct urb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct usb_ctrlrequest* FUNC_5 (int,int ) ;
 int* FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int ,int *) ;
 struct urb* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*,int *) ;
 int FUNC_10 (struct urb*,int ,unsigned int,int ,int ,int ,struct sk_buff*) ;
 int FUNC_11 (struct urb*,int ,unsigned int,void*,int ,int ,int ,struct sk_buff*) ;
 int FUNC_12 (struct urb*) ;
 unsigned int FUNC_13 (int ,int) ;
 unsigned int FUNC_14 (int ,int) ;
 int FUNC_15 (struct urb*,int ) ;
 int FUNC_16 (struct urb*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_7)
{
 struct hci_dev *VAR_8 = (struct hci_dev *) VAR_7->dev;
 struct bpa10x_data *VAR_9 = VAR_8->driver_data;
 struct usb_ctrlrequest *VAR_10;
 struct urb *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_0("%s", VAR_8->name);

 if (!FUNC_7(VAR_4, &VAR_8->flags))
  return -VAR_0;

 VAR_11 = FUNC_8(0, VAR_3);
 if (!VAR_11)
  return -VAR_2;


 *FUNC_6(VAR_7, 1) = FUNC_3(VAR_7)->pkt_type;

 switch (FUNC_3(VAR_7)->pkt_type) {
 case 129:
  VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_3);
  if (!VAR_10) {
   FUNC_12(VAR_11);
   return -VAR_2;
  }

  VAR_10->bRequestType = VAR_5;
  VAR_10->bRequest = 0;
  VAR_10->wIndex = 0;
  VAR_10->wValue = 0;
  VAR_10->wLength = FUNC_2(VAR_7->len);

  VAR_12 = FUNC_14(VAR_9->udev, 0x00);

  FUNC_11(VAR_11, VAR_9->udev, VAR_12, (void *) VAR_10,
    VAR_7->data, VAR_7->len, VAR_6, VAR_7);

  VAR_8->stat.cmd_tx++;
  break;

 case 130:
  VAR_12 = FUNC_13(VAR_9->udev, 0x02);

  FUNC_10(VAR_11, VAR_9->udev, VAR_12,
    VAR_7->data, VAR_7->len, VAR_6, VAR_7);

  VAR_8->stat.acl_tx++;
  break;

 case 128:
  VAR_12 = FUNC_13(VAR_9->udev, 0x02);

  FUNC_10(VAR_11, VAR_9->udev, VAR_12,
    VAR_7->data, VAR_7->len, VAR_6, VAR_7);

  VAR_8->stat.sco_tx++;
  break;

 default:
  FUNC_12(VAR_11);
  return -VAR_1;
 }

 FUNC_9(VAR_11, &VAR_9->tx_anchor);

 VAR_13 = FUNC_15(VAR_11, VAR_3);
 if (VAR_13 < 0) {
  FUNC_1("%s urb %p submission failed", VAR_8->name, VAR_11);
  FUNC_4(VAR_11->setup_packet);
  FUNC_16(VAR_11);
 }

 FUNC_12(VAR_11);

 return 0;
}
