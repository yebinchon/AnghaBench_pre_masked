
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xhci_virt_device {TYPE_1__* eps; int out_ctx; } ;
struct xhci_hcd {int lock; struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct xhci_command {int in_ctx; } ;
struct usb_host_endpoint {int desc; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {size_t slot_id; } ;
typedef int gfp_t ;
struct TYPE_4__ {struct xhci_command* free_streams_command; } ;
struct TYPE_3__ {int ep_state; TYPE_2__* stream_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (struct xhci_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int) ;
 int FUNC_4 (struct xhci_hcd*,struct usb_device*,struct xhci_command*,int,int) ;
 int FUNC_5 (struct xhci_hcd*,int ,int ,unsigned int) ;
 int FUNC_6 (struct xhci_hcd*,TYPE_2__*) ;
 unsigned int FUNC_7 (int *) ;
 struct xhci_ep_ctx* FUNC_8 (struct xhci_hcd*,int ,unsigned int) ;
 int FUNC_9 (struct xhci_hcd*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct xhci_hcd*,struct xhci_ep_ctx*,TYPE_1__*) ;

int FUNC_11(struct usb_hcd *VAR_3, struct usb_device *VAR_4,
  struct usb_host_endpoint **VAR_5, unsigned int VAR_6,
  gfp_t VAR_7)
{
 int VAR_8, VAR_9;
 struct xhci_hcd *VAR_10;
 struct xhci_virt_device *VAR_11;
 struct xhci_command *VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14;
 u32 VAR_15;

 VAR_10 = FUNC_0(VAR_3);
 VAR_11 = VAR_10->devs[VAR_4->slot_id];


 FUNC_1(&VAR_10->lock, VAR_14);
 VAR_15 = FUNC_3(VAR_10,
   VAR_4, VAR_5, VAR_6);
 if (VAR_15 == 0) {
  FUNC_2(&VAR_10->lock, VAR_14);
  return -VAR_0;
 }





 VAR_13 = FUNC_7(&VAR_5[0]->desc);
 VAR_12 = VAR_11->eps[VAR_13].stream_info->free_streams_command;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct xhci_ep_ctx *VAR_16;

  VAR_13 = FUNC_7(&VAR_5[VAR_8]->desc);
  VAR_16 = FUNC_8(VAR_10, VAR_12->in_ctx, VAR_13);
  VAR_10->devs[VAR_4->slot_id]->eps[VAR_13].ep_state |=
   VAR_1;

  FUNC_5(VAR_10, VAR_12->in_ctx,
    VAR_11->out_ctx, VAR_13);
  FUNC_10(VAR_10, VAR_16,
    &VAR_11->eps[VAR_13]);
 }
 FUNC_9(VAR_10, VAR_12->in_ctx,
   VAR_11->out_ctx, VAR_15, VAR_15);
 FUNC_2(&VAR_10->lock, VAR_14);




 VAR_9 = FUNC_4(VAR_10, VAR_4, VAR_12,
   0, 1);




 if (VAR_9 < 0)
  return VAR_9;

 FUNC_1(&VAR_10->lock, VAR_14);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_13 = FUNC_7(&VAR_5[VAR_8]->desc);
  FUNC_6(VAR_10, VAR_11->eps[VAR_13].stream_info);
  VAR_11->eps[VAR_13].stream_info = ((void*)0);



  VAR_11->eps[VAR_13].ep_state &= ~VAR_1;
  VAR_11->eps[VAR_13].ep_state &= ~VAR_2;
 }
 FUNC_2(&VAR_10->lock, VAR_14);

 return 0;
}
