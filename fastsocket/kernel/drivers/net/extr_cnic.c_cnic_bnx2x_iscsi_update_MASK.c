
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u32 ;
struct kwqe {int dummy; } ;
struct iscsi_kwqe_conn_update {int context_id; } ;
struct cnic_local {int dummy; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (struct cnic_local*,int ,union l5cm_specific_data*) ;
 scalar_t__ FUNC_2 (struct cnic_local*,int ,int *) ;
 int FUNC_3 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_4 (void*,struct kwqe*,int) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_4, struct kwqe *VAR_5)
{
 struct cnic_local *VAR_6 = VAR_4->cnic_priv;
 struct iscsi_kwqe_conn_update *VAR_7 =
  (struct iscsi_kwqe_conn_update *) VAR_5;
 void *VAR_8;
 union l5cm_specific_data VAR_9;
 u32 VAR_10, VAR_11 = FUNC_0(VAR_7->context_id);
 int VAR_12;

 if (FUNC_2(VAR_6, VAR_11, &VAR_10) != 0)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_6, VAR_10, &VAR_9);
 if (!VAR_8)
  return -VAR_1;

 FUNC_4(VAR_8, VAR_5, sizeof(struct kwqe));

 VAR_12 = FUNC_3(VAR_4, VAR_3,
   VAR_7->context_id, VAR_2, &VAR_9);
 return VAR_12;
}
