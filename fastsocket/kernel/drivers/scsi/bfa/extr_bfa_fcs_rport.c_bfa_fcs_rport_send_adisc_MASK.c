
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_7__ {int adisc_sent; } ;
struct bfa_fcs_rport_s {TYPE_3__ stats; int pid; struct bfa_fcxp_s* fcxp; int fcxp_wqe; int pwwn; int fcs; struct bfa_fcs_lport_s* port; } ;
struct TYPE_5__ {int nwwn; int pwwn; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_2__* fabric; TYPE_1__ port_cfg; TYPE_4__* fcs; } ;
struct TYPE_8__ {int bfa; } ;
struct TYPE_6__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int VAR_6 ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int ,struct bfa_fcs_rport_s*,int ,int ) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7, struct bfa_fcxp_s *VAR_8)
{
 struct bfa_fcs_rport_s *VAR_9 = VAR_7;
 struct bfa_fcs_lport_s *VAR_10 = VAR_9->port;
 struct fchs_s VAR_11;
 int VAR_12;
 struct bfa_fcxp_s *VAR_13;

 FUNC_6(VAR_9->fcs, VAR_9->pwwn);

 VAR_13 = VAR_8 ? VAR_8 :
        FUNC_0(VAR_10->fcs, VAR_1);
 if (!VAR_13) {
  FUNC_1(VAR_10->fcs->bfa, &VAR_9->fcxp_wqe,
    FUNC_8, VAR_9, VAR_1);
  return;
 }
 VAR_9->fcxp = VAR_13;

 VAR_12 = FUNC_7(&VAR_11, FUNC_3(VAR_13), VAR_9->pid,
    FUNC_2(VAR_10), 0,
    VAR_10->port_cfg.pwwn, VAR_10->port_cfg.nwwn);

 FUNC_4(VAR_13, ((void*)0), VAR_10->fabric->vf_id, VAR_10->lp_tag, VAR_0,
   VAR_2, VAR_12, &VAR_11, VAR_6,
   VAR_9, VAR_4, VAR_3);

 VAR_9->stats.adisc_sent++;
 FUNC_5(VAR_9, VAR_5);
}
