
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int controller; scalar_t__ uses_dma; } ;
struct usb_hcd {TYPE_3__* driver; TYPE_2__ self; } ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int transfer_flags; int transfer_buffer_length; void* transfer_buffer; int transfer_dma; TYPE_4__* dev; int setup_packet; int setup_dma; TYPE_1__* ep; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int bus; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int *,void**,int,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct urb*) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_5, struct urb *VAR_6)
{
 enum dma_data_direction VAR_7;

 if (FUNC_2(VAR_6->dev))
  return;

 if (FUNC_3(&VAR_6->ep->desc)
     && !(VAR_6->transfer_flags & VAR_3)) {
  if (VAR_5->self.uses_dma)
   FUNC_0(VAR_5->self.controller, VAR_6->setup_dma,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
  else if (VAR_5->driver->flags & VAR_2)
   FUNC_1(VAR_6->dev->bus, &VAR_6->setup_dma,
     (void **)&VAR_6->setup_packet,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
 }

 VAR_7 = FUNC_4(VAR_6) ? VAR_0 : VAR_1;
 if (VAR_6->transfer_buffer_length != 0
     && !(VAR_6->transfer_flags & VAR_4)) {
  if (VAR_5->self.uses_dma)
   FUNC_0(VAR_5->self.controller,
     VAR_6->transfer_dma,
     VAR_6->transfer_buffer_length,
     VAR_7);
  else if (VAR_5->driver->flags & VAR_2)
   FUNC_1(VAR_6->dev->bus, &VAR_6->transfer_dma,
     &VAR_6->transfer_buffer,
     VAR_6->transfer_buffer_length,
     VAR_7);
 }
}
