
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_3__ {int logo_rcvd; } ;
struct bfa_fcs_rport_s {int reply_oxid; int pid; TYPE_1__ stats; struct bfa_fcs_lport_s* port; int fcs; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_2__* fabric; int fcs; } ;
struct TYPE_4__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcxp_s* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfa_fcxp_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int ,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fchs_s*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4 = VAR_3;
 struct bfa_fcs_lport_s *VAR_5;
 struct fchs_s VAR_6;
 struct bfa_fcxp_s *VAR_7;
 u16 VAR_8;

 FUNC_4(VAR_4->fcs, VAR_4->pid);

 VAR_5 = VAR_4->port;

 VAR_7 = FUNC_0(VAR_5->fcs, VAR_0);
 if (!VAR_7)
  return;

 VAR_4->stats.logo_rcvd++;
 VAR_8 = FUNC_5(&VAR_6, FUNC_2(VAR_7),
    VAR_4->pid, FUNC_1(VAR_5),
    VAR_4->reply_oxid);

 FUNC_3(VAR_7, ((void*)0), VAR_5->fabric->vf_id, VAR_5->lp_tag, VAR_0,
   VAR_1, VAR_8, &VAR_6, ((void*)0), ((void*)0), VAR_2, 0);
}
