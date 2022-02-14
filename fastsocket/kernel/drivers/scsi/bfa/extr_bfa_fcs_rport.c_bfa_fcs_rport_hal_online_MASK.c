
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_rport_info_s {int max_frmsz; int cisc; int fc_class; int vf_en; int vf_id; int lp_tag; int local_pid; int pid; } ;
struct bfa_fcs_rport_s {int bfa_rport; int maxfrsize; int cisc; int fc_cos; int pid; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {TYPE_1__* fabric; int lp_tag; int pid; } ;
struct TYPE_2__ {int is_vf; int vf_id; } ;


 int FUNC_0 (int ,struct bfa_rport_info_s*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcs_rport_s *VAR_0)
{
 struct bfa_fcs_lport_s *VAR_1 = VAR_0->port;
 struct bfa_rport_info_s VAR_2;

 VAR_2.pid = VAR_0->pid;
 VAR_2.local_pid = VAR_1->pid;
 VAR_2.lp_tag = VAR_1->lp_tag;
 VAR_2.vf_id = VAR_1->fabric->vf_id;
 VAR_2.vf_en = VAR_1->fabric->is_vf;
 VAR_2.fc_class = VAR_0->fc_cos;
 VAR_2.cisc = VAR_0->cisc;
 VAR_2.max_frmsz = VAR_0->maxfrsize;
 FUNC_0(VAR_0->bfa_rport, &VAR_2);
}
