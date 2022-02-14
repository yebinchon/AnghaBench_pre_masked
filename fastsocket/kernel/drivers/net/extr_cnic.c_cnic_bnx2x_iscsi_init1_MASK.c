
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kwqe {int dummy; } ;
struct iscsi_kwqe_init1 {int num_tasks_per_conn; int num_ccells_per_conn; int rq_num_wqes; int rq_buffer_size; int cq_num_wqes; int num_cqs; } ;
struct cnic_local {int num_iscsi_tasks; int num_ccells; int task_array_size; int r2tq_size; int hq_size; int num_cqs; int pfid; } ;
struct cnic_dev {int max_iscsi_conn; int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int) ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ) ;
 struct bnx2x* FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct cnic_dev *VAR_10, struct kwqe *VAR_11)
{
 struct cnic_local *VAR_12 = VAR_10->cnic_priv;
 struct bnx2x *VAR_13 = FUNC_25(VAR_10->netdev);
 struct iscsi_kwqe_init1 *VAR_14 = (struct iscsi_kwqe_init1 *) VAR_11;
 int VAR_15, VAR_16;
 u32 VAR_17 = VAR_12->pfid;

 VAR_12->num_iscsi_tasks = VAR_14->num_tasks_per_conn;
 VAR_12->num_ccells = VAR_14->num_ccells_per_conn;
 VAR_12->task_array_size = VAR_7 *
         VAR_12->num_iscsi_tasks;
 VAR_12->r2tq_size = VAR_12->num_iscsi_tasks * VAR_5 *
   VAR_6;
 VAR_12->hq_size = VAR_12->num_ccells * VAR_4;
 VAR_16 = FUNC_7(VAR_12->hq_size) / VAR_9;
 VAR_15 = VAR_16 * (VAR_9 / VAR_4);
 VAR_12->num_cqs = VAR_14->num_cqs;

 if (!VAR_10->max_iscsi_conn)
  return 0;


 FUNC_0(VAR_10, VAR_1 + FUNC_11(VAR_17),
    VAR_14->rq_num_wqes);
 FUNC_0(VAR_10, VAR_1 + FUNC_10(VAR_17),
    VAR_9);
 FUNC_1(VAR_10, VAR_1 +
   FUNC_9(VAR_17), VAR_8);
 FUNC_0(VAR_10, VAR_1 +
    FUNC_8(VAR_17),
    VAR_14->num_tasks_per_conn);


 FUNC_0(VAR_10, VAR_2 +
    FUNC_17(VAR_17),
    VAR_14->rq_buffer_size);
 FUNC_0(VAR_10, VAR_2 + FUNC_15(VAR_17),
    VAR_9);
 FUNC_1(VAR_10, VAR_2 +
   FUNC_14(VAR_17), VAR_8);
 FUNC_0(VAR_10, VAR_2 +
    FUNC_13(VAR_17),
    VAR_14->num_tasks_per_conn);
 FUNC_0(VAR_10, VAR_2 + FUNC_18(VAR_17),
    VAR_14->rq_num_wqes);
 FUNC_0(VAR_10, VAR_2 + FUNC_12(VAR_17),
    VAR_14->cq_num_wqes);
 FUNC_0(VAR_10, VAR_2 + FUNC_16(VAR_17),
    VAR_12->num_iscsi_tasks * VAR_5);


 FUNC_0(VAR_10, VAR_3 + FUNC_22(VAR_17),
    VAR_9);
 FUNC_1(VAR_10, VAR_3 +
   FUNC_21(VAR_17), VAR_8);
 FUNC_0(VAR_10, VAR_3 +
    FUNC_20(VAR_17),
    VAR_14->num_tasks_per_conn);
 FUNC_0(VAR_10, VAR_3 + FUNC_19(VAR_17),
    VAR_15);
 FUNC_0(VAR_10, VAR_3 + FUNC_24(VAR_17),
    VAR_14->num_tasks_per_conn);
 FUNC_0(VAR_10, VAR_3 + FUNC_23(VAR_17),
    VAR_12->num_iscsi_tasks * VAR_5);


 FUNC_0(VAR_10, VAR_0 + FUNC_6(VAR_17),
    VAR_9);
 FUNC_1(VAR_10, VAR_0 +
   FUNC_5(VAR_17), VAR_8);
 FUNC_0(VAR_10, VAR_0 +
    FUNC_4(VAR_17),
    VAR_14->num_tasks_per_conn);
 FUNC_0(VAR_10, VAR_0 + FUNC_2(VAR_17),
    VAR_14->cq_num_wqes);
 FUNC_0(VAR_10, VAR_0 + FUNC_3(VAR_17),
    VAR_15);

 return 0;
}
