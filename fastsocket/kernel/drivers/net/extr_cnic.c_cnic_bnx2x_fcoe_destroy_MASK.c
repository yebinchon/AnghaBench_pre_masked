
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union l5cm_specific_data {size_t fcoe_conn_id; size_t fcoe_conn_context_id; int op_code; scalar_t__ completion_status; } ;
typedef size_t u32 ;
struct kwqe {int dummy; } ;
struct kcqe {int dummy; } ;
struct fcoe_kwqe_conn_destroy {size_t context_id; size_t conn_id; } ;
struct fcoe_kcqe {size_t fcoe_conn_id; size_t fcoe_conn_context_id; int op_code; scalar_t__ completion_status; } ;
struct cnic_local {int delete_task; struct cnic_context* ctx_tbl; } ;
struct cnic_dev {size_t max_fcoe_conn; struct cnic_local* cnic_priv; } ;
struct cnic_context {int ctx_flags; scalar_t__ wait_cond; int waitq; } ;
typedef int l5_data ;
typedef int kcqe ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cnic_dev*,int ,struct kcqe**,int) ;
 int FUNC_1 (struct cnic_dev*,int ,size_t,int ,union l5cm_specific_data*) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union l5cm_specific_data*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct cnic_dev *VAR_10, struct kwqe *VAR_11)
{
 struct fcoe_kwqe_conn_destroy *VAR_12;
 union l5cm_specific_data VAR_13;
 int VAR_14;
 u32 VAR_15, VAR_16;
 struct cnic_local *VAR_17 = VAR_10->cnic_priv;
 struct cnic_context *VAR_18;
 struct fcoe_kcqe VAR_19;
 struct kcqe *VAR_20[1];

 VAR_12 = (struct fcoe_kwqe_conn_destroy *) VAR_11;
 VAR_15 = VAR_12->context_id;
 VAR_16 = VAR_12->conn_id;
 if (VAR_16 >= VAR_10->max_fcoe_conn)
  return -VAR_4;

 VAR_16 += VAR_0;

 VAR_18 = &VAR_17->ctx_tbl[VAR_16];

 FUNC_2(&VAR_18->waitq);
 VAR_18->wait_cond = 0;

 FUNC_3(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.completion_status = VAR_6;
 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 VAR_14 = FUNC_1(VAR_10, VAR_8, VAR_15,
      VAR_5, &VAR_13);
 if (VAR_14 == 0) {
  FUNC_7(VAR_18->waitq, VAR_18->wait_cond, VAR_1);
  if (VAR_18->wait_cond)
   VAR_19.completion_status = 0;
 }

 FUNC_6(VAR_3, &VAR_18->ctx_flags);
 FUNC_5(VAR_9, &VAR_17->delete_task, FUNC_4(2000));

 VAR_19.op_code = VAR_7;
 VAR_19.fcoe_conn_id = VAR_12->conn_id;
 VAR_19.fcoe_conn_context_id = VAR_15;

 VAR_20[0] = (struct kcqe *) &VAR_19;
 FUNC_0(VAR_10, VAR_2, VAR_20, 1);
 return VAR_14;
}
