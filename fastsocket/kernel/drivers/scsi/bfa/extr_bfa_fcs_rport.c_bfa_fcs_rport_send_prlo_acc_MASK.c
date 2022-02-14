
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_rport_s {int bfa_rport; int reply_oxid; int pid; int fcs; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_1__* fabric; int fcs; } ;
struct TYPE_2__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcxp_s* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfa_fcxp_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*,int ,int ,int ,int ,int ,int,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fchs_s*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_rport_s *VAR_3)
{
 struct bfa_fcs_lport_s *VAR_4 = VAR_3->port;
 struct fchs_s VAR_5;
 struct bfa_fcxp_s *VAR_6;
 int VAR_7;

 FUNC_4(VAR_3->fcs, VAR_3->pid);

 VAR_6 = FUNC_0(VAR_4->fcs, VAR_0);
 if (!VAR_6)
  return;
 VAR_7 = FUNC_5(&VAR_5, FUNC_2(VAR_6),
   VAR_3->pid, FUNC_1(VAR_4),
   VAR_3->reply_oxid, 0);

 FUNC_3(VAR_6, VAR_3->bfa_rport, VAR_4->fabric->vf_id,
  VAR_4->lp_tag, VAR_0, VAR_1, VAR_7, &VAR_5,
  ((void*)0), ((void*)0), VAR_2, 0);
}
