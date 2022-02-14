
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct net_device {int name; int dev_addr; } ;
struct TYPE_10__ {int intr_urb; int rx_urb; int usb; int net; int intr_interval; int intr_buff; TYPE_5__* rx_skb; } ;
typedef TYPE_1__ pegasus_t ;
struct TYPE_11__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ,...) ;
 TYPE_5__* FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_1__*,int ,int,int ) ;
 int FUNC_10 (int ,int ,int ,int ,scalar_t__,int ,TYPE_1__*) ;
 int FUNC_11 (int ,int ,int ,int ,int,int ,TYPE_1__*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_8)
{
 pegasus_t *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;

 if (VAR_9->rx_skb == ((void*)0))
  VAR_9->rx_skb = FUNC_7(VAR_9);



 if (!VAR_9->rx_skb)
  return -VAR_2;

 VAR_10 = FUNC_9(VAR_9, VAR_3, 6, VAR_8->dev_addr);

 FUNC_10(VAR_9->rx_urb, VAR_9->usb,
     FUNC_13(VAR_9->usb, 1),
     VAR_9->rx_skb->data, VAR_5 + 8,
     VAR_7, VAR_9);
 if ((VAR_10 = FUNC_15(VAR_9->rx_urb, VAR_4))) {
  if (VAR_10 == -VAR_1)
   FUNC_3(VAR_9->net);
  if (FUNC_4(VAR_9))
   FUNC_6("%s: failed rx_urb, %d", VAR_8->name, VAR_10);
  goto exit;
 }

 FUNC_11(VAR_9->intr_urb, VAR_9->usb,
    FUNC_14(VAR_9->usb, 3),
    VAR_9->intr_buff, sizeof (VAR_9->intr_buff),
    VAR_6, VAR_9, VAR_9->intr_interval);
 if ((VAR_10 = FUNC_15(VAR_9->intr_urb, VAR_4))) {
  if (VAR_10 == -VAR_1)
   FUNC_3(VAR_9->net);
  if (FUNC_4(VAR_9))
   FUNC_6("%s: failed intr_urb, %d\n", VAR_8->name, VAR_10);
  FUNC_12(VAR_9->rx_urb);
  goto exit;
 }
 if ((VAR_10 = FUNC_0(VAR_8, VAR_9->usb))) {
  if (FUNC_4(VAR_9))
   FUNC_6("%s: can't enable_net_traffic() - %d\n",
     VAR_8->name, VAR_10);
  VAR_10 = -VAR_0;
  FUNC_12(VAR_9->rx_urb);
  FUNC_12(VAR_9->intr_urb);
  FUNC_1(VAR_9);
  goto exit;
 }
 FUNC_8(VAR_8);
 FUNC_5(VAR_8);
 if (FUNC_4(VAR_9))
  FUNC_6("%s: open\n", VAR_8->name);
 VAR_10 = 0;
exit:
 return VAR_10;
}
