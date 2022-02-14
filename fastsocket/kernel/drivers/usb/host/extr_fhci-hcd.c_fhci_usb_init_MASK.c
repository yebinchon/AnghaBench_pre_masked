
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fhci_usb {int saved_msk; TYPE_3__* fhci; TYPE_4__* actual_frame; int sw_transaction_time; int max_frame_usage; int port_status; } ;
struct fhci_hcd {TYPE_1__* pram; struct fhci_usb* usb_lld; } ;
struct TYPE_8__ {int tds_list; } ;
struct TYPE_7__ {TYPE_2__* regs; int pram; } ;
struct TYPE_6__ {int usb_event; int usb_mask; int usb_mod; } ;
struct TYPE_5__ {int rx_state; int frame_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (struct fhci_usb*,int ,int ) ;
 int FUNC_2 (struct fhci_usb*) ;
 TYPE_4__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct fhci_hcd *VAR_17)
{
 struct fhci_usb *VAR_18 = VAR_17->usb_lld;

 FUNC_4(VAR_18->fhci->pram, 0, VAR_5);

 VAR_18->port_status = VAR_4;
 VAR_18->max_frame_usage = VAR_6;
 VAR_18->sw_transaction_time = VAR_8;

 VAR_18->actual_frame = FUNC_3(sizeof(*VAR_18->actual_frame), VAR_7);
 if (!VAR_18->actual_frame) {
  FUNC_2(VAR_18);
  return -VAR_3;
 }

 FUNC_0(&VAR_18->actual_frame->tds_list);


 FUNC_6(&VAR_17->pram->frame_num, 0);


 FUNC_7(&VAR_17->pram->rx_state, 0);


 VAR_18->saved_msk = (VAR_13 |
     VAR_14 |
     VAR_9 |
     VAR_11 | VAR_12 | VAR_10);

 FUNC_5(&VAR_18->fhci->regs->usb_mod, VAR_16 | VAR_15);


 FUNC_6(&VAR_18->fhci->regs->usb_mask, 0);


 FUNC_6(&VAR_18->fhci->regs->usb_event, 0xffff);

 if (FUNC_1(VAR_18, VAR_0, VAR_1) != 0) {
  FUNC_2(VAR_18);
  return -VAR_2;
 }

 return 0;
}
