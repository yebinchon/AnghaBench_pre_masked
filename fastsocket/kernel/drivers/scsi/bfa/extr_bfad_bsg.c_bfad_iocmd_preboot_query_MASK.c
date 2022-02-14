
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int blun; int port_speed; int nbluns; int boot_enabled; } ;
struct bfi_iocfc_cfgrsp_s {TYPE_3__ pbc_cfg; } ;
struct TYPE_4__ {struct bfi_iocfc_cfgrsp_s* cfgrsp; } ;
struct TYPE_5__ {TYPE_1__ iocfc; } ;
struct bfad_s {int bfad_lock; TYPE_2__ bfa; } ;
struct bfa_boot_pbc_s {int pblun; int speed; int nbluns; int enable; } ;
struct bfa_bsg_preboot_s {int status; struct bfa_boot_pbc_s cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_preboot_s *VAR_3 = (struct bfa_bsg_preboot_s *)VAR_2;
 struct bfi_iocfc_cfgrsp_s *VAR_4 = VAR_1->bfa.iocfc.cfgrsp;
 struct bfa_boot_pbc_s *VAR_5 = &VAR_3->cfg;
 unsigned long VAR_6;

 FUNC_1(&VAR_1->bfad_lock, VAR_6);
 VAR_5->enable = VAR_4->pbc_cfg.boot_enabled;
 VAR_5->nbluns = VAR_4->pbc_cfg.nbluns;
 VAR_5->speed = VAR_4->pbc_cfg.port_speed;
 FUNC_0(VAR_5->pblun, VAR_4->pbc_cfg.blun, sizeof(VAR_5->pblun));
 VAR_3->status = VAR_0;
 FUNC_2(&VAR_1->bfad_lock, VAR_6);

 return 0;
}
