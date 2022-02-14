
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_device {int dummy; } ;
struct rt2x00_dev {int flags; TYPE_2__* ops; int dev; } ;
struct queue_entry_priv_usb {int urb; } ;
struct queue_entry {int flags; TYPE_4__* skb; TYPE_3__* queue; struct queue_entry_priv_usb* priv_data; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int usb_endpoint; struct rt2x00_dev* rt2x00dev; } ;
struct TYPE_6__ {TYPE_1__* lib; } ;
struct TYPE_5__ {int (* get_tx_data_len ) (struct queue_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 int FUNC_2 (struct queue_entry*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (struct queue_entry*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct usb_device* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,struct usb_device*,int ,int ,int ,int ,struct queue_entry*) ;
 int FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static bool FUNC_13(struct queue_entry *VAR_7, void *VAR_8)
{
 struct rt2x00_dev *VAR_9 = VAR_7->queue->rt2x00dev;
 struct usb_device *VAR_10 = FUNC_8(VAR_9->dev);
 struct queue_entry_priv_usb *VAR_11 = VAR_7->priv_data;
 u32 VAR_12;
 int VAR_13;

 if (!FUNC_6(VAR_3, &VAR_7->flags) ||
     FUNC_7(VAR_4, &VAR_7->flags))
  return 0;






 VAR_12 = VAR_9->ops->lib->get_tx_data_len(VAR_7);

 VAR_13 = FUNC_4(VAR_7->skb, VAR_12);
 if (FUNC_9(VAR_13)) {

  FUNC_1(VAR_9, "TX SKB padding error, out of memory\n");
  FUNC_3(VAR_2, &VAR_7->flags);
  FUNC_2(VAR_7);

  return 0;
 }

 FUNC_10(VAR_11->urb, VAR_10,
     FUNC_11(VAR_10, VAR_7->queue->usb_endpoint),
     VAR_7->skb->data, VAR_12,
     VAR_6, VAR_7);

 VAR_13 = FUNC_12(VAR_11->urb, VAR_5);
 if (VAR_13) {
  if (VAR_13 == -VAR_1)
   FUNC_0(VAR_0, &VAR_9->flags);
  FUNC_3(VAR_2, &VAR_7->flags);
  FUNC_2(VAR_7);
 }

 return 0;
}
