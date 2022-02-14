
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* wwn_t ;
typedef int u8 ;
typedef int u16 ;
struct bfa_lps_s {int auth_en; int fdisc; void* nwwn; void* pwwn; int pdusz; int alpa; void* uarg; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_lps_s*,int ) ;

void
FUNC_1(struct bfa_lps_s *VAR_2, void *VAR_3, u8 VAR_4, u16 VAR_5,
 wwn_t VAR_6, wwn_t VAR_7, bfa_boolean_t VAR_8)
{
 VAR_2->uarg = VAR_3;
 VAR_2->alpa = VAR_4;
 VAR_2->pdusz = VAR_5;
 VAR_2->pwwn = VAR_6;
 VAR_2->nwwn = VAR_7;
 VAR_2->fdisc = VAR_0;
 VAR_2->auth_en = VAR_8;
 FUNC_0(VAR_2, VAR_1);
}
