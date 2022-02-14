
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct if_usb_card {TYPE_2__* udev; struct sk_buff* rx_skb; TYPE_1__* rx_urb; int ep_in; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int transfer_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*,int ,scalar_t__,int ,void (*) (struct urb*),struct if_usb_card*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct if_usb_card *VAR_4,
      void (*VAR_5)(struct urb *VAR_6))
{
 struct sk_buff *VAR_7;
 int VAR_8 = -1;

 if (!(VAR_7 = FUNC_0(VAR_2))) {
  FUNC_4("No free skb\n");
  goto rx_ret;
 }

 VAR_4->rx_skb = VAR_7;


 FUNC_5(VAR_4->rx_urb, VAR_4->udev,
     FUNC_6(VAR_4->udev, VAR_4->ep_in),
     VAR_7->data + VAR_1,
     VAR_2, VAR_5,
     VAR_4);

 VAR_4->rx_urb->transfer_flags |= VAR_3;

 FUNC_2(&VAR_4->udev->dev, "Pointer for rx_urb %p\n", VAR_4->rx_urb);
 if ((VAR_8 = FUNC_7(VAR_4->rx_urb, VAR_0))) {
  FUNC_3(&VAR_4->udev->dev, "Submit Rx URB failed: %d\n", VAR_8);
  FUNC_1(VAR_7);
  VAR_4->rx_skb = ((void*)0);
  VAR_8 = -1;
 } else {
  FUNC_2(&VAR_4->udev->dev, "Submit Rx URB success\n");
  VAR_8 = 0;
 }

rx_ret:
 return VAR_8;
}
