
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int controller; scalar_t__ uses_dma; } ;
struct usb_hcd {TYPE_2__* driver; TYPE_1__ self; } ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int transfer_flags; void* setup_packet; scalar_t__ transfer_buffer_length; void* transfer_buffer; void* setup_dma; TYPE_4__* dev; TYPE_3__* ep; void* transfer_dma; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int bus; } ;
struct TYPE_7__ {int desc; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,void*,int,int) ;
 int FUNC_1 (int ,int ,void**,void**,int,int) ;
 int FUNC_2 (int ,void**,void**,int,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct urb*) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_5, struct urb *VAR_6,
      gfp_t VAR_7)
{
 enum dma_data_direction VAR_8;
 int VAR_9 = 0;






 if (FUNC_3(VAR_6->dev))
  return 0;

 if (FUNC_4(&VAR_6->ep->desc)
     && !(VAR_6->transfer_flags & VAR_3)) {
  if (VAR_5->self.uses_dma)
   VAR_6->setup_dma = FUNC_0(
     VAR_5->self.controller,
     VAR_6->setup_packet,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
  else if (VAR_5->driver->flags & VAR_2)
   VAR_9 = FUNC_1(
     VAR_6->dev->bus, VAR_7,
     &VAR_6->setup_dma,
     (void **)&VAR_6->setup_packet,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
 }

 VAR_8 = FUNC_5(VAR_6) ? VAR_0 : VAR_1;
 if (VAR_9 == 0 && VAR_6->transfer_buffer_length != 0
     && !(VAR_6->transfer_flags & VAR_4)) {
  if (VAR_5->self.uses_dma)
   VAR_6->transfer_dma = FUNC_0 (
     VAR_5->self.controller,
     VAR_6->transfer_buffer,
     VAR_6->transfer_buffer_length,
     VAR_8);
  else if (VAR_5->driver->flags & VAR_2) {
   VAR_9 = FUNC_1(
     VAR_6->dev->bus, VAR_7,
     &VAR_6->transfer_dma,
     &VAR_6->transfer_buffer,
     VAR_6->transfer_buffer_length,
     VAR_8);

   if (VAR_9 && FUNC_4(&VAR_6->ep->desc)
       && !(VAR_6->transfer_flags & VAR_3))
    FUNC_2(VAR_6->dev->bus,
     &VAR_6->setup_dma,
     (void **)&VAR_6->setup_packet,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
  }
 }
 return VAR_9;
}
