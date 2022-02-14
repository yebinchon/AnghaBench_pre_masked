
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_profile {int num_mcg; } ;
struct TYPE_6__ {int fw_icm; } ;
struct TYPE_5__ {int inta_pin; } ;
struct mlx4_priv {TYPE_3__ fw; TYPE_2__ eq_table; } ;
struct mlx4_mod_stat_cfg {int log_pg_sz_m; scalar_t__ log_pg_sz; } ;
struct mlx4_init_hca_param {int log_uar_sz; int hca_core_clock; scalar_t__ mw_enabled; scalar_t__ uar_page_sz; } ;
struct mlx4_dev_cap {int dummy; } ;
struct TYPE_4__ {scalar_t__ steering_mode; int max_fmr_maps; int flags; int bmme_flags; int flags2; int hca_core_clock; int num_uars; int num_mpts; } ;
struct mlx4_dev {int board_id; TYPE_1__ caps; } ;
struct mlx4_adapter {int board_id; int inta_pin; } ;
typedef int init_hca ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 struct mlx4_profile VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct mlx4_init_hca_param*,int ,int) ;
 int FUNC_6 (struct mlx4_dev*,int ) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_8 (struct mlx4_dev*,struct mlx4_mod_stat_cfg*) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_adapter*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*,struct mlx4_init_hca_param*) ;
 int FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (struct mlx4_dev*,char*) ;
 int FUNC_14 (struct mlx4_dev*,struct mlx4_dev_cap*) ;
 int FUNC_15 (struct mlx4_dev*,char*) ;
 int FUNC_16 (struct mlx4_dev*,int ,int ) ;
 int FUNC_17 (struct mlx4_dev*) ;
 int FUNC_18 (struct mlx4_dev*,char*) ;
 int FUNC_19 (struct mlx4_dev*,struct mlx4_dev_cap*,struct mlx4_init_hca_param*,int) ;
 int FUNC_20 (struct mlx4_dev*) ;
 scalar_t__ FUNC_21 (struct mlx4_dev*) ;
 scalar_t__ FUNC_22 (struct mlx4_dev*) ;
 int FUNC_23 (struct mlx4_dev*) ;
 int FUNC_24 (struct mlx4_dev*,struct mlx4_profile*,struct mlx4_dev_cap*,struct mlx4_init_hca_param*) ;
 int FUNC_25 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_26 (struct mlx4_dev*) ;
 int FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*) ;
 int FUNC_29 (struct mlx4_dev*) ;
 int FUNC_30 (struct mlx4_dev*,char*) ;
 int FUNC_31 (struct mlx4_dev*) ;
 int FUNC_32 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_33(struct mlx4_dev *VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_26(VAR_9);
 struct mlx4_adapter VAR_11;
 struct mlx4_dev_cap VAR_12;
 struct mlx4_mod_stat_cfg VAR_13;
 struct mlx4_profile VAR_14;
 struct mlx4_init_hca_param VAR_15;
 u64 VAR_16;
 int VAR_17;

 if (!FUNC_22(VAR_9)) {
  VAR_17 = FUNC_10(VAR_9);
  if (VAR_17) {
   if (VAR_17 == -VAR_0)
    FUNC_18(VAR_9, "non-primary physical function, skipping.\n");
   else
    FUNC_15(VAR_9, "QUERY_FW command failed, aborting.\n");
   return VAR_17;
  }

  VAR_17 = FUNC_23(VAR_9);
  if (VAR_17) {
   FUNC_15(VAR_9, "Failed to start FW, aborting.\n");
   return VAR_17;
  }

  VAR_13.log_pg_sz_m = 1;
  VAR_13.log_pg_sz = 0;
  VAR_17 = FUNC_8(VAR_9, &VAR_13);
  if (VAR_17)
   FUNC_30(VAR_9, "Failed to override log_pg_sz parameter\n");

  VAR_17 = FUNC_14(VAR_9, &VAR_12);
  if (VAR_17) {
   FUNC_15(VAR_9, "QUERY_DEV_CAP command failed, aborting.\n");
   goto err_stop_fw;
  }

  FUNC_0(VAR_9, &VAR_12);

  if (FUNC_21(VAR_9))
   FUNC_25(VAR_9);

  VAR_14 = VAR_8;
  if (VAR_9->caps.steering_mode ==
      VAR_6)
   VAR_14.num_mcg = VAR_5;

  VAR_16 = FUNC_24(VAR_9, &VAR_14, &VAR_12,
          &VAR_15);
  if ((long long) VAR_16 < 0) {
   VAR_17 = VAR_16;
   goto err_stop_fw;
  }

  VAR_9->caps.max_fmr_maps = (1 << (32 - FUNC_1(VAR_9->caps.num_mpts))) - 1;

  VAR_15.log_uar_sz = FUNC_1(VAR_9->caps.num_uars);
  VAR_15.uar_page_sz = VAR_7 - 12;
  VAR_15.mw_enabled = 0;
  if (VAR_9->caps.flags & VAR_4 ||
      VAR_9->caps.bmme_flags & VAR_2)
   VAR_15.mw_enabled = VAR_1;

  VAR_17 = FUNC_19(VAR_9, &VAR_12, &VAR_15, VAR_16);
  if (VAR_17)
   goto err_stop_fw;

  VAR_17 = FUNC_7(VAR_9, &VAR_15);
  if (VAR_17) {
   FUNC_15(VAR_9, "INIT_HCA command failed, aborting.\n");
   goto err_free_icm;
  }




  if (VAR_9->caps.flags2 & VAR_3) {
   FUNC_5(&VAR_15, 0, sizeof(VAR_15));
   VAR_17 = FUNC_11(VAR_9, &VAR_15);
   if (VAR_17) {
    FUNC_15(VAR_9, "QUERY_HCA command failed, disable timestamp.\n");
    VAR_9->caps.flags2 &= ~VAR_3;
   } else {
    VAR_9->caps.hca_core_clock =
     VAR_15.hca_core_clock;
   }




   if (!VAR_9->caps.hca_core_clock) {
    VAR_9->caps.flags2 &= ~VAR_3;
    FUNC_15(VAR_9,
      "HCA frequency is 0. Timestamping is not supported.");
   } else if (FUNC_3(VAR_9)) {




    VAR_9->caps.flags2 &= ~VAR_3;
    FUNC_15(VAR_9, "Failed to map internal clock. Timestamping is not supported.\n");
   }
  }
 } else {
  VAR_17 = FUNC_20(VAR_9);
  if (VAR_17) {
   FUNC_15(VAR_9, "Failed to initialize slave\n");
   return VAR_17;
  }

  VAR_17 = FUNC_28(VAR_9);
  if (VAR_17) {
   FUNC_15(VAR_9, "Failed to obtain slave caps\n");
   goto err_close;
  }
 }

 if (FUNC_2(VAR_9))
  FUNC_13(VAR_9, "Failed to map blue flame area\n");


 if (!FUNC_22(VAR_9))
  FUNC_27(VAR_9);

 VAR_17 = FUNC_9(VAR_9, &VAR_11);
 if (VAR_17) {
  FUNC_15(VAR_9, "QUERY_ADAPTER command failed, aborting.\n");
  goto unmap_bf;
 }

 VAR_10->eq_table.inta_pin = VAR_11.inta_pin;
 FUNC_4(VAR_9->board_id, VAR_11.board_id, sizeof VAR_9->board_id);

 return 0;

unmap_bf:
 FUNC_32(VAR_9);
 FUNC_31(VAR_9);

err_close:
 if (FUNC_22(VAR_9))
  FUNC_29(VAR_9);
 else
  FUNC_6(VAR_9, 0);

err_free_icm:
 if (!FUNC_22(VAR_9))
  FUNC_17(VAR_9);

err_stop_fw:
 if (!FUNC_22(VAR_9)) {
  FUNC_12(VAR_9);
  FUNC_16(VAR_9, VAR_10->fw.fw_icm, 0);
 }
 return VAR_17;
}
