
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xhci_virt_device {TYPE_1__* eps; int out_ctx; } ;
struct xhci_hcd {int lock; struct xhci_virt_device** devs; } ;
struct xhci_ep_ctx {int dummy; } ;
struct xhci_command {int in_ctx; } ;
struct usb_host_endpoint {int desc; } ;
struct usb_hcd {int dummy; } ;
struct usb_device {size_t slot_id; } ;
typedef int gfp_t ;
struct TYPE_2__ {int ep_state; int * stream_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct xhci_command* FUNC_3 (struct xhci_hcd*,int,int,int ) ;
 int * FUNC_4 (struct xhci_hcd*,unsigned int,unsigned int,int ) ;
 int FUNC_5 (struct xhci_hcd*,struct usb_device*,struct usb_host_endpoint**,unsigned int,unsigned int*,int *) ;
 int FUNC_6 (struct xhci_hcd*,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct xhci_hcd*,struct usb_device*,struct xhci_command*,int,int) ;
 int FUNC_8 (struct xhci_hcd*,char*,...) ;
 int FUNC_9 (struct xhci_hcd*,int ,int ,unsigned int) ;
 int FUNC_10 (struct xhci_hcd*,struct xhci_virt_device*,struct usb_host_endpoint*) ;
 int FUNC_11 (struct xhci_hcd*,struct xhci_command*) ;
 int FUNC_12 (struct xhci_hcd*,int *) ;
 unsigned int FUNC_13 (int *) ;
 struct xhci_ep_ctx* FUNC_14 (struct xhci_hcd*,int ,unsigned int) ;
 int FUNC_15 (struct xhci_hcd*,int ,int ,int ,int ) ;
 int FUNC_16 (struct xhci_hcd*,struct xhci_ep_ctx*,int *) ;
 int FUNC_17 (struct xhci_hcd*,char*) ;

int FUNC_18(struct usb_hcd *VAR_4, struct usb_device *VAR_5,
  struct usb_host_endpoint **VAR_6, unsigned int VAR_7,
  unsigned int VAR_8, gfp_t VAR_9)
{
 int VAR_10, VAR_11;
 struct xhci_hcd *VAR_12;
 struct xhci_virt_device *VAR_13;
 struct xhci_command *VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned long VAR_17;
 u32 VAR_18 = 0;

 if (!VAR_6)
  return -VAR_0;




 VAR_8 += 1;
 VAR_12 = FUNC_0(VAR_4);
 FUNC_8(VAR_12, "Driver wants %u stream IDs (including stream 0).\n",
   VAR_8);

 VAR_14 = FUNC_3(VAR_12, 1, 1, VAR_9);
 if (!VAR_14) {
  FUNC_8(VAR_12, "Could not allocate xHCI command structure.\n");
  return -VAR_1;
 }





 FUNC_1(&VAR_12->lock, VAR_17);
 VAR_11 = FUNC_5(VAR_12, VAR_5, VAR_6,
   VAR_7, &VAR_8, &VAR_18);
 if (VAR_11 < 0) {
  FUNC_11(VAR_12, VAR_14);
  FUNC_2(&VAR_12->lock, VAR_17);
  return VAR_11;
 }
 if (VAR_8 <= 1) {
  FUNC_17(VAR_12, "WARN: endpoints can't handle "
    "more than one stream.\n");
  FUNC_11(VAR_12, VAR_14);
  FUNC_2(&VAR_12->lock, VAR_17);
  return -VAR_0;
 }
 VAR_13 = VAR_12->devs[VAR_5->slot_id];



 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_15 = FUNC_13(&VAR_6[VAR_10]->desc);
  VAR_13->eps[VAR_15].ep_state |= VAR_2;
 }
 FUNC_2(&VAR_12->lock, VAR_17);





 FUNC_6(VAR_12, &VAR_8, &VAR_16);
 FUNC_8(VAR_12, "Need %u stream ctx entries for %u stream IDs.\n",
   VAR_16, VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_15 = FUNC_13(&VAR_6[VAR_10]->desc);
  VAR_13->eps[VAR_15].stream_info = FUNC_4(VAR_12,
    VAR_16,
    VAR_8, VAR_9);
  if (!VAR_13->eps[VAR_15].stream_info)
   goto cleanup;



 }


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  struct xhci_ep_ctx *VAR_19;

  VAR_15 = FUNC_13(&VAR_6[VAR_10]->desc);
  VAR_19 = FUNC_14(VAR_12, VAR_14->in_ctx, VAR_15);

  FUNC_9(VAR_12, VAR_14->in_ctx,
    VAR_13->out_ctx, VAR_15);
  FUNC_16(VAR_12, VAR_19,
    VAR_13->eps[VAR_15].stream_info);
 }



 FUNC_15(VAR_12, VAR_14->in_ctx,
   VAR_13->out_ctx, VAR_18, VAR_18);


 VAR_11 = FUNC_7(VAR_12, VAR_5, VAR_14,
   0, 0);





 if (VAR_11 < 0)
  goto cleanup;

 FUNC_1(&VAR_12->lock, VAR_17);
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_15 = FUNC_13(&VAR_6[VAR_10]->desc);
  VAR_13->eps[VAR_15].ep_state &= ~VAR_2;
  FUNC_8(VAR_12, "Slot %u ep ctx %u now has streams.\n",
    VAR_5->slot_id, VAR_15);
  VAR_13->eps[VAR_15].ep_state |= VAR_3;
 }
 FUNC_11(VAR_12, VAR_14);
 FUNC_2(&VAR_12->lock, VAR_17);


 return VAR_8 - 1;

cleanup:

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_15 = FUNC_13(&VAR_6[VAR_10]->desc);
  FUNC_12(VAR_12, VAR_13->eps[VAR_15].stream_info);
  VAR_13->eps[VAR_15].stream_info = ((void*)0);



  VAR_13->eps[VAR_15].ep_state &= ~VAR_2;
  VAR_13->eps[VAR_15].ep_state &= ~VAR_3;
  FUNC_10(VAR_12, VAR_13, VAR_6[VAR_10]);
 }
 FUNC_11(VAR_12, VAR_14);
 return -VAR_1;
}
