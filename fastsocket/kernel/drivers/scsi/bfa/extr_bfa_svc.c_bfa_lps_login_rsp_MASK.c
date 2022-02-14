
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_lps_login_rsp_s {scalar_t__ bfa_tag; int status; int ext_status; int lsrjt_expl; int lsrjt_rsn; int fcf_mac; int brcd_switch; int lp_mac; int auth_req; int node_name; int port_name; int bb_credit; int npiv_en; int lp_pid; int f_port; int fw_tag; } ;
struct bfa_s {int dummy; } ;
struct bfa_lps_s {int status; int qe; int ext_status; int lsrjt_expl; int lsrjt_rsn; int fcf_mac; int brcd_switch; int lp_mac; int auth_req; int pr_nwwn; int pr_pwwn; int pr_bbcred; int npiv_en; int lp_pid; int fport; int fw_tag; } ;
struct bfa_lps_mod_s {scalar_t__ num_lps; int lps_active_q; } ;


 struct bfa_lps_s* FUNC_0 (struct bfa_lps_mod_s*,scalar_t__) ;
 struct bfa_lps_mod_s* FUNC_1 (struct bfa_s*) ;
 int VAR_0 ;




 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bfa_lps_s*,int ) ;
 int FUNC_5 (struct bfa_lps_s*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct bfa_s *VAR_1, struct bfi_lps_login_rsp_s *VAR_2)
{
 struct bfa_lps_mod_s *VAR_3 = FUNC_1(VAR_1);
 struct bfa_lps_s *VAR_4;

 FUNC_2(VAR_2->bfa_tag >= VAR_3->num_lps);
 VAR_4 = FUNC_0(VAR_3, VAR_2->bfa_tag);

 VAR_4->status = VAR_2->status;
 switch (VAR_2->status) {
 case 129:
  VAR_4->fw_tag = VAR_2->fw_tag;
  VAR_4->fport = VAR_2->f_port;
  if (VAR_4->fport)
   VAR_4->lp_pid = VAR_2->lp_pid;
  VAR_4->npiv_en = VAR_2->npiv_en;
  VAR_4->pr_bbcred = FUNC_3(VAR_2->bb_credit);
  VAR_4->pr_pwwn = VAR_2->port_name;
  VAR_4->pr_nwwn = VAR_2->node_name;
  VAR_4->auth_req = VAR_2->auth_req;
  VAR_4->lp_mac = VAR_2->lp_mac;
  VAR_4->brcd_switch = VAR_2->brcd_switch;
  VAR_4->fcf_mac = VAR_2->fcf_mac;

  break;

 case 130:
  VAR_4->lsrjt_rsn = VAR_2->lsrjt_rsn;
  VAR_4->lsrjt_expl = VAR_2->lsrjt_expl;

  break;

 case 131:
  VAR_4->ext_status = VAR_2->ext_status;

  break;

 case 128:
  if (VAR_2->ext_status)
   FUNC_4(VAR_4, VAR_2->ext_status);
  break;

 default:

  break;
 }

 FUNC_7(&VAR_4->qe);
 FUNC_6(&VAR_4->qe, &VAR_3->lps_active_q);
 FUNC_5(VAR_4, VAR_0);
}
