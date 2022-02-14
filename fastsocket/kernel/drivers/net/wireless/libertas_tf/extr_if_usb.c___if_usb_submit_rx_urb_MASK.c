
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct if_usb_card {TYPE_2__* udev; struct sk_buff* rx_skb; TYPE_1__* rx_urb; int ep_in; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int ,int ,int ,void (*) (struct urb*),struct if_usb_card*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(struct if_usb_card *VAR_4,
      void (*VAR_5)(struct urb *VAR_6))
{
 struct sk_buff *VAR_7;
 int VAR_8 = -1;

 FUNC_2(VAR_1);

 VAR_7 = FUNC_0(VAR_2);
 if (!VAR_7) {
  FUNC_6("No free skb\n");
  FUNC_3(VAR_1);
  return -1;
 }

 VAR_4->rx_skb = VAR_7;


 FUNC_8(VAR_4->rx_urb, VAR_4->udev,
     FUNC_9(VAR_4->udev, VAR_4->ep_in),
     FUNC_7(VAR_7),
     VAR_2, VAR_5, VAR_4);

 VAR_4->rx_urb->transfer_flags |= VAR_3;

 FUNC_4(&VAR_4->udev->dev, "Pointer for rx_urb %p\n",
  VAR_4->rx_urb);
 VAR_8 = FUNC_10(VAR_4->rx_urb, VAR_0);
 if (VAR_8) {
  FUNC_5(&VAR_4->udev->dev,
   "Submit Rx URB failed: %d\n", VAR_8);
  FUNC_1(VAR_7);
  VAR_4->rx_skb = ((void*)0);
  FUNC_3(VAR_1);
  return -1;
 } else {
  FUNC_4(&VAR_4->udev->dev, "Submit Rx URB success\n");
  FUNC_3(VAR_1);
  return 0;
 }
}
