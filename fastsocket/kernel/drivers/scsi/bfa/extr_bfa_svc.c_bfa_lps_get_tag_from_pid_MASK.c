
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct bfa_s {int dummy; } ;
struct bfa_lps_s {scalar_t__ lp_pid; int bfa_tag; } ;
struct bfa_lps_mod_s {int num_lps; struct bfa_lps_s* lps_arr; } ;


 struct bfa_lps_mod_s* FUNC_0 (struct bfa_s*) ;

u8
FUNC_1(struct bfa_s *VAR_0, u32 VAR_1)
{
 struct bfa_lps_mod_s *VAR_2 = FUNC_0(VAR_0);
 struct bfa_lps_s *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_2->lps_arr; VAR_4 < VAR_2->num_lps; VAR_4++, VAR_3++) {
  if (VAR_3->lp_pid == VAR_1)
   return VAR_3->bfa_tag;
 }


 return 0;
}
