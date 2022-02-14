
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {size_t length; int list; struct sk_buff* context; int complete; int buf; } ;
struct usb_ep {int maxpacket; } ;
struct sk_buff {int data; } ;
struct ethhdr {int dummy; } ;
struct eth_dev {int req_lock; int rx_reqs; TYPE_2__* port_usb; TYPE_1__* net; int lock; } ;
typedef int gfp_t ;
struct TYPE_4__ {scalar_t__ header_len; struct usb_ep* out_ep; } ;
struct TYPE_3__ {scalar_t__ mtu; } ;


 int FUNC_0 (struct eth_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct eth_dev*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_5 ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int
FUNC_9(struct eth_dev *VAR_6, struct usb_request *VAR_7, gfp_t VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_0;
 size_t VAR_11 = 0;
 struct usb_ep *VAR_12;
 unsigned long VAR_13;

 FUNC_6(&VAR_6->lock, VAR_13);
 if (VAR_6->port_usb)
  VAR_12 = VAR_6->port_usb->out_ep;
 else
  VAR_12 = ((void*)0);
 FUNC_7(&VAR_6->lock, VAR_13);

 if (!VAR_12)
  return -VAR_1;
 VAR_11 += sizeof(struct ethhdr) + VAR_6->net->mtu + VAR_3;
 VAR_11 += VAR_6->port_usb->header_len;
 VAR_11 += VAR_12->maxpacket - 1;
 VAR_11 -= VAR_11 % VAR_12->maxpacket;

 VAR_9 = FUNC_1(VAR_11 + VAR_2, VAR_8);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_6, "no rx skb\n");
  goto enomem;
 }





 FUNC_5(VAR_9, VAR_2);

 VAR_7->buf = VAR_9->data;
 VAR_7->length = VAR_11;
 VAR_7->complete = VAR_5;
 VAR_7->context = VAR_9;

 VAR_10 = FUNC_8(VAR_12, VAR_7, VAR_8);
 if (VAR_10 == -VAR_0)
enomem:
  FUNC_2(VAR_6, VAR_4);
 if (VAR_10) {
  FUNC_0(VAR_6, "rx submit --> %d\n", VAR_10);
  if (VAR_9)
   FUNC_3(VAR_9);
  FUNC_6(&VAR_6->req_lock, VAR_13);
  FUNC_4(&VAR_7->list, &VAR_6->rx_reqs);
  FUNC_7(&VAR_6->req_lock, VAR_13);
 }
 return VAR_10;
}
