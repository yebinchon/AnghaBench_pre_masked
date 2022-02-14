
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct fc_lport {scalar_t__ mfs; int e_d_tov; int wwnn; int wwpn; } ;
struct fc_els_csp {int sp_hi_ver; int sp_lo_ver; int sp_e_d_tov; void* sp_rel_off; void* sp_tot_seq; void* sp_features; void* sp_bb_data; void* sp_bb_cred; } ;
struct fc_els_flogi {struct fc_els_cssp* fl_cssp; struct fc_els_csp fl_csp; int fl_wwnn; int fl_wwpn; scalar_t__ fl_cmd; } ;
struct fc_els_cssp {int cp_open_seq; void* cp_con_seq; void* cp_rdfs; void* cp_class; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct fc_els_flogi*,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct fc_lport *VAR_4,
    struct fc_els_flogi *VAR_5,
    unsigned int VAR_6)
{
 struct fc_els_csp *VAR_7;
 struct fc_els_cssp *VAR_8;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->fl_cmd = (u8) VAR_6;
 FUNC_3(VAR_4->wwpn, &VAR_5->fl_wwpn);
 FUNC_3(VAR_4->wwnn, &VAR_5->fl_wwnn);
 VAR_7 = &VAR_5->fl_csp;
 VAR_7->sp_hi_ver = 0x20;
 VAR_7->sp_lo_ver = 0x20;
 VAR_7->sp_bb_cred = FUNC_1(10);
 VAR_7->sp_bb_data = FUNC_1((u16) VAR_4->mfs);
 VAR_8 = &VAR_5->fl_cssp[3 - 1];
 VAR_8->cp_class = FUNC_1(VAR_2 | VAR_1);
 if (VAR_6 != VAR_0) {
  VAR_7->sp_features = FUNC_1(VAR_3);
  VAR_7->sp_tot_seq = FUNC_1(255);
  VAR_7->sp_rel_off = FUNC_1(0x1f);
  VAR_7->sp_e_d_tov = FUNC_0(VAR_4->e_d_tov);

  VAR_8->cp_rdfs = FUNC_1((u16) VAR_4->mfs);
  VAR_8->cp_con_seq = FUNC_1(255);
  VAR_8->cp_open_seq = 1;
 }
}
