
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int uses_new_polling; int state; } ;
struct oxu_hcd {int periodic_dma; int command; int sbrn; TYPE_3__* regs; TYPE_2__* caps; TYPE_1__* async; } ;
struct TYPE_6__ {int intr_enable; int command; int configured_flag; int segment; int async_next; int frame_list; } ;
struct TYPE_5__ {int hc_capbase; int hcc_params; } ;
struct TYPE_4__ {scalar_t__ qh_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (struct oxu_hcd*,char*,int) ;
 int FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (struct oxu_hcd*) ;
 struct oxu_hcd* FUNC_5 (struct usb_hcd*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct oxu_hcd*,char*,int,int,int,int,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_11)
{
 struct oxu_hcd *VAR_12 = FUNC_5(VAR_11);
 int VAR_13;
 u32 VAR_14, VAR_15;

 VAR_11->uses_new_polling = 1;


 VAR_13 = FUNC_4(VAR_12);
 if (VAR_13 != 0) {
  FUNC_3(VAR_12);
  return VAR_13;
 }
 FUNC_8(VAR_12->periodic_dma, &VAR_12->regs->frame_list);
 FUNC_8((u32) VAR_12->async->qh_dma, &VAR_12->regs->async_next);
 VAR_15 = FUNC_7(&VAR_12->caps->hcc_params);
 if (FUNC_0(VAR_15))
  FUNC_8(0, &VAR_12->regs->segment);

 VAR_12->command &= ~(VAR_2 | VAR_1 | VAR_3 |
    VAR_0 | VAR_4);
 VAR_12->command |= VAR_5;
 FUNC_8(VAR_12->command, &VAR_12->regs->command);
 FUNC_2(VAR_12, "init", VAR_12->command);







 VAR_11->state = VAR_8;
 FUNC_8(VAR_7, &VAR_12->regs->configured_flag);
 FUNC_7(&VAR_12->regs->command);

 VAR_14 = FUNC_1(FUNC_7(&VAR_12->caps->hc_capbase));
 FUNC_6(VAR_12, "USB %x.%x started, quasi-EHCI %x.%02x, driver %s%s\n",
  ((VAR_12->sbrn & 0xf0)>>4), (VAR_12->sbrn & 0x0f),
  VAR_14 >> 8, VAR_14 & 0xff, VAR_6,
  VAR_10 ? ", overcurrent ignored" : "");

 FUNC_8(VAR_9, &VAR_12->regs->intr_enable);

 return 0;
}
