
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_lport_fdmi_s {struct bfa_fcs_lport_ms_s* ms; } ;
struct bfa_fcs_lport_ms_s {struct bfa_fcs_lport_fdmi_s fdmi; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_lport_fdmi_s*,int ) ;

void
FUNC_1(struct bfa_fcs_lport_ms_s *VAR_1)
{
 struct bfa_fcs_lport_fdmi_s *VAR_2 = &VAR_1->fdmi;

 VAR_2->ms = VAR_1;
 FUNC_0(VAR_2, VAR_0);
}
