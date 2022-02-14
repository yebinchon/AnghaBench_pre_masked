
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
struct bfa_fcs_rport_s {struct bfa_fcs_itnim_s* itnim; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_itnim_s {int dummy; } ;


 int FUNC_0 (int ) ;
 struct bfa_fcs_rport_s* FUNC_1 (struct bfa_fcs_lport_s*,int ) ;

struct bfa_fcs_itnim_s *
FUNC_2(struct bfa_fcs_lport_s *VAR_0, wwn_t VAR_1)
{
 struct bfa_fcs_rport_s *VAR_2;
 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2->itnim == ((void*)0));
 return VAR_2->itnim;
}
