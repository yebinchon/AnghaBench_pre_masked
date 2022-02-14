
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfa_s {int dummy; } ;
struct bfa_fcxp_mod_s {int rsp_pld_sz; } ;


 struct bfa_fcxp_mod_s* FUNC_0 (struct bfa_s*) ;

u32
FUNC_1(struct bfa_s *VAR_0)
{
 struct bfa_fcxp_mod_s *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->rsp_pld_sz;
}
