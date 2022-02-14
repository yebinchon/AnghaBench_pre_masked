
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


struct TYPE_9__ {int rem_port_wwn; } ;
struct TYPE_10__ {TYPE_3__ pn2n; } ;
struct TYPE_7__ {int pwwn; } ;
struct TYPE_12__ {int pid; TYPE_4__ port_topo; TYPE_1__ port_cfg; } ;
struct TYPE_8__ {int flogi_rsp_err; int flogi_rejects; int flogi_unknown_rsp; int flogi_acc_err; int flogi_accepts; } ;
struct bfa_fcs_fabric_s {int is_auth; int fcs; int is_npiv; TYPE_6__ bport; int fab_type; TYPE_5__* lps; int fabric_name; int bb_credit; TYPE_2__ stats; } ;
typedef int bfa_status_t ;
struct TYPE_11__ {int pr_pwwn; int auth_req; int npiv_en; int lp_pid; scalar_t__ fport; int pr_nwwn; int brcd_switch; int pr_bbcred; int ext_status; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(void *VAR_4, void *VAR_5, bfa_status_t VAR_6)
{
 struct bfa_fcs_fabric_s *VAR_7 = VAR_5;

 FUNC_1(VAR_7->fcs, VAR_7->bport.port_cfg.pwwn);
 FUNC_1(VAR_7->fcs, VAR_6);

 switch (VAR_6) {
 case 128:
  VAR_7->stats.flogi_accepts++;
  break;

 case 129:

  VAR_7->stats.flogi_acc_err++;
  FUNC_0(VAR_7, VAR_3);

  return;

 case 131:
  switch (VAR_7->lps->ext_status) {
  case 133:
   VAR_7->stats.flogi_acc_err++;
   break;

  case 132:
   VAR_7->stats.flogi_unknown_rsp++;
   break;

  default:
   break;
  }
  FUNC_0(VAR_7, VAR_3);

  return;

 case 130:
  VAR_7->stats.flogi_rejects++;
  FUNC_0(VAR_7, VAR_3);
  return;

 default:
  VAR_7->stats.flogi_rsp_err++;
  FUNC_0(VAR_7, VAR_3);
  return;
 }

 VAR_7->bb_credit = VAR_7->lps->pr_bbcred;
 FUNC_1(VAR_7->fcs, VAR_7->bb_credit);

 if (!(VAR_7->lps->brcd_switch))
  VAR_7->fabric_name = VAR_7->lps->pr_nwwn;




 if (VAR_7->lps->fport) {
  VAR_7->bport.pid = VAR_7->lps->lp_pid;
  VAR_7->is_npiv = VAR_7->lps->npiv_en;
  VAR_7->is_auth = VAR_7->lps->auth_req;
  FUNC_0(VAR_7, VAR_1);
 } else {



  VAR_7->bport.port_topo.pn2n.rem_port_wwn =
   VAR_7->lps->pr_pwwn;
  VAR_7->fab_type = VAR_0;
  FUNC_0(VAR_7, VAR_2);
 }

 FUNC_1(VAR_7->fcs, VAR_7->bport.pid);
 FUNC_1(VAR_7->fcs, VAR_7->is_npiv);
 FUNC_1(VAR_7->fcs, VAR_7->is_auth);
}
