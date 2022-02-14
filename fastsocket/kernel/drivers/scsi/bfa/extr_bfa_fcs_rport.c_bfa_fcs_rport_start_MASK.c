
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fchs_s {int s_id; } ;
struct fc_logi_s {int dummy; } ;
struct bfa_fcs_rport_s {int dummy; } ;
struct bfa_fcs_lport_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfa_fcs_rport_s* FUNC_0 (struct bfa_fcs_lport_s*,int ,int ) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,struct fc_logi_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int ) ;

void
FUNC_3(struct bfa_fcs_lport_s *VAR_2, struct fchs_s *VAR_3,
  struct fc_logi_s *VAR_4)
{
 struct bfa_fcs_rport_s *VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3->s_id);
 if (!VAR_5)
  return;

 FUNC_1(VAR_5, VAR_4);

 FUNC_2(VAR_5, VAR_0);
}
