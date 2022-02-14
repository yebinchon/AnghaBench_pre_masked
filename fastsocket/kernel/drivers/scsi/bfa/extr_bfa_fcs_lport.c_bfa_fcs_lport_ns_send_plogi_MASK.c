
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_8__ {int ns_plogi_sent; int ns_plogi_alloc_wait; } ;
struct TYPE_6__ {int nwwn; int pwwn; } ;
struct bfa_fcs_lport_s {TYPE_3__ stats; int lp_tag; TYPE_2__* fabric; TYPE_4__* fcs; TYPE_1__ port_cfg; int pid; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcxp_s* fcxp; int fcxp_wqe; struct bfa_fcs_lport_s* port; } ;
struct TYPE_9__ {int bfa; } ;
struct TYPE_7__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct bfa_fcxp_s* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_4 (struct bfa_fcs_lport_s*) ;
 int VAR_7 ;
 int FUNC_5 (struct bfa_fcxp_s*) ;
 int FUNC_6 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int ,void*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (struct fchs_s*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(void *VAR_8, struct bfa_fcxp_s *VAR_9)
{
 struct bfa_fcs_lport_ns_s *VAR_10 = VAR_8;
 struct bfa_fcs_lport_s *VAR_11 = VAR_10->port;
 struct fchs_s VAR_12;
 int VAR_13;
 struct bfa_fcxp_s *VAR_14;

 FUNC_9(VAR_11->fcs, VAR_11->pid);

 VAR_14 = VAR_9 ? VAR_9 :
        FUNC_2(VAR_11->fcs, VAR_1);
 if (!VAR_14) {
  VAR_11->stats.ns_plogi_alloc_wait++;
  FUNC_3(VAR_11->fcs->bfa, &VAR_10->fcxp_wqe,
    FUNC_11, VAR_10, VAR_1);
  return;
 }
 VAR_10->fcxp = VAR_14;

 VAR_13 = FUNC_10(&VAR_12, FUNC_5(VAR_14),
        FUNC_7(VAR_5),
        FUNC_4(VAR_11), 0,
        VAR_11->port_cfg.pwwn, VAR_11->port_cfg.nwwn,
        FUNC_0(VAR_11->fcs->bfa),
        FUNC_1(VAR_11->fcs->bfa));

 FUNC_6(VAR_14, ((void*)0), VAR_11->fabric->vf_id, VAR_11->lp_tag, VAR_0,
     VAR_2, VAR_13, &VAR_12,
     VAR_7, (void *)VAR_10,
     VAR_4, VAR_3);
 VAR_11->stats.ns_plogi_sent++;

 FUNC_8(VAR_10, VAR_6);
}
