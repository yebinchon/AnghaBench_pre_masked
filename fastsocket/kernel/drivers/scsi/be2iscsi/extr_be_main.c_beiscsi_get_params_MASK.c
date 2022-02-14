
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ios_per_ctrl; int cxns_per_ctrl; int asyncpdus_per_ctrl; int icds_per_ctrl; int eq_timer; int num_eq_entries; int num_cq_entries; int wrbs_per_cxn; int defpdu_data_sz; int defpdu_hdr_sz; int num_sge_per_io; } ;
struct TYPE_3__ {int iscsi_icd_count; int iscsi_cid_count; } ;
struct beiscsi_hba {TYPE_2__ params; TYPE_1__ fw_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_8)
{
 VAR_8->params.ios_per_ctrl = (VAR_8->fw_config.iscsi_icd_count
        - (VAR_8->fw_config.iscsi_cid_count
        + VAR_5
        + VAR_3));
 VAR_8->params.cxns_per_ctrl = VAR_8->fw_config.iscsi_cid_count;
 VAR_8->params.asyncpdus_per_ctrl = VAR_8->fw_config.iscsi_cid_count;
 VAR_8->params.icds_per_ctrl = VAR_8->fw_config.iscsi_icd_count;
 VAR_8->params.num_sge_per_io = VAR_4;
 VAR_8->params.defpdu_hdr_sz = VAR_2;
 VAR_8->params.defpdu_data_sz = VAR_1;
 VAR_8->params.eq_timer = 64;
 VAR_8->params.num_eq_entries =
     (((VAR_0 * 2 + VAR_8->fw_config.iscsi_cid_count * 2
        + VAR_5) / 512) + 1) * 512;
 VAR_8->params.num_eq_entries = (VAR_8->params.num_eq_entries < 1024)
    ? 1024 : VAR_8->params.num_eq_entries;
 FUNC_0(VAR_8, VAR_7, VAR_6,
      "BM_%d : phba->params.num_eq_entries=%d\n",
      VAR_8->params.num_eq_entries);
 VAR_8->params.num_cq_entries =
     (((VAR_0 * 2 + VAR_8->fw_config.iscsi_cid_count * 2
        + VAR_5) / 512) + 1) * 512;
 VAR_8->params.wrbs_per_cxn = 256;
}
