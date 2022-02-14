
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_rport_s {int reply_oxid; int pid; struct bfa_fcxp_s* fcxp; int fcxp_wqe; int fcs; int pwwn; struct bfa_fcs_lport_s* port; } ;
struct TYPE_4__ {int nwwn; int pwwn; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_2__* fabric; TYPE_3__* fcs; TYPE_1__ port_cfg; } ;
struct TYPE_6__ {int bfa; } ;
struct TYPE_5__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bfa_fcxp_s* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_rport_s*,int ) ;
 int FUNC_4 (struct bfa_fcs_lport_s*) ;
 int FUNC_5 (struct bfa_fcxp_s*) ;
 int FUNC_6 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct fchs_s*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_4, struct bfa_fcxp_s *VAR_5)
{
 struct bfa_fcs_rport_s *VAR_6 = VAR_4;
 struct bfa_fcs_lport_s *VAR_7 = VAR_6->port;
 struct fchs_s VAR_8;
 int VAR_9;
 struct bfa_fcxp_s *VAR_10;

 FUNC_8(VAR_6->fcs, VAR_6->pwwn);
 FUNC_8(VAR_6->fcs, VAR_6->reply_oxid);

 VAR_10 = VAR_5 ? VAR_5 :
        FUNC_2(VAR_7->fcs, VAR_0);
 if (!VAR_10) {
  FUNC_3(VAR_7->fcs->bfa, &VAR_6->fcxp_wqe,
    FUNC_10, VAR_6, VAR_0);
  return;
 }
 VAR_6->fcxp = VAR_10;

 VAR_9 = FUNC_9(&VAR_8, FUNC_5(VAR_10),
     VAR_6->pid, FUNC_4(VAR_7),
     VAR_6->reply_oxid, VAR_7->port_cfg.pwwn,
     VAR_7->port_cfg.nwwn,
     FUNC_0(VAR_7->fcs->bfa),
     FUNC_1(VAR_7->fcs->bfa));

 FUNC_6(VAR_10, ((void*)0), VAR_7->fabric->vf_id, VAR_7->lp_tag, VAR_0,
   VAR_1, VAR_9, &VAR_8, ((void*)0), ((void*)0), VAR_2, 0);

 FUNC_7(VAR_6, VAR_3);
}
