
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {int xfer_work; int xfer_list_lock; int xfer_delayed_list; TYPE_1__* usb_iface; } ;
struct wa_xfer {int list_node; struct usb_host_endpoint* ep; int gfp; struct urb* urb; int wa; } ;
struct usb_host_endpoint {int dummy; } ;
struct urb {int transfer_flags; int pipe; int transfer_buffer_length; struct wa_xfer* hcpriv; int status; int * transfer_buffer; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,struct wa_xfer*,struct urb*,int,int ,char*,char*,char*) ;
 int FUNC_1 (struct device*,char*,struct urb*) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (struct wa_xfer*) ;
 struct wa_xfer* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct urb*) ;
 int FUNC_12 (struct wahc*) ;
 int FUNC_13 (struct wa_xfer*) ;
 int FUNC_14 (struct wa_xfer*) ;
 int VAR_5 ;

int FUNC_15(struct wahc *VAR_6, struct usb_host_endpoint *VAR_7,
     struct urb *VAR_8, gfp_t VAR_9)
{
 int VAR_10;
 struct device *VAR_11 = &VAR_6->usb_iface->dev;
 struct wa_xfer *VAR_12;
 unsigned long VAR_13;
 unsigned VAR_14 = FUNC_4() | FUNC_3();

 if (VAR_8->transfer_buffer == ((void*)0)
     && !(VAR_8->transfer_flags & VAR_3)
     && VAR_8->transfer_buffer_length != 0) {
  FUNC_1(VAR_11, "BUG? urb %p: NULL xfer buffer & NODMA\n", VAR_8);
  FUNC_2();
 }

 VAR_10 = -VAR_2;
 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_9);
 if (VAR_12 == ((void*)0))
  goto error_kmalloc;

 VAR_10 = -VAR_1;
 if (VAR_8->status != -VAR_0)
  goto error_dequeued;
 FUNC_14(VAR_12);
 VAR_12->wa = FUNC_12(VAR_6);
 VAR_12->urb = VAR_8;
 VAR_12->gfp = VAR_9;
 VAR_12->ep = VAR_7;
 VAR_8->hcpriv = VAR_12;

 FUNC_0(VAR_11, "xfer %p urb %p pipe 0x%02x [%d bytes] %s %s %s\n",
  VAR_12, VAR_8, VAR_8->pipe, VAR_8->transfer_buffer_length,
  VAR_8->transfer_flags & VAR_3 ? "dma" : "nodma",
  VAR_8->pipe & VAR_4 ? "inbound" : "outbound",
  VAR_14 ? "deferred" : "inline");

 if (VAR_14) {
  FUNC_11(VAR_8);
  FUNC_9(&VAR_6->xfer_list_lock, VAR_13);
  FUNC_7(&VAR_12->list_node, &VAR_6->xfer_delayed_list);
  FUNC_10(&VAR_6->xfer_list_lock, VAR_13);
  FUNC_8(VAR_5, &VAR_6->xfer_work);
 } else {
  FUNC_13(VAR_12);
 }
 return 0;

error_dequeued:
 FUNC_5(VAR_12);
error_kmalloc:
 return VAR_10;
}
