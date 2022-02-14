
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int dummy; } ;
struct ehci_qh_hw {int hw_alt_next; int hw_qtd_next; void* hw_token; void* hw_info1; int hw_next; } ;
struct TYPE_10__ {unsigned long data; int function; } ;
struct ehci_hcd {int need_io_watchdog; int periodic_size; int i_thresh; int next_uframe; int clock_frame; int has_ppcd; int has_lpm; int command; TYPE_4__* async; int * reclaim; TYPE_1__* caps; int cached_sitd_list; int cached_itd_list; TYPE_5__ iaa_watchdog; TYPE_5__ watchdog; int lock; } ;
struct TYPE_7__ {int * qh; } ;
struct TYPE_9__ {TYPE_3__* dummy; int qh_state; int qh_dma; struct ehci_qh_hw* hw; TYPE_2__ qh_next; } ;
struct TYPE_8__ {int qtd_dma; } ;
struct TYPE_6__ {int hcc_params; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ehci_hcd*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (struct ehci_hcd*,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct ehci_hcd*,int ) ;
 int VAR_7 ;
 void* FUNC_11 (struct ehci_hcd*,int ) ;
 int FUNC_12 (struct ehci_hcd*,char*,...) ;
 int VAR_8 ;
 int FUNC_13 (struct ehci_hcd*,int ) ;
 int FUNC_14 (struct ehci_hcd*,int *) ;
 int VAR_9 ;
 struct ehci_hcd* FUNC_15 (struct usb_hcd*) ;
 int VAR_10 ;
 int FUNC_16 (TYPE_5__*) ;
 int VAR_11 ;
 int FUNC_17 (int,unsigned int) ;
 int VAR_12 ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct usb_hcd *VAR_13)
{
 struct ehci_hcd *VAR_14 = FUNC_15(VAR_13);
 u32 VAR_15;
 int VAR_16;
 u32 VAR_17;
 struct ehci_qh_hw *VAR_18;

 FUNC_18(&VAR_14->lock);




 VAR_14->need_io_watchdog = 1;
 FUNC_16(&VAR_14->watchdog);
 VAR_14->watchdog.function = VAR_9;
 VAR_14->watchdog.data = (unsigned long) VAR_14;

 FUNC_16(&VAR_14->iaa_watchdog);
 VAR_14->iaa_watchdog.function = VAR_8;
 VAR_14->iaa_watchdog.data = (unsigned long) VAR_14;





 VAR_14->periodic_size = VAR_2;
 FUNC_8(&VAR_14->cached_itd_list);
 FUNC_8(&VAR_14->cached_sitd_list);
 if ((VAR_16 = FUNC_13(VAR_14, VAR_4)) < 0)
  return VAR_16;


 VAR_17 = FUNC_14(VAR_14, &VAR_14->caps->hcc_params);
 if (FUNC_3(VAR_17))
  VAR_14->i_thresh = 8;
 else
  VAR_14->i_thresh = 2 + FUNC_4(VAR_17);

 VAR_14->reclaim = ((void*)0);
 VAR_14->next_uframe = -1;
 VAR_14->clock_frame = -1;
 VAR_14->async->qh_next.qh = ((void*)0);
 VAR_18 = VAR_14->async->hw;
 VAR_18->hw_next = FUNC_9(VAR_14, VAR_14->async->qh_dma);
 VAR_18->hw_info1 = FUNC_11(VAR_14, VAR_5);
 VAR_18->hw_token = FUNC_11(VAR_14, VAR_7);
 VAR_18->hw_qtd_next = FUNC_1(VAR_14);
 VAR_14->async->qh_state = VAR_6;
 VAR_18->hw_alt_next = FUNC_10(VAR_14, VAR_14->async->dummy->qtd_dma);


 if (VAR_11 < 0 || VAR_11 > 6)
  VAR_11 = 0;
 VAR_15 = 1 << (16 + VAR_11);
 if (FUNC_6(VAR_17)) {
  VAR_14->has_ppcd = 1;
  FUNC_12(VAR_14, "enable per-port change event\n");
  VAR_15 |= VAR_1;
 }
 if (FUNC_2(VAR_17)) {







  if (VAR_12) {
   VAR_12 = FUNC_17(VAR_12, (unsigned) 3);
   VAR_15 |= VAR_0;
   VAR_15 |= VAR_12 << 8;
  }
  FUNC_12(VAR_14, "park %d\n", VAR_12);
 }
 if (FUNC_7(VAR_17)) {

  VAR_15 &= ~(3 << 2);
  VAR_15 |= (VAR_3 << 2);
  switch (VAR_3) {
  case 0: VAR_14->periodic_size = 1024; break;
  case 1: VAR_14->periodic_size = 512; break;
  case 2: VAR_14->periodic_size = 256; break;
  default: FUNC_0();
  }
 }
 if (FUNC_5(VAR_17)) {

  FUNC_12(VAR_14, "support lpm\n");
  VAR_14->has_lpm = 1;
  if (VAR_10 > 0xf) {
   FUNC_12(VAR_14, "hird %d invalid, use default 0",
   VAR_10);
   VAR_10 = 0;
  }
  VAR_15 |= VAR_10 << 24;
 }
 VAR_14->command = VAR_15;

 return 0;
}
