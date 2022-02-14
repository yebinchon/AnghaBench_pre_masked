
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef scalar_t__ u32 ;
struct kwqe {int dummy; } ;
struct fcoe_kwqe_conn_enable_disable {scalar_t__ context_id; scalar_t__ conn_id; } ;
struct fcoe_conn_enable_disable_ramrod_params {int enable_disable_kwqe; } ;
struct cnic_local {int dummy; } ;
struct cnic_dev {scalar_t__ max_fcoe_conn; int netdev; struct cnic_local* cnic_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct fcoe_conn_enable_disable_ramrod_params* FUNC_0 (struct cnic_local*,scalar_t__,union l5cm_specific_data*) ;
 int FUNC_1 (struct cnic_dev*,int ,scalar_t__,int ,union l5cm_specific_data*) ;
 int FUNC_2 (int *,struct fcoe_kwqe_conn_enable_disable*,int) ;
 int FUNC_3 (struct fcoe_conn_enable_disable_ramrod_params*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_6, struct kwqe *VAR_7)
{
 struct fcoe_kwqe_conn_enable_disable *VAR_8;
 struct fcoe_conn_enable_disable_ramrod_params *VAR_9;
 union l5cm_specific_data VAR_10;
 int VAR_11;
 u32 VAR_12, VAR_13;
 struct cnic_local *VAR_14 = VAR_6->cnic_priv;

 VAR_8 = (struct fcoe_kwqe_conn_enable_disable *) VAR_7;
 VAR_12 = VAR_8->context_id;
 VAR_13 = VAR_8->conn_id;
 if (VAR_13 >= VAR_6->max_fcoe_conn)
  return -VAR_2;

 VAR_13 += VAR_0;

 if (sizeof(*VAR_9) > VAR_1) {
  FUNC_4(VAR_6->netdev, "fcoe_disable size too big\n");
  return -VAR_3;
 }
 VAR_9 = FUNC_0(VAR_14, VAR_13, &VAR_10);
 if (!VAR_9)
  return -VAR_3;

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 FUNC_2(&VAR_9->enable_disable_kwqe, VAR_8, sizeof(*VAR_8));
 VAR_11 = FUNC_1(VAR_6, VAR_5, VAR_12,
      VAR_4, &VAR_10);
 return VAR_11;
}
