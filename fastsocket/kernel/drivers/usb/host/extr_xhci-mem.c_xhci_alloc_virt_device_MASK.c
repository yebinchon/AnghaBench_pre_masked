
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xhci_virt_device {TYPE_2__* out_ctx; struct usb_device* udev; int cmd_list; int cmd_completion; scalar_t__ num_rings_cached; void* ring_cache; TYPE_4__* eps; TYPE_1__* in_ctx; } ;
struct xhci_ring {int dummy; } ;
struct xhci_hcd {TYPE_3__* dcbaa; struct xhci_virt_device** devs; } ;
struct usb_device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_8__ {int ring; int bw_endpoint_list; int cancelled_td_list; } ;
struct TYPE_7__ {int * dev_context_ptrs; } ;
struct TYPE_6__ {scalar_t__ dma; } ;
struct TYPE_5__ {scalar_t__ dma; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct xhci_hcd*,int ,int ) ;
 int FUNC_6 (struct xhci_hcd*,char*,int,unsigned long long,...) ;
 int FUNC_7 (struct xhci_hcd*,int) ;
 int FUNC_8 (struct xhci_hcd*,TYPE_4__*) ;
 int FUNC_9 (struct xhci_hcd*,int,int,int ,int ) ;
 int FUNC_10 (struct xhci_hcd*,char*,int) ;

int FUNC_11(struct xhci_hcd *VAR_4, int VAR_5,
  struct usb_device *VAR_6, gfp_t VAR_7)
{
 struct xhci_virt_device *VAR_8;
 int VAR_9;


 if (VAR_5 == 0 || VAR_4->devs[VAR_5]) {
  FUNC_10(VAR_4, "Bad Slot ID %d\n", VAR_5);
  return 0;
 }

 VAR_4->devs[VAR_5] = FUNC_3(sizeof(*VAR_4->devs[VAR_5]), VAR_7);
 if (!VAR_4->devs[VAR_5])
  return 0;
 VAR_8 = VAR_4->devs[VAR_5];


 VAR_8->out_ctx = FUNC_5(VAR_4, VAR_1, VAR_7);
 if (!VAR_8->out_ctx)
  goto fail;

 FUNC_6(VAR_4, "Slot %d output ctx = 0x%llx (dma)\n", VAR_5,
   (unsigned long long)VAR_8->out_ctx->dma);


 VAR_8->in_ctx = FUNC_5(VAR_4, VAR_2, VAR_7);
 if (!VAR_8->in_ctx)
  goto fail;

 FUNC_6(VAR_4, "Slot %d input ctx = 0x%llx (dma)\n", VAR_5,
   (unsigned long long)VAR_8->in_ctx->dma);


 for (VAR_9 = 0; VAR_9 < 31; VAR_9++) {
  FUNC_8(VAR_4, &VAR_8->eps[VAR_9]);
  FUNC_0(&VAR_8->eps[VAR_9].cancelled_td_list);
  FUNC_0(&VAR_8->eps[VAR_9].bw_endpoint_list);
 }


 VAR_8->eps[0].ring = FUNC_9(VAR_4, 2, 1, VAR_0, VAR_7);
 if (!VAR_8->eps[0].ring)
  goto fail;


 VAR_8->ring_cache = FUNC_3(
   sizeof(struct xhci_ring *)*VAR_3,
   VAR_7);
 if (!VAR_8->ring_cache)
  goto fail;
 VAR_8->num_rings_cached = 0;

 FUNC_2(&VAR_8->cmd_completion);
 FUNC_0(&VAR_8->cmd_list);
 VAR_8->udev = VAR_6;


 VAR_4->dcbaa->dev_context_ptrs[VAR_5] = FUNC_1(VAR_8->out_ctx->dma);
 FUNC_6(VAR_4, "Set slot id %d dcbaa entry %p to 0x%llx\n",
   VAR_5,
   &VAR_4->dcbaa->dev_context_ptrs[VAR_5],
   FUNC_4(VAR_4->dcbaa->dev_context_ptrs[VAR_5]));

 return 1;
fail:
 FUNC_7(VAR_4, VAR_5);
 return 0;
}
