
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int msg_class; } ;
struct bfi_mbmsg {TYPE_2__ mh; } ;
struct bfa_ioc_mbox_mod {TYPE_1__* mbhdlr; } ;
struct bfa_ioc {struct bfa_ioc_mbox_mod mbox_mod; } ;
struct TYPE_3__ {int cbarg; int (* cbfn ) (int ,struct bfi_mbmsg*) ;} ;


 int BFI_MC_IOC ;
 int BFI_MC_MAX ;
 int bfa_ioc_isr (struct bfa_ioc*,struct bfi_mbmsg*) ;
 int bfa_ioc_lpu_read_stat (struct bfa_ioc*) ;
 int bfa_ioc_mbox_poll (struct bfa_ioc*) ;
 scalar_t__ bfa_ioc_msgget (struct bfa_ioc*,struct bfi_mbmsg*) ;
 int stub1 (int ,struct bfi_mbmsg*) ;

void
bfa_nw_ioc_mbox_isr(struct bfa_ioc *ioc)
{
 struct bfa_ioc_mbox_mod *mod = &ioc->mbox_mod;
 struct bfi_mbmsg m;
 int mc;

 if (bfa_ioc_msgget(ioc, &m)) {



  mc = m.mh.msg_class;
  if (mc == BFI_MC_IOC) {
   bfa_ioc_isr(ioc, &m);
   return;
  }

  if ((mc >= BFI_MC_MAX) || (mod->mbhdlr[mc].cbfn == ((void*)0)))
   return;

  mod->mbhdlr[mc].cbfn(mod->mbhdlr[mc].cbarg, &m);
 }

 bfa_ioc_lpu_read_stat(ioc);




 bfa_ioc_mbox_poll(ioc);
}
