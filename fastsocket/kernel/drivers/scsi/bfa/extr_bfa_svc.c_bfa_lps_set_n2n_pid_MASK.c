
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bfa_lps_s {int lp_pid; int bfa; int bfa_tag; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_lps_s*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(struct bfa_lps_s *VAR_1, uint32_t VAR_2)
{
 FUNC_1(VAR_1->bfa, VAR_1->bfa_tag);
 FUNC_1(VAR_1->bfa, VAR_2);

 VAR_1->lp_pid = VAR_2;
 FUNC_0(VAR_1, VAR_0);
}
