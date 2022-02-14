
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pbc_nwwn; int pbc_pwwn; } ;
struct bfi_iocfc_cfgrsp_s {TYPE_3__ pbc_cfg; } ;
struct bfi_faa_addr_msg_s {int nwwn; int pwwn; } ;
struct TYPE_5__ {TYPE_1__* attr; } ;
struct bfa_iocfc_s {struct bfi_iocfc_cfgrsp_s* cfgrsp; } ;
struct bfa_s {TYPE_2__ ioc; struct bfa_iocfc_s iocfc; } ;
struct TYPE_4__ {int nwwn; int pwwn; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_iocfc_s*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_s *VAR_1, struct bfi_faa_addr_msg_s *VAR_2)
{
 struct bfa_iocfc_s *VAR_3 = &VAR_1->iocfc;
 struct bfi_iocfc_cfgrsp_s *VAR_4 = VAR_3->cfgrsp;

 VAR_4->pbc_cfg.pbc_pwwn = VAR_2->pwwn;
 VAR_4->pbc_cfg.pbc_nwwn = VAR_2->nwwn;

 VAR_1->ioc.attr->pwwn = VAR_2->pwwn;
 VAR_1->ioc.attr->nwwn = VAR_2->nwwn;
 FUNC_0(VAR_3, VAR_0);
}
