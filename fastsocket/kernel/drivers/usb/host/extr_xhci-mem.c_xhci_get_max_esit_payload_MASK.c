
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xhci_hcd {int dummy; } ;
struct TYPE_7__ {int wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_3__ desc; TYPE_2__* ss_ep_comp; } ;
struct usb_device {scalar_t__ speed; } ;
struct TYPE_5__ {int wBytesPerInterval; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct xhci_hcd*,char*) ;

__attribute__((used)) static u32 FUNC_5(struct xhci_hcd *VAR_1,
  struct usb_device *VAR_2,
  struct usb_host_endpoint *VAR_3)
{
 int VAR_4;
 int VAR_5;


 if (FUNC_3(&VAR_3->desc) ||
   FUNC_2(&VAR_3->desc))
  return 0;

 if (VAR_2->speed == VAR_0) {
  if (VAR_3->ss_ep_comp)
   return FUNC_1(VAR_3->ss_ep_comp->desc.wBytesPerInterval);
  FUNC_4(VAR_1, "WARN no SS endpoint companion descriptor.\n");

  return VAR_3->desc.wMaxPacketSize;
 }

 VAR_5 = FUNC_0(FUNC_1(VAR_3->desc.wMaxPacketSize));
 VAR_4 = (FUNC_1(VAR_3->desc.wMaxPacketSize) & 0x1800) >> 11;

 return VAR_5 * (VAR_4 + 1);
}
