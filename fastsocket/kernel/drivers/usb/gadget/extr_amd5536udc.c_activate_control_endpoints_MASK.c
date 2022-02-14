
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ speed; } ;
struct udc {TYPE_6__* ep; TYPE_4__* regs; TYPE_2__* csr; TYPE_1__ gadget; } ;
struct TYPE_12__ {int in; int td_stp_dma; int td_phys; scalar_t__ naking; TYPE_5__* regs; TYPE_3__* td; } ;
struct TYPE_11__ {int ctl; int desptr; int subptr; int bufout_maxpkt; int bufin_framenum; } ;
struct TYPE_10__ {int ctl; } ;
struct TYPE_9__ {int status; } ;
struct TYPE_8__ {int * ne; } ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_6__*,size_t) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static void FUNC_8(struct udc *VAR_28)
{
 u32 VAR_29;

 FUNC_2(VAR_28, "activate_control_endpoints\n");


 VAR_29 = FUNC_5(&VAR_28->ep[VAR_7].regs->ctl);
 VAR_29 |= FUNC_1(VAR_12);
 FUNC_7(VAR_29, &VAR_28->ep[VAR_7].regs->ctl);


 VAR_28->ep[VAR_7].in = 1;
 VAR_28->ep[VAR_9].in = 0;


 VAR_29 = FUNC_5(&VAR_28->ep[VAR_7].regs->bufin_framenum);
 if (VAR_28->gadget.speed == VAR_19)
  VAR_29 = FUNC_0(VAR_29, VAR_18,
     VAR_14);
 else if (VAR_28->gadget.speed == VAR_20)
  VAR_29 = FUNC_0(VAR_29, VAR_13,
     VAR_14);
 FUNC_7(VAR_29, &VAR_28->ep[VAR_7].regs->bufin_framenum);


 VAR_29 = FUNC_5(&VAR_28->ep[VAR_7].regs->bufout_maxpkt);
 if (VAR_28->gadget.speed == VAR_19)
  VAR_29 = FUNC_0(VAR_29, VAR_16,
     VAR_15);
 else if (VAR_28->gadget.speed == VAR_20)
  VAR_29 = FUNC_0(VAR_29, VAR_8,
    VAR_15);
 FUNC_7(VAR_29, &VAR_28->ep[VAR_7].regs->bufout_maxpkt);


 VAR_29 = FUNC_5(&VAR_28->ep[VAR_9].regs->bufout_maxpkt);
 if (VAR_28->gadget.speed == VAR_19)
  VAR_29 = FUNC_0(VAR_29, VAR_17,
     VAR_15);
 else if (VAR_28->gadget.speed == VAR_20)
  VAR_29 = FUNC_0(VAR_29, VAR_10,
     VAR_15);
 FUNC_7(VAR_29, &VAR_28->ep[VAR_9].regs->bufout_maxpkt);


 VAR_29 = FUNC_5(&VAR_28->csr->ne[0]);
 if (VAR_28->gadget.speed == VAR_19)
  VAR_29 = FUNC_0(VAR_29, VAR_17,
     VAR_0);
 else if (VAR_28->gadget.speed == VAR_20)
  VAR_29 = FUNC_0(VAR_29, VAR_10,
     VAR_0);
 FUNC_7(VAR_29, &VAR_28->csr->ne[0]);

 if (VAR_25) {
  VAR_28->ep[VAR_9].td->status |=
   FUNC_1(VAR_6);

  FUNC_7(VAR_28->ep[VAR_9].td_stp_dma,
   &VAR_28->ep[VAR_9].regs->subptr);
  FUNC_7(VAR_28->ep[VAR_9].td_phys,
   &VAR_28->ep[VAR_9].regs->desptr);

  if (FUNC_6(&VAR_24)) {
   VAR_22 = 0;
   FUNC_4(&VAR_24, VAR_21 - 1);
  }

  if (FUNC_6(&VAR_23)) {
   FUNC_4(&VAR_23, VAR_21 - 1);
  }

  VAR_29 = FUNC_5(&VAR_28->regs->ctl);
  VAR_29 |= FUNC_1(VAR_3)
    | FUNC_1(VAR_4)
    | FUNC_1(VAR_5);
  if (VAR_26) {
   VAR_29 |= FUNC_1(VAR_1);
  } else if (VAR_27) {
   VAR_29 |= FUNC_1(VAR_2);
  }
  FUNC_7(VAR_29, &VAR_28->regs->ctl);
 }


 VAR_29 = FUNC_5(&VAR_28->ep[VAR_7].regs->ctl);
 VAR_29 |= FUNC_1(VAR_11);
 FUNC_7(VAR_29, &VAR_28->ep[VAR_7].regs->ctl);
 VAR_28->ep[VAR_7].naking = 0;
 FUNC_3(&VAR_28->ep[VAR_7], VAR_7);


 VAR_29 = FUNC_5(&VAR_28->ep[VAR_9].regs->ctl);
 VAR_29 |= FUNC_1(VAR_11);
 FUNC_7(VAR_29, &VAR_28->ep[VAR_9].regs->ctl);
 VAR_28->ep[VAR_9].naking = 0;
 FUNC_3(&VAR_28->ep[VAR_9], VAR_9);
}
