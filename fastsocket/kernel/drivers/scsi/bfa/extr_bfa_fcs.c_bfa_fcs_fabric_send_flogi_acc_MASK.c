
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_lport_cfg_s {int nwwn; int pwwn; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_lport_n2n_s {int reply_oxid; } ;
struct TYPE_5__ {struct bfa_fcs_lport_n2n_s pn2n; } ;
struct TYPE_6__ {TYPE_1__ port_topo; struct bfa_lport_cfg_s port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_3__* lps; int vf_id; TYPE_4__* fcs; TYPE_2__ bport; } ;
struct TYPE_8__ {struct bfa_s* bfa; } ;
struct TYPE_7__ {int bfa_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*) ;
 int VAR_4 ;
 struct bfa_fcxp_s* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int ,struct fchs_s*,int ,struct bfa_fcs_fabric_s*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fchs_s*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_fabric_s *VAR_5)
{
 struct bfa_lport_cfg_s *VAR_6 = &VAR_5->bport.port_cfg;
 struct bfa_fcs_lport_n2n_s *VAR_7 = &VAR_5->bport.port_topo.pn2n;
 struct bfa_s *VAR_8 = VAR_5->fcs->bfa;
 struct bfa_fcxp_s *VAR_9;
 u16 VAR_10;
 struct fchs_s VAR_11;

 VAR_9 = FUNC_2(VAR_5->fcs, VAR_0);



 if (!VAR_9)
  return;

 VAR_10 = FUNC_6(&VAR_11, FUNC_3(VAR_9),
        FUNC_5(VAR_2),
        VAR_7->reply_oxid, VAR_6->pwwn,
        VAR_6->nwwn,
        FUNC_0(VAR_8),
        FUNC_1(VAR_8), 0);

 FUNC_4(VAR_9, ((void*)0), VAR_5->vf_id, VAR_5->lps->bfa_tag,
        VAR_0, VAR_1,
        VAR_10, &VAR_11, VAR_4, VAR_5,
        VAR_3, 0);
}
