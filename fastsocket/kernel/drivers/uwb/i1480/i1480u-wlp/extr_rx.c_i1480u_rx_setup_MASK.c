
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct sk_buff {int data; int ip_summed; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct i1480u_rx_buf {int * urb; struct sk_buff* data; struct i1480u* i1480u; } ;
struct i1480u {int usb_dev; struct i1480u_rx_buf* rx_buf; TYPE_3__* usb_iface; int * rx_skb; struct net_device* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; struct device dev; } ;
struct TYPE_5__ {TYPE_1__* endpoint; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct i1480u*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ,scalar_t__,int ,struct i1480u_rx_buf*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct i1480u *VAR_7)
{
 int VAR_8, VAR_9;
 struct device *VAR_10 = &VAR_7->usb_iface->dev;
 struct net_device *VAR_11 = VAR_7->net_dev;
 struct usb_endpoint_descriptor *VAR_12;
 struct sk_buff *VAR_13;


 VAR_7->rx_skb = ((void*)0);
 VAR_8 = -VAR_1;
 VAR_12 = &VAR_7->usb_iface->cur_altsetting->endpoint[1].desc;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct i1480u_rx_buf *VAR_14 = &VAR_7->rx_buf[VAR_9];
  VAR_14->i1480u = VAR_7;
  VAR_13 = FUNC_0(VAR_4);
  if (!VAR_13) {
   FUNC_1(VAR_10,
    "RX: cannot allocate RX buffer %d\n", VAR_9);
   VAR_8 = -VAR_1;
   goto error;
  }
  VAR_13->dev = VAR_11;
  VAR_13->ip_summed = VAR_0;
  FUNC_3(VAR_13, 2);
  VAR_14->data = VAR_13;
  VAR_14->urb = FUNC_5(0, VAR_2);
  if (FUNC_4(VAR_14->urb == ((void*)0))) {
   FUNC_1(VAR_10, "RX: cannot allocate URB %d\n", VAR_9);
   VAR_8 = -VAR_1;
   goto error;
  }
  FUNC_6(VAR_14->urb, VAR_7->usb_dev,
     FUNC_7(VAR_7->usb_dev, VAR_12->bEndpointAddress),
     VAR_14->data->data, VAR_4 - 2,
     VAR_6, VAR_14);
  VAR_8 = FUNC_8(VAR_14->urb, VAR_3);
  if (FUNC_4(VAR_8 < 0)) {
   FUNC_1(VAR_10, "RX: cannot submit URB %d: %d\n",
    VAR_9, VAR_8);
   goto error;
  }
 }
 return 0;

error:
 FUNC_2(VAR_7);
 return VAR_8;
}
