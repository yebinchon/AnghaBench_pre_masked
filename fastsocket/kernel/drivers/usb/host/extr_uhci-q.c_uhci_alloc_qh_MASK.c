
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_1__ desc; struct uhci_qh* hcpriv; } ;
struct usb_device {int speed; } ;
struct uhci_qh {int type; int load; int state; struct usb_device* udev; struct usb_host_endpoint* hep; int dummy_td; int node; int queue; void* link; void* element; int dma_handle; } ;
struct uhci_hcd {int qh_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct uhci_qh* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct uhci_qh*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uhci_qh*,int ,int) ;
 int FUNC_5 (struct uhci_hcd*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static struct uhci_qh *FUNC_9(struct uhci_hcd *VAR_6,
  struct usb_device *VAR_7, struct usb_host_endpoint *VAR_8)
{
 dma_addr_t VAR_9;
 struct uhci_qh *VAR_10;

 VAR_10 = FUNC_1(VAR_6->qh_pool, VAR_0, &VAR_9);
 if (!VAR_10)
  return ((void*)0);

 FUNC_4(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->dma_handle = VAR_9;

 VAR_10->element = VAR_3;
 VAR_10->link = VAR_3;

 FUNC_0(&VAR_10->queue);
 FUNC_0(&VAR_10->node);

 if (VAR_7) {
  VAR_10->type = FUNC_8(&VAR_8->desc);
  if (VAR_10->type != VAR_5) {
   VAR_10->dummy_td = FUNC_5(VAR_6);
   if (!VAR_10->dummy_td) {
    FUNC_2(VAR_6->qh_pool, VAR_10, VAR_9);
    return ((void*)0);
   }
  }
  VAR_10->state = VAR_2;
  VAR_10->hep = VAR_8;
  VAR_10->udev = VAR_7;
  VAR_8->hcpriv = VAR_10;

  if (VAR_10->type == VAR_4 ||
    VAR_10->type == VAR_5)
   VAR_10->load = FUNC_6(VAR_7->speed,
     FUNC_7(&VAR_8->desc),
     VAR_10->type == VAR_5,
     FUNC_3(VAR_8->desc.wMaxPacketSize))
    / 1000 + 1;

 } else {
  VAR_10->state = VAR_1;
  VAR_10->type = -1;
 }
 return VAR_10;
}
