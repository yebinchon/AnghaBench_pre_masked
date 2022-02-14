
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
struct TYPE_6__ {int nwwns; int wwn; } ;
struct TYPE_5__ {int nbluns; TYPE_1__* blun; scalar_t__ boot_enabled; } ;
struct bfi_iocfc_cfgrsp_s {TYPE_3__ bootwwns; TYPE_2__ pbc_cfg; } ;
struct bfa_iocfc_s {struct bfi_iocfc_cfgrsp_s* cfgrsp; } ;
struct bfa_s {struct bfa_iocfc_s iocfc; } ;
struct TYPE_4__ {int tgt_pwwn; } ;


 int FUNC_0 (struct bfa_s*,int) ;
 int FUNC_1 (int *,int ,int) ;

void
FUNC_2(struct bfa_s *VAR_0, u8 *VAR_1, wwn_t *VAR_2)
{
 struct bfa_iocfc_s *VAR_3 = &VAR_0->iocfc;
 struct bfi_iocfc_cfgrsp_s *VAR_4 = VAR_3->cfgrsp;
 int VAR_5;

 if (VAR_4->pbc_cfg.boot_enabled && VAR_4->pbc_cfg.nbluns) {
  FUNC_0(VAR_0, VAR_4->pbc_cfg.nbluns);
  *VAR_1 = VAR_4->pbc_cfg.nbluns;
  for (VAR_5 = 0; VAR_5 < VAR_4->pbc_cfg.nbluns; VAR_5++)
   VAR_2[VAR_5] = VAR_4->pbc_cfg.blun[VAR_5].tgt_pwwn;

  return;
 }

 *VAR_1 = VAR_4->bootwwns.nwwns;
 FUNC_1(VAR_2, VAR_4->bootwwns.wwn, sizeof(VAR_4->bootwwns.wwn));
}
