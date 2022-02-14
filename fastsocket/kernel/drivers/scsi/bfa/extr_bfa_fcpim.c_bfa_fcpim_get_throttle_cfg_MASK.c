
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bfa_s {int dummy; } ;
struct bfa_fcp_mod_s {int num_ioim_reqs; int throttle_update_required; } ;


 struct bfa_fcp_mod_s* FUNC_0 (struct bfa_s*) ;
 scalar_t__ FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_s*) ;

u16
FUNC_3(struct bfa_s *VAR_0, u16 VAR_1)
{
 u16 VAR_2;
 struct bfa_fcp_mod_s *VAR_3 = FUNC_0(VAR_0);






 if (!VAR_3->throttle_update_required)
  return (u16)VAR_3->num_ioim_reqs;

 VAR_2 = FUNC_1(VAR_0) ? FUNC_2(VAR_0) : 0;
 if (!VAR_2 || (VAR_2 > VAR_1))
  VAR_2 = VAR_1;

 return VAR_2;
}
