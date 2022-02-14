
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {TYPE_9__* controller; } ;
struct usb_hcd {TYPE_3__ self; int state; int product_desc; } ;
struct pci_dev {int dummy; } ;
struct TYPE_11__ {unsigned int complete; char* unlink; int lost_iaa; int reclaim; int error; int normal; } ;
struct ehci_hcd {int reclaim; int lock; TYPE_2__ stats; TYPE_1__* debug; int hcs_params; TYPE_6__* regs; TYPE_5__* caps; } ;
struct debug_buffer {char* output_buf; unsigned int alloc_size; int bus; } ;
typedef unsigned int ssize_t ;
struct TYPE_18__ {TYPE_7__* bus; } ;
struct TYPE_13__ {int controller; } ;
struct TYPE_17__ {TYPE_4__ self; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_15__ {int * port_status; int frame_index; int intr_enable; int command; int status; } ;
struct TYPE_14__ {int hcc_params; int hcs_params; int hc_capbase; } ;
struct TYPE_10__ {int control; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct usb_hcd*) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int) ;
 struct usb_hcd* FUNC_5 (int ) ;
 unsigned int FUNC_6 (char*,int,char*,unsigned int) ;
 unsigned int FUNC_7 (char*,int,char*,unsigned int) ;
 unsigned int FUNC_8 (char*,int,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_9 (char*,int,char*,unsigned int) ;
 int FUNC_10 (TYPE_9__*) ;
 unsigned int FUNC_11 (struct ehci_hcd*,int *) ;
 TYPE_8__* FUNC_12 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_13 (struct usb_hcd*) ;
 TYPE_7__ VAR_0 ;
 int FUNC_14 (struct pci_dev*,int,int*) ;
 unsigned int FUNC_15 (char*,unsigned int,char*,unsigned int,...) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 struct pci_dev* FUNC_18 (int ) ;

__attribute__((used)) static ssize_t FUNC_19(struct debug_buffer *VAR_1)
{
 struct usb_hcd *VAR_2;
 struct ehci_hcd *VAR_3;
 unsigned long VAR_4;
 unsigned VAR_5, VAR_6, VAR_7;
 char *VAR_8, VAR_9 [80];
 static char VAR_10 [] = "%*s\n";
 static char VAR_11 [] = "";

 VAR_2 = FUNC_5(VAR_1->bus);
 VAR_3 = FUNC_13 (VAR_2);
 VAR_8 = VAR_1->output_buf;
 VAR_6 = VAR_1->alloc_size;

 FUNC_16 (&VAR_3->lock, VAR_4);

 if (!FUNC_1(VAR_2)) {
  VAR_6 = FUNC_15 (VAR_8, VAR_6,
   "bus %s, device %s\n"
   "%s\n"
   "SUSPENDED (no register access)\n",
   VAR_2->self.controller->bus->name,
   FUNC_10(VAR_2->self.controller),
   VAR_2->product_desc);
  goto done;
 }


 VAR_7 = FUNC_4(FUNC_11(VAR_3, &VAR_3->caps->hc_capbase));
 VAR_5 = FUNC_15 (VAR_8, VAR_6,
  "bus %s, device %s\n"
  "%s\n"
  "EHCI %x.%02x, hcd state %d\n",
  VAR_2->self.controller->bus->name,
  FUNC_10(VAR_2->self.controller),
  VAR_2->product_desc,
  VAR_7 >> 8, VAR_7 & 0x0ff, VAR_2->state);
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;
 VAR_7 = FUNC_11(VAR_3, &VAR_3->caps->hcs_params);
 VAR_5 = FUNC_15 (VAR_8, VAR_6, "structural params 0x%08x\n", VAR_7);
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;

 VAR_7 = FUNC_11(VAR_3, &VAR_3->caps->hcc_params);
 VAR_5 = FUNC_15 (VAR_8, VAR_6, "capability params 0x%08x\n", VAR_7);
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;


 VAR_5 = FUNC_9 (VAR_9, sizeof VAR_9, VAR_11,
   FUNC_11(VAR_3, &VAR_3->regs->status));
 VAR_5 = FUNC_15 (VAR_8, VAR_6, VAR_10, VAR_5, VAR_9);
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;

 VAR_5 = FUNC_6 (VAR_9, sizeof VAR_9, VAR_11,
   FUNC_11(VAR_3, &VAR_3->regs->command));
 VAR_5 = FUNC_15 (VAR_8, VAR_6, VAR_10, VAR_5, VAR_9);
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;

 VAR_5 = FUNC_7 (VAR_9, sizeof VAR_9, VAR_11,
   FUNC_11(VAR_3, &VAR_3->regs->intr_enable));
 VAR_5 = FUNC_15 (VAR_8, VAR_6, VAR_10, VAR_5, VAR_9);
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;

 VAR_5 = FUNC_15 (VAR_8, VAR_6, "uframe %04x\n",
   FUNC_11(VAR_3, &VAR_3->regs->frame_index));
 VAR_6 -= VAR_5;
 VAR_8 += VAR_5;

 for (VAR_7 = 1; VAR_7 <= FUNC_3 (VAR_3->hcs_params); VAR_7++) {
  VAR_5 = FUNC_8 (VAR_9, sizeof VAR_9, VAR_11, VAR_7,
    FUNC_11(VAR_3,
     &VAR_3->regs->port_status[VAR_7 - 1]));
  VAR_5 = FUNC_15 (VAR_8, VAR_6, VAR_10, VAR_5, VAR_9);
  VAR_6 -= VAR_5;
  VAR_8 += VAR_5;
  if (VAR_7 == FUNC_2(VAR_3->hcs_params) && VAR_3->debug) {
   VAR_5 = FUNC_15 (VAR_8, VAR_6,
     "    debug control %08x\n",
     FUNC_11(VAR_3,
      &VAR_3->debug->control));
   VAR_6 -= VAR_5;
   VAR_8 += VAR_5;
  }
 }

 if (VAR_3->reclaim) {
  VAR_5 = FUNC_15(VAR_8, VAR_6, "reclaim qh %p\n", VAR_3->reclaim);
  VAR_6 -= VAR_5;
  VAR_8 += VAR_5;
 }
done:
 FUNC_17 (&VAR_3->lock, VAR_4);

 return VAR_1->alloc_size - VAR_6;
}
