
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union ehci_shadow {TYPE_4__* sitd; TYPE_2__* qh; TYPE_1__* itd; scalar_t__ ptr; } ;
typedef int u32 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct ehci_qh_hw {int hw_next; int hw_info2; } ;
struct ehci_hcd {unsigned int periodic_size; int * periodic; union ehci_shadow* pshadow; } ;
typedef int __hc32 ;
struct TYPE_8__ {union ehci_shadow sitd_next; int hw_next; int hw_uframe; TYPE_3__* urb; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {union ehci_shadow qh_next; int dev; struct ehci_qh_hw* hw; } ;
struct TYPE_5__ {union ehci_shadow itd_next; int hw_next; } ;


 int FUNC_0 (struct ehci_hcd*,int ) ;



 int FUNC_1 (struct ehci_hcd*,char*,unsigned int,int ) ;
 int FUNC_2 (struct ehci_hcd*,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4 (
 struct ehci_hcd *VAR_0,
 unsigned VAR_1,
 struct usb_device *VAR_2,
 unsigned VAR_3,
 u32 VAR_4
)
{
 if (VAR_1 == 0)
  return 0;





 for (; VAR_3 < VAR_0->periodic_size; VAR_3 += VAR_1) {
  union ehci_shadow VAR_5;
  __hc32 VAR_6;
  struct ehci_qh_hw *VAR_7;

  VAR_5 = VAR_0->pshadow [VAR_3];
  VAR_6 = FUNC_0(VAR_0, VAR_0->periodic [VAR_3]);
  while (VAR_5.ptr) {
   switch (FUNC_2(VAR_0, VAR_6)) {
   case 130:
    VAR_6 = FUNC_0(VAR_0, VAR_5.itd->hw_next);
    VAR_5 = VAR_5.itd->itd_next;
    continue;
   case 129:
    VAR_7 = VAR_5.qh->hw;
    if (FUNC_3 (VAR_2, VAR_5.qh->dev)) {
     u32 VAR_8;

     VAR_8 = FUNC_2(VAR_0,
       VAR_7->hw_info2);

     VAR_8 |= VAR_8 >> 8;
     if (VAR_8 & VAR_4)
      break;
    }
    VAR_6 = FUNC_0(VAR_0, VAR_7->hw_next);
    VAR_5 = VAR_5.qh->qh_next;
    continue;
   case 128:
    if (FUNC_3 (VAR_2, VAR_5.sitd->urb->dev)) {
     u16 VAR_9;

     VAR_9 = FUNC_2(VAR_0, VAR_5.sitd
        ->hw_uframe);

     VAR_9 |= VAR_9 >> 8;
     if (VAR_9 & VAR_4)
      break;
    }
    VAR_6 = FUNC_0(VAR_0, VAR_5.sitd->hw_next);
    VAR_5 = VAR_5.sitd->sitd_next;
    continue;

   default:
    FUNC_1 (VAR_0,
     "periodic frame %d bogus type %d\n",
     VAR_3, VAR_6);
   }


   return 0;
  }
 }


 return 1;
}
