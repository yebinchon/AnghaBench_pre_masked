
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_init_hca_param {int global_caps; int hca_core_clock; int qpc_base; int log_num_qps; int srqc_base; int log_num_srqs; int cqc_base; int log_num_cqs; int altc_base; int auxc_base; int eqc_base; int log_num_eqs; int rdmarc_base; int log_rd_per_qp; scalar_t__ steering_mode; int mc_base; int log_mc_entry_sz; int log_mc_table_sz; int log_mc_hash_sz; int dmpt_base; int mw_enabled; int log_mpt_sz; int mtt_base; int cmpt_base; int uar_page_sz; int log_uar_sz; int dev_cap_enabled; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (int,int *,int ) ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_37 ;
 int VAR_38 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*) ;

int FUNC_7(struct mlx4_dev *VAR_39,
     struct mlx4_init_hca_param *VAR_40)
{
 struct mlx4_cmd_mailbox *VAR_41;
 __be32 *VAR_42;
 u32 VAR_43;
 int VAR_44;
 u8 VAR_45;




 VAR_41 = FUNC_3(VAR_39);
 if (FUNC_0(VAR_41))
  return FUNC_2(VAR_41);
 VAR_42 = VAR_41->buf;

 VAR_44 = FUNC_4(VAR_39, 0, VAR_41->dma, 0, 0,
      VAR_30,
      VAR_31,
      !FUNC_6(VAR_39));
 if (VAR_44)
  goto out;

 FUNC_1(VAR_40->global_caps, VAR_42, 0x04);
 FUNC_1(VAR_40->hca_core_clock, VAR_42, 0x0c);



 FUNC_1(VAR_40->qpc_base, VAR_42, VAR_24);
 FUNC_1(VAR_40->log_num_qps, VAR_42, VAR_18);
 FUNC_1(VAR_40->srqc_base, VAR_42, VAR_26);
 FUNC_1(VAR_40->log_num_srqs, VAR_42, VAR_20);
 FUNC_1(VAR_40->cqc_base, VAR_42, VAR_3);
 FUNC_1(VAR_40->log_num_cqs, VAR_42, VAR_12);
 FUNC_1(VAR_40->altc_base, VAR_42, VAR_0);
 FUNC_1(VAR_40->auxc_base, VAR_42, VAR_1);
 FUNC_1(VAR_40->eqc_base, VAR_42, VAR_6);
 FUNC_1(VAR_40->log_num_eqs, VAR_42, VAR_13);
 FUNC_1(VAR_40->rdmarc_base, VAR_42, VAR_25);
 FUNC_1(VAR_40->log_rd_per_qp, VAR_42, VAR_19);

 FUNC_1(VAR_43, VAR_42, VAR_8);
 if (VAR_43 & (1 << VAR_4)) {
  VAR_40->steering_mode = VAR_36;
 } else {
  FUNC_1(VAR_45, VAR_42, VAR_29);
  if (VAR_45 & 0x8)
   VAR_40->steering_mode = VAR_35;
  else
   VAR_40->steering_mode = VAR_34;
 }

 if (VAR_40->steering_mode == VAR_36) {
  FUNC_1(VAR_40->mc_base, VAR_42, VAR_9);
  FUNC_1(VAR_40->log_mc_entry_sz, VAR_42,
    VAR_10);
  FUNC_1(VAR_40->log_mc_table_sz, VAR_42,
    VAR_11);
 } else {
  FUNC_1(VAR_40->mc_base, VAR_42, VAR_22);
  FUNC_1(VAR_40->log_mc_entry_sz, VAR_42,
    VAR_14);
  FUNC_1(VAR_40->log_mc_hash_sz, VAR_42,
    VAR_15);
  FUNC_1(VAR_40->log_mc_table_sz, VAR_42,
    VAR_16);
 }


 FUNC_1(VAR_45, VAR_42, VAR_7);
 if (VAR_45 & 0x20)
  VAR_40->dev_cap_enabled |= VAR_33;
 if (VAR_45 & 0x40)
  VAR_40->dev_cap_enabled |= VAR_32;



 FUNC_1(VAR_40->dmpt_base, VAR_42, VAR_5);
 FUNC_1(VAR_40->mw_enabled, VAR_42, VAR_27);
 FUNC_1(VAR_40->log_mpt_sz, VAR_42, VAR_17);
 FUNC_1(VAR_40->mtt_base, VAR_42, VAR_23);
 FUNC_1(VAR_40->cmpt_base, VAR_42, VAR_2);



 FUNC_1(VAR_40->uar_page_sz, VAR_42, VAR_28);
 FUNC_1(VAR_40->log_uar_sz, VAR_42, VAR_21);

out:
 FUNC_5(VAR_39, VAR_41);

 return VAR_44;
}
