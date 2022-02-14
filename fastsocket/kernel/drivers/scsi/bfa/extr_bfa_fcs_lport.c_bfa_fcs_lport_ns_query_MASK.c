
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_lport_s {int pid; int fcs; } ;
struct bfa_fcs_lport_ns_s {int dummy; } ;


 struct bfa_fcs_lport_ns_s* FUNC_0 (struct bfa_fcs_lport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct bfa_fcs_lport_s *VAR_2)
{
 struct bfa_fcs_lport_ns_s *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_2->fcs, VAR_2->pid);
 if (FUNC_1(VAR_3, VAR_1))
  FUNC_2(VAR_3, VAR_0);
}
