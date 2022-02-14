
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int controller; } ;
struct usb_hcd {int uses_new_polling; int state; TYPE_2__ self; } ;
struct ehci_hcd {int periodic_dma; int command; int sbrn; TYPE_4__* regs; TYPE_3__* caps; int last_periodic_enable; TYPE_1__* async; } ;
struct TYPE_8__ {int intr_enable; int command; int configured_flag; int segment; int async_next; int frame_list; } ;
struct TYPE_7__ {int hc_capbase; int hcc_params; } ;
struct TYPE_5__ {scalar_t__ qh_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct ehci_hcd*) ;
 int FUNC_4 (struct ehci_hcd*) ;
 int FUNC_5 (struct ehci_hcd*,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 int FUNC_8 (struct ehci_hcd*,char*,...) ;
 int FUNC_9 (struct ehci_hcd*) ;
 int FUNC_10 (struct ehci_hcd*,int *) ;
 int FUNC_11 (struct ehci_hcd*) ;
 int FUNC_12 (struct ehci_hcd*,int,int *) ;
 struct ehci_hcd* FUNC_13 (struct usb_hcd*) ;
 scalar_t__ VAR_10 ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17 (struct usb_hcd *VAR_11)
{
 struct ehci_hcd *VAR_12 = FUNC_13 (VAR_11);
 int VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 VAR_11->uses_new_polling = 1;


 if ((VAR_13 = FUNC_11(VAR_12)) != 0) {
  FUNC_9(VAR_12);
  return VAR_13;
 }
 FUNC_12(VAR_12, VAR_12->periodic_dma, &VAR_12->regs->frame_list);
 FUNC_12(VAR_12, (u32)VAR_12->async->qh_dma, &VAR_12->regs->async_next);
 VAR_15 = FUNC_10(VAR_12, &VAR_12->caps->hcc_params);
 if (FUNC_1(VAR_15)) {
  FUNC_12(VAR_12, 0, &VAR_12->regs->segment);





 }




 VAR_12->command &= ~(VAR_2|VAR_1|VAR_3|VAR_0|VAR_4);
 VAR_12->command |= VAR_5;
 FUNC_12(VAR_12, VAR_12->command, &VAR_12->regs->command);
 FUNC_5 (VAR_12, "init", VAR_12->command);
 FUNC_7(&VAR_9);
 VAR_11->state = VAR_7;
 FUNC_12(VAR_12, VAR_6, &VAR_12->regs->configured_flag);
 FUNC_10(VAR_12, &VAR_12->regs->command);
 FUNC_15(5);
 FUNC_16(&VAR_9);
 VAR_12->last_periodic_enable = FUNC_14();

 VAR_14 = FUNC_2(FUNC_10(VAR_12, &VAR_12->caps->hc_capbase));
 FUNC_8 (VAR_12,
  "USB %x.%x started, EHCI %x.%02x%s\n",
  ((VAR_12->sbrn & 0xf0)>>4), (VAR_12->sbrn & 0x0f),
  VAR_14 >> 8, VAR_14 & 0xff,
  VAR_10 ? ", overcurrent ignored" : "");

 FUNC_12(VAR_12, VAR_8,
      &VAR_12->regs->intr_enable);





 FUNC_4(VAR_12);
 FUNC_3(VAR_12);

 return 0;
}
