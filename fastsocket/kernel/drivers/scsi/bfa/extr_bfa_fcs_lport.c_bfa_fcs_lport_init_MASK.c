
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_lport_cfg_s {int roles; } ;
struct bfa_fcs_vport_s {int * vport_drv; } ;
struct bfa_fcs_lport_s {TYPE_2__* fabric; struct bfa_lport_cfg_s port_cfg; TYPE_1__* fcs; int bfad_port; struct bfa_fcs_vport_s* vport; } ;
struct TYPE_4__ {int vf_drv; } ;
struct TYPE_3__ {scalar_t__ bfad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,struct bfa_fcs_lport_s*,int ,int ,int *) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_5 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_6 (char*,int ) ;

void
FUNC_7(struct bfa_fcs_lport_s *VAR_6,
 struct bfa_lport_cfg_s *VAR_7)
{
 struct bfa_fcs_vport_s *VAR_8 = VAR_6->vport;
 struct bfad_s *VAR_9 = (struct bfad_s *)VAR_6->fcs->bfad;
 char VAR_10[VAR_2];

 VAR_6->port_cfg = *VAR_7;

 VAR_6->bfad_port = FUNC_1(VAR_6->fcs->bfad, VAR_6,
     VAR_6->port_cfg.roles,
     VAR_6->fabric->vf_drv,
     VAR_8 ? VAR_8->vport_drv : ((void*)0));

 FUNC_6(VAR_10, FUNC_3(VAR_6));
 FUNC_0(VAR_3, VAR_9, VAR_5,
  "New logical port created: WWN = %s Role = %s\n",
  VAR_10, "Initiator");
 FUNC_2(VAR_6, VAR_1);

 FUNC_5(VAR_6, VAR_4);
 FUNC_4(VAR_6, VAR_0);
}
