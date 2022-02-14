
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qe_udc {TYPE_2__** ep_param; TYPE_1__* usb_regs; } ;
struct qe_ep {int epnum; int txbase; int n_txbd; int c_txbd; struct qe_udc* udc; } ;
struct TYPE_4__ {int tbcnt; int tstate; int tbase; int tbptr; } ;
struct TYPE_3__ {int usb_uscom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct qe_ep*) ;
 int FUNC_5 (struct qe_ep*) ;

__attribute__((used)) static int FUNC_6(struct qe_ep *VAR_2)
{
 struct qe_udc *VAR_3 = VAR_2->udc;
 int VAR_4;

 VAR_4 = (int)VAR_2->epnum;

 FUNC_5(VAR_2);
 FUNC_1(&VAR_3->usb_regs->usb_uscom,
  VAR_1 | (VAR_0 & (VAR_2->epnum)));
 FUNC_2(&VAR_3->ep_param[VAR_4]->tbptr, FUNC_0(&VAR_3->ep_param[VAR_4]->tbase));
 FUNC_3(&VAR_3->ep_param[VAR_4]->tstate, 0);
 FUNC_2(&VAR_3->ep_param[VAR_4]->tbcnt, 0);

 VAR_2->c_txbd = VAR_2->txbase;
 VAR_2->n_txbd = VAR_2->txbase;
 FUNC_4(VAR_2);
 return 0;
}
