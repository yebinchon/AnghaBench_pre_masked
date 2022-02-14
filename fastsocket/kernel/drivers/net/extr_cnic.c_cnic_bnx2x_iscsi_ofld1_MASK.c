
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int dummy; } ;
struct kcqe {int dummy; } ;
struct iscsi_kwqe_conn_offload2 {int num_additional_wqes; } ;
struct iscsi_kwqe_conn_offload1 {int iscsi_conn_id; } ;
struct iscsi_kcqe {int iscsi_conn_id; int iscsi_conn_context_id; int completion_status; int op_code; } ;
struct cnic_local {struct cnic_context* ctx_tbl; int iscsi_conn; } ;
struct cnic_dev {scalar_t__ max_iscsi_conn; struct cnic_local* cnic_priv; } ;
struct cnic_context {int cid; int ctx_flags; } ;
typedef int kcqe ;


 int FUNC_0 (struct cnic_local*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct cnic_dev*,int) ;
 int FUNC_4 (struct cnic_dev*,int) ;
 int FUNC_5 (struct cnic_dev*,int ,struct kcqe**,int) ;
 int FUNC_6 (struct cnic_dev*,struct kwqe**,int) ;
 int FUNC_7 (struct iscsi_kcqe*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct cnic_dev *VAR_8, struct kwqe *VAR_9[],
       u32 VAR_10, int *VAR_11)
{
 struct iscsi_kwqe_conn_offload1 *VAR_12;
 struct iscsi_kwqe_conn_offload2 *VAR_13;
 struct cnic_local *VAR_14 = VAR_8->cnic_priv;
 struct cnic_context *VAR_15;
 struct iscsi_kcqe VAR_16;
 struct kcqe *VAR_17[1];
 u32 VAR_18;
 int VAR_19 = 0;

 if (VAR_10 < 2) {
  *VAR_11 = VAR_10;
  return -VAR_2;
 }

 VAR_12 = (struct iscsi_kwqe_conn_offload1 *) VAR_9[0];
 VAR_13 = (struct iscsi_kwqe_conn_offload2 *) VAR_9[1];
 if ((VAR_10 - 2) < VAR_13->num_additional_wqes) {
  *VAR_11 = VAR_10;
  return -VAR_2;
 }
 *VAR_11 = 2 + VAR_13->num_additional_wqes;

 VAR_18 = VAR_12->iscsi_conn_id;
 if (VAR_18 >= VAR_7)
  return -VAR_2;

 FUNC_7(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.op_code = VAR_6;
 VAR_16.iscsi_conn_id = VAR_18;
 VAR_16.completion_status = VAR_4;

 VAR_15 = &VAR_14->ctx_tbl[VAR_18];
 if (FUNC_8(VAR_1, &VAR_15->ctx_flags)) {
  VAR_16.completion_status =
   VAR_3;
  goto done;
 }

 if (FUNC_2(&VAR_14->iscsi_conn) > VAR_8->max_iscsi_conn) {
  FUNC_1(&VAR_14->iscsi_conn);
  goto done;
 }
 VAR_19 = FUNC_3(VAR_8, VAR_18);
 if (VAR_19) {
  FUNC_1(&VAR_14->iscsi_conn);
  VAR_19 = 0;
  goto done;
 }
 VAR_19 = FUNC_6(VAR_8, VAR_9, VAR_10);
 if (VAR_19 < 0) {
  FUNC_4(VAR_8, VAR_18);
  FUNC_1(&VAR_14->iscsi_conn);
  goto done;
 }

 VAR_16.completion_status = VAR_5;
 VAR_16.iscsi_conn_context_id = FUNC_0(VAR_14, VAR_14->ctx_tbl[VAR_18].cid);

done:
 VAR_17[0] = (struct kcqe *) &VAR_16;
 FUNC_5(VAR_8, VAR_0, VAR_17, 1);
 return 0;
}
