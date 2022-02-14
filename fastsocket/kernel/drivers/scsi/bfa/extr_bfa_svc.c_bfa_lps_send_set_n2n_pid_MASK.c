
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_lps_n2n_pid_req_s {int mh; int lp_pid; int fw_tag; } ;
struct bfa_lps_s {int reqq; int bfa; int lp_pid; int fw_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct bfi_lps_n2n_pid_req_s* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_lps_s *VAR_2)
{
 struct bfi_lps_n2n_pid_req_s *VAR_3;

 VAR_3 = FUNC_2(VAR_2->bfa, VAR_2->reqq);
 FUNC_0(!VAR_3);

 FUNC_4(VAR_3->mh, VAR_1, VAR_0,
  FUNC_1(VAR_2->bfa));

 VAR_3->fw_tag = VAR_2->fw_tag;
 VAR_3->lp_pid = VAR_2->lp_pid;
 FUNC_3(VAR_2->bfa, VAR_2->reqq, VAR_3->mh);
}
