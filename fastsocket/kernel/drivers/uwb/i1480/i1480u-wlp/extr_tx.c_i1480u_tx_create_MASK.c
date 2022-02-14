
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlp_tx_hdr {int dummy; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct untd_hdr_cmp {int dummy; } ;
struct sk_buff {size_t const len; int data; } ;
struct i1480u_tx {size_t const buf_size; struct i1480u_tx* urb; int list_node; int buf; } ;
struct i1480u {int tx_list_lock; int tx_list; int usb_dev; TYPE_3__* usb_iface; } ;
typedef int gfp_t ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_5__ {TYPE_1__* endpoint; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i1480u_tx*,struct sk_buff*,int ) ;
 int FUNC_1 (struct i1480u_tx*,struct sk_buff*,int ) ;
 int FUNC_2 (struct i1480u_tx*) ;
 struct i1480u_tx* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct i1480u_tx* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i1480u_tx*,int ,int,int ,size_t const,int ,struct i1480u_tx*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static
struct i1480u_tx *FUNC_10(struct i1480u *VAR_2,
       struct sk_buff *VAR_3, gfp_t VAR_4)
{
 int VAR_5;
 struct usb_endpoint_descriptor *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 struct i1480u_tx *VAR_9;
 const size_t VAR_10 =
  VAR_0 - sizeof(struct untd_hdr_cmp)
  - sizeof(struct wlp_tx_hdr);

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_4);
 if (VAR_9 == ((void*)0))
  goto error_wtx_alloc;
 VAR_9->urb = FUNC_7(0, VAR_4);
 if (VAR_9->urb == ((void*)0))
  goto error_urb_alloc;
 VAR_6 = &VAR_2->usb_iface->cur_altsetting->endpoint[2].desc;
 VAR_7 = FUNC_9(VAR_2->usb_dev, VAR_6->bEndpointAddress);

 if (VAR_3->len > VAR_10) {
  VAR_5 = FUNC_1(VAR_9, VAR_3, VAR_4);
  if (VAR_5 < 0)
   goto error_create;
  FUNC_8(VAR_9->urb, VAR_2->usb_dev, VAR_7,
      VAR_9->buf, VAR_9->buf_size, VAR_1, VAR_9);
 } else {
  VAR_5 = FUNC_0(VAR_9, VAR_3, VAR_4);
  if (VAR_5 < 0)
   goto error_create;
  FUNC_8(VAR_9->urb, VAR_2->usb_dev, VAR_7,
      VAR_3->data, VAR_3->len, VAR_1, VAR_9);
 }
 FUNC_5(&VAR_2->tx_list_lock, VAR_8);
 FUNC_4(&VAR_9->list_node, &VAR_2->tx_list);
 FUNC_6(&VAR_2->tx_list_lock, VAR_8);
 return VAR_9;

error_create:
 FUNC_2(VAR_9->urb);
error_urb_alloc:
 FUNC_2(VAR_9);
error_wtx_alloc:
 return ((void*)0);
}
