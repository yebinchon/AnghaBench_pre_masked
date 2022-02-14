
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u32 ;
struct kwqe {int dummy; } ;
struct fcoe_stat_ramrod_params {int stat_kwqe; } ;
struct fcoe_kwqe_stat {int dummy; } ;
struct cnic_local {int fcoe_init_cid; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_local*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fcoe_stat_ramrod_params* FUNC_1 (struct cnic_local*,int ,union l5cm_specific_data*) ;
 int FUNC_2 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_3 (int *,struct fcoe_kwqe_stat*,int) ;
 int FUNC_4 (struct fcoe_stat_ramrod_params*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_4, struct kwqe *VAR_5)
{
 struct fcoe_kwqe_stat *VAR_6;
 struct fcoe_stat_ramrod_params *VAR_7;
 union l5cm_specific_data VAR_8;
 struct cnic_local *VAR_9 = VAR_4->cnic_priv;
 int VAR_10;
 u32 VAR_11;

 VAR_6 = (struct fcoe_kwqe_stat *) VAR_5;
 VAR_11 = FUNC_0(VAR_9, VAR_9->fcoe_init_cid);

 VAR_7 = FUNC_1(VAR_9, VAR_0, &VAR_8);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));
 FUNC_3(&VAR_7->stat_kwqe, VAR_6, sizeof(*VAR_6));

 VAR_10 = FUNC_2(VAR_4, VAR_3, VAR_11,
      VAR_2, &VAR_8);
 return VAR_10;
}
