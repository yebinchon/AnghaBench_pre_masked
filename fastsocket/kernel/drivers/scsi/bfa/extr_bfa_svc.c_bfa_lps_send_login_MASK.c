
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_lps_login_req_s {int mh; int auth_en; int fdisc; int nwwn; int pwwn; int pdu_size; int alpa; int bfa_tag; } ;
struct bfa_lps_s {int qe; int reqq; int bfa; int auth_en; int fdisc; int nwwn; int pwwn; int pdusz; int alpa; int bfa_tag; } ;
struct bfa_lps_mod_s {int lps_login_q; } ;


 struct bfa_lps_mod_s* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct bfi_lps_login_req_s* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bfa_lps_s *VAR_2)
{
 struct bfa_lps_mod_s *VAR_3 = FUNC_0(VAR_2->bfa);
 struct bfi_lps_login_req_s *VAR_4;

 VAR_4 = FUNC_3(VAR_2->bfa, VAR_2->reqq);
 FUNC_1(!VAR_4);

 FUNC_5(VAR_4->mh, VAR_1, VAR_0,
  FUNC_2(VAR_2->bfa));

 VAR_4->bfa_tag = VAR_2->bfa_tag;
 VAR_4->alpa = VAR_2->alpa;
 VAR_4->pdu_size = FUNC_6(VAR_2->pdusz);
 VAR_4->pwwn = VAR_2->pwwn;
 VAR_4->nwwn = VAR_2->nwwn;
 VAR_4->fdisc = VAR_2->fdisc;
 VAR_4->auth_en = VAR_2->auth_en;

 FUNC_4(VAR_2->bfa, VAR_2->reqq, VAR_4->mh);
 FUNC_8(&VAR_2->qe);
 FUNC_7(&VAR_2->qe, &VAR_3->lps_login_q);
}
