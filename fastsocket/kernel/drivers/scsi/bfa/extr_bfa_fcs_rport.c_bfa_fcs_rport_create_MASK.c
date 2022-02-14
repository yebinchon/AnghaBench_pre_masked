
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfa_fcs_rport_s {int dummy; } ;
struct bfa_fcs_lport_s {int fcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfa_fcs_rport_s* FUNC_0 (struct bfa_fcs_lport_s*,int ,int ) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (int ,int ) ;

struct bfa_fcs_rport_s *
FUNC_3(struct bfa_fcs_lport_s *VAR_2, u32 VAR_3)
{
 struct bfa_fcs_rport_s *VAR_4;

 FUNC_2(VAR_2->fcs, VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_1(VAR_4, VAR_0);
 return VAR_4;
}
