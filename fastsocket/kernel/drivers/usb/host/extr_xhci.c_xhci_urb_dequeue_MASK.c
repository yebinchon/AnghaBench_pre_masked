
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {scalar_t__ expires; } ;
struct xhci_virt_ep {int ep_state; TYPE_6__ stop_cmd_timer; int stop_cmds_pending; int cancelled_td_list; } ;
struct xhci_td {int cancelled_td_list; int first_trb; int start_seg; int td_list; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {int xhc_state; int lock; TYPE_2__** devs; TYPE_1__* op_regs; } ;
struct usb_hcd {int dummy; } ;
struct urb_priv {int td_cnt; int length; struct xhci_td** td; } ;
struct urb {TYPE_4__* dev; TYPE_3__* ep; struct urb_priv* hcpriv; } ;
struct TYPE_11__ {int bEndpointAddress; } ;
struct TYPE_10__ {size_t slot_id; int devpath; } ;
struct TYPE_9__ {TYPE_5__ desc; } ;
struct TYPE_8__ {struct xhci_virt_ep* eps; } ;
struct TYPE_7__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_8 (struct usb_hcd*,struct urb*,int ) ;
 int FUNC_9 (struct usb_hcd*,struct urb*) ;
 int FUNC_10 (struct xhci_hcd*,char*,...) ;
 unsigned int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (struct xhci_hcd*,size_t,unsigned int,int ) ;
 int FUNC_13 (struct xhci_hcd*,int *) ;
 int FUNC_14 (struct xhci_hcd*) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (struct xhci_hcd*,struct urb_priv*) ;
 struct xhci_ring* FUNC_17 (struct xhci_hcd*,struct urb*) ;

int FUNC_18(struct usb_hcd *VAR_8, struct urb *VAR_9, int VAR_10)
{
 unsigned long VAR_11;
 int VAR_12, VAR_13;
 u32 VAR_14;
 struct xhci_hcd *VAR_15;
 struct urb_priv *VAR_16;
 struct xhci_td *VAR_17;
 unsigned int VAR_18;
 struct xhci_ring *VAR_19;
 struct xhci_virt_ep *VAR_20;

 VAR_15 = FUNC_1(VAR_8);
 FUNC_5(&VAR_15->lock, VAR_11);

 VAR_12 = FUNC_7(VAR_8, VAR_9, VAR_10);
 if (VAR_12 || !VAR_9->hcpriv)
  goto done;
 VAR_14 = FUNC_13(VAR_15, &VAR_15->op_regs->status);
 if (VAR_14 == 0xffffffff || (VAR_15->xhc_state & VAR_5)) {
  FUNC_10(VAR_15, "HW died, freeing TD.\n");
  VAR_16 = VAR_9->hcpriv;
  for (VAR_13 = VAR_16->td_cnt; VAR_13 < VAR_16->length; VAR_13++) {
   VAR_17 = VAR_16->td[VAR_13];
   if (!FUNC_4(&VAR_17->td_list))
    FUNC_3(&VAR_17->td_list);
   if (!FUNC_4(&VAR_17->cancelled_td_list))
    FUNC_3(&VAR_17->cancelled_td_list);
  }

  FUNC_9(VAR_8, VAR_9);
  FUNC_6(&VAR_15->lock, VAR_11);
  FUNC_8(VAR_8, VAR_9, -VAR_2);
  FUNC_16(VAR_15, VAR_16);
  return VAR_12;
 }
 if ((VAR_15->xhc_state & VAR_4) ||
   (VAR_15->xhc_state & VAR_5)) {
  FUNC_10(VAR_15, "Ep 0x%x: URB %p to be canceled on "
    "non-responsive xHCI host.\n",
    VAR_9->ep->desc.bEndpointAddress, VAR_9);





  goto done;
 }

 VAR_18 = FUNC_11(&VAR_9->ep->desc);
 VAR_20 = &VAR_15->devs[VAR_9->dev->slot_id]->eps[VAR_18];
 VAR_19 = FUNC_17(VAR_15, VAR_9);
 if (!VAR_19) {
  VAR_12 = -VAR_0;
  goto done;
 }

 VAR_16 = VAR_9->hcpriv;
 VAR_13 = VAR_16->td_cnt;
 if (VAR_13 < VAR_16->length)
  FUNC_10(VAR_15, "Cancel URB %p, dev %s, ep 0x%x, "
    "starting at offset 0x%llx\n",
    VAR_9, VAR_9->dev->devpath,
    VAR_9->ep->desc.bEndpointAddress,
    (unsigned long long) FUNC_15(
     VAR_16->td[VAR_13]->start_seg,
     VAR_16->td[VAR_13]->first_trb));

 for (; VAR_13 < VAR_16->length; VAR_13++) {
  VAR_17 = VAR_16->td[VAR_13];
  FUNC_2(&VAR_17->cancelled_td_list, &VAR_20->cancelled_td_list);
 }




 if (!(VAR_20->ep_state & VAR_1)) {
  VAR_20->ep_state |= VAR_1;
  VAR_20->stop_cmds_pending++;
  VAR_20->stop_cmd_timer.expires = VAR_7 +
   VAR_6 * VAR_3;
  FUNC_0(&VAR_20->stop_cmd_timer);
  FUNC_12(VAR_15, VAR_9->dev->slot_id, VAR_18, 0);
  FUNC_14(VAR_15);
 }
done:
 FUNC_6(&VAR_15->lock, VAR_11);
 return VAR_12;
}
