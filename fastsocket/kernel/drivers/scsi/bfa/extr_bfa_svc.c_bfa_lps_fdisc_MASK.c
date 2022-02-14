
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* wwn_t ;
typedef int u16 ;
struct bfa_lps_s {int auth_en; int fdisc; void* nwwn; void* pwwn; int pdusz; scalar_t__ alpa; void* uarg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_lps_s*,int ) ;

void
FUNC_1(struct bfa_lps_s *VAR_3, void *VAR_4, u16 VAR_5, wwn_t VAR_6,
 wwn_t VAR_7)
{
 VAR_3->uarg = VAR_4;
 VAR_3->alpa = 0;
 VAR_3->pdusz = VAR_5;
 VAR_3->pwwn = VAR_6;
 VAR_3->nwwn = VAR_7;
 VAR_3->fdisc = VAR_2;
 VAR_3->auth_en = VAR_0;
 FUNC_0(VAR_3, VAR_1);
}
