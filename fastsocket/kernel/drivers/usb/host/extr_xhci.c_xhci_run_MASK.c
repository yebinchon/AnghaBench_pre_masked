
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {unsigned long data; scalar_t__ expires; int function; } ;
struct xhci_hcd {int quirks; TYPE_2__* ir_set; TYPE_1__* op_regs; int event_ring; int erst; int cmd_ring; TYPE_3__ event_ring_timer; scalar_t__ zombie; } ;
struct usb_hcd {int uses_new_polling; } ;
struct TYPE_6__ {int irq_pending; int irq_control; int erst_dequeue; } ;
struct TYPE_5__ {int command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 struct xhci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct xhci_hcd*,char*,...) ;
 int FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*,int *) ;
 int FUNC_9 (struct xhci_hcd*,int ) ;
 int FUNC_10 (struct xhci_hcd*,int ) ;
 int VAR_8 ;
 int FUNC_11 (struct xhci_hcd*,int ) ;
 int FUNC_12 (struct xhci_hcd*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (struct xhci_hcd*,int *) ;
 scalar_t__ FUNC_14 (struct xhci_hcd*,int *) ;
 int FUNC_15 (struct xhci_hcd*) ;
 int FUNC_16 (struct usb_hcd*) ;
 int FUNC_17 (struct xhci_hcd*,scalar_t__,int *) ;

int FUNC_18(struct usb_hcd *VAR_9)
{
 u32 VAR_10;
 u64 VAR_11;
 int VAR_12;
 struct xhci_hcd *VAR_13 = FUNC_3(VAR_9);





 VAR_9->uses_new_polling = 1;
 if (!FUNC_5(VAR_9))
  return FUNC_15(VAR_13);

 FUNC_6(VAR_13, "xhci_run\n");

 VAR_12 = FUNC_16(VAR_9);
 if (VAR_12)
  return VAR_12;
 FUNC_6(VAR_13, "Command ring memory map follows:\n");
 FUNC_10(VAR_13, VAR_13->cmd_ring);
 FUNC_9(VAR_13, VAR_13->cmd_ring);
 FUNC_7(VAR_13);

 FUNC_6(VAR_13, "ERST memory map follows:\n");
 FUNC_8(VAR_13, &VAR_13->erst);
 FUNC_6(VAR_13, "Event ring:\n");
 FUNC_10(VAR_13, VAR_13->event_ring);
 FUNC_9(VAR_13, VAR_13->event_ring);
 VAR_11 = FUNC_13(VAR_13, &VAR_13->ir_set->erst_dequeue);
 VAR_11 &= ~VAR_1;
 FUNC_6(VAR_13, "ERST deq = 64'h%0lx\n", (long unsigned int) VAR_11);

 FUNC_6(VAR_13, "// Set the interrupt modulation register\n");
 VAR_10 = FUNC_14(VAR_13, &VAR_13->ir_set->irq_control);
 VAR_10 &= ~VAR_2;
 VAR_10 |= (u32) 160;
 FUNC_17(VAR_13, VAR_10, &VAR_13->ir_set->irq_control);


 VAR_10 = FUNC_14(VAR_13, &VAR_13->op_regs->command);
 VAR_10 |= (VAR_0);
 FUNC_6(VAR_13, "// Enable interrupts, cmd = 0x%x.\n",
   VAR_10);
 FUNC_17(VAR_13, VAR_10, &VAR_13->op_regs->command);

 VAR_10 = FUNC_14(VAR_13, &VAR_13->ir_set->irq_pending);
 FUNC_6(VAR_13, "// Enabling event ring interrupter %p by writing 0x%x to irq_pending\n",
   VAR_13->ir_set, (unsigned int) FUNC_0(VAR_10));
 FUNC_17(VAR_13, FUNC_0(VAR_10),
   &VAR_13->ir_set->irq_pending);
 FUNC_11(VAR_13, 0);

 if (VAR_13->quirks & VAR_6)
  FUNC_12(VAR_13, 0, 0, 0,
    FUNC_1(VAR_5));

 FUNC_6(VAR_13, "Finished xhci_run for USB2 roothub\n");
 return 0;
}
