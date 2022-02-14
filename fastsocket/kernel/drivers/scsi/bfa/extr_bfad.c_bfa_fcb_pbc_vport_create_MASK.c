
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_pbc_vport_s {int vp_nwwn; int vp_pwwn; } ;
struct TYPE_2__ {struct bfad_s* bfad; } ;
struct bfad_vport_s {int list_entry; int fcs_vport; TYPE_1__ drv_port; } ;
struct bfad_s {int pbc_vport_list; int bfa_fcs; } ;
struct bfa_lport_cfg_s {int preboot_vp; int nwwn; int pwwn; int roles; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,struct bfa_lport_cfg_s*,struct bfad_vport_s*) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 struct bfad_vport_s* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(struct bfad_s *VAR_4, struct bfi_pbc_vport_s VAR_5)
{

 struct bfa_lport_cfg_s VAR_6 = {0};
 struct bfad_vport_s *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(struct bfad_vport_s), VAR_3);
 if (!VAR_7) {
  FUNC_1(VAR_4, 0);
  return;
 }

 VAR_7->drv_port.bfad = VAR_4;
 VAR_6.roles = VAR_0;
 VAR_6.pwwn = VAR_5.vp_pwwn;
 VAR_6.nwwn = VAR_5.vp_nwwn;
 VAR_6.preboot_vp = VAR_2;

 VAR_8 = FUNC_0(&VAR_7->fcs_vport, &VAR_4->bfa_fcs, 0,
      &VAR_6, VAR_7);

 if (VAR_8 != VAR_1) {
  FUNC_1(VAR_4, 0);
  return;
 }

 FUNC_3(&VAR_7->list_entry, &VAR_4->pbc_vport_list);
}
