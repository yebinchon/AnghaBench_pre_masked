
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_iso_packet_descriptor {scalar_t__ actual_length; scalar_t__ length; int status; } ;
struct usb_device {int devpath; } ;
struct urb {int number_of_packets; struct usb_device* dev; int actual_length; int pipe; int error_count; struct usb_iso_packet_descriptor* iso_frame_desc; } ;
struct ehci_sitd {int index; scalar_t__ frame; int sitd_list; struct ehci_iso_stream* stream; struct urb* urb; int hw_results; } ;
struct ehci_iso_stream {int depth; int interval; int bEndpointAddress; int refcount; TYPE_2__* ep; int free_list; scalar_t__ bandwidth; int td_list; } ;
struct ehci_hcd {int amd_pll_fix; scalar_t__ clock_frame; int cached_sitd_list; } ;
struct TYPE_4__ {scalar_t__ bandwidth_isoc_reqs; int bandwidth_allocated; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct TYPE_5__ {int * hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ehci_hcd*) ;
 TYPE_3__* FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (struct ehci_hcd*,struct urb*,int ) ;
 int FUNC_4 (struct ehci_hcd*,char*,int ,int,char*) ;
 int FUNC_5 (struct ehci_hcd*,int *) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_iso_stream*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static unsigned
FUNC_11 (
 struct ehci_hcd *VAR_8,
 struct ehci_sitd *VAR_9
) {
 struct urb *VAR_10 = VAR_9->urb;
 struct usb_iso_packet_descriptor *VAR_11;
 u32 VAR_12;
 int VAR_13 = -1;
 struct ehci_iso_stream *VAR_14 = VAR_9->stream;
 struct usb_device *VAR_15;
 unsigned VAR_16 = 0;

 VAR_13 = VAR_9->index;
 VAR_11 = &VAR_10->iso_frame_desc [VAR_13];
 VAR_12 = FUNC_5(VAR_8, &VAR_9->hw_results);


 if (VAR_12 & VAR_4) {
  VAR_10->error_count++;
  if (VAR_12 & VAR_6)
   VAR_11->status = FUNC_10 (VAR_10->pipe)
    ? -VAR_1
    : -VAR_0;
  else if (VAR_12 & VAR_5)
   VAR_11->status = -VAR_2;
  else
   VAR_11->status = -VAR_3;
 } else {
  VAR_11->status = 0;
  VAR_11->actual_length = VAR_11->length - FUNC_0(VAR_12);
  VAR_10->actual_length += VAR_11->actual_length;
 }
 VAR_14->depth -= VAR_14->interval << 3;


 if ((VAR_13 + 1) != VAR_10->number_of_packets)
  goto done;







 VAR_15 = VAR_10->dev;
 FUNC_3(VAR_8, VAR_10, 0);
 VAR_16 = 1;
 VAR_10 = ((void*)0);
 (void) FUNC_1(VAR_8);
 FUNC_2(VAR_8)->self.bandwidth_isoc_reqs--;

 if (FUNC_2(VAR_8)->self.bandwidth_isoc_reqs == 0) {
  if (VAR_8->amd_pll_fix == 1)
   FUNC_9();
 }

 if (FUNC_7(&VAR_14->td_list)) {
  FUNC_2(VAR_8)->self.bandwidth_allocated
    -= VAR_14->bandwidth;
  FUNC_4 (VAR_8,
   "deschedule devp %s ep%d%s-iso\n",
   VAR_15->devpath, VAR_14->bEndpointAddress & 0x0f,
   (VAR_14->bEndpointAddress & VAR_7) ? "in" : "out");
 }
 FUNC_6 (VAR_8, VAR_14);

done:
 VAR_9->urb = ((void*)0);
 if (VAR_8->clock_frame != VAR_9->frame) {

  VAR_9->stream = ((void*)0);
  FUNC_8(&VAR_9->sitd_list, &VAR_14->free_list);
  FUNC_6(VAR_8, VAR_14);
 } else {



  FUNC_8(&VAR_9->sitd_list, &VAR_8->cached_sitd_list);
  if (VAR_14->refcount == 2) {



   VAR_14->ep->hcpriv = ((void*)0);
   VAR_14->ep = ((void*)0);
  }
 }
 return VAR_16;
}
