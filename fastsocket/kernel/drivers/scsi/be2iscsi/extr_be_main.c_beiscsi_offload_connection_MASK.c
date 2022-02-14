
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wrb_handle {int wrb_index; int pwrb; } ;
struct iscsi_task {TYPE_1__* conn; } ;
struct iscsi_target_context_update_wrb {int dummy; } ;
struct iscsi_session {int lock; } ;
struct beiscsi_offload_params {int dummy; } ;
struct beiscsi_hba {scalar_t__ db_va; int init_mem; } ;
struct beiscsi_conn {int beiscsi_conn_cid; scalar_t__ login_in_progress; struct iscsi_task* task; struct beiscsi_hba* phba; } ;
struct TYPE_2__ {struct iscsi_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct wrb_handle* FUNC_0 (struct beiscsi_hba*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (struct beiscsi_offload_params*,struct wrb_handle*,int ) ;
 int FUNC_4 (struct beiscsi_offload_params*,struct wrb_handle*) ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (struct beiscsi_hba*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct beiscsi_conn *VAR_5,
      struct beiscsi_offload_params *VAR_6)
{
 struct wrb_handle *VAR_7;
 struct beiscsi_hba *VAR_8 = VAR_5->phba;
 struct iscsi_task *VAR_9 = VAR_5->task;
 struct iscsi_session *VAR_10 = VAR_9->conn->session;
 u32 VAR_11 = 0;





 VAR_5->login_in_progress = 0;
 FUNC_7(&VAR_10->lock);
 FUNC_2(VAR_9);
 FUNC_8(&VAR_10->lock);

 VAR_7 = FUNC_0(VAR_8, VAR_5->beiscsi_conn_cid);


 if (FUNC_6(VAR_8))
  FUNC_3(VAR_6, VAR_7,
           VAR_8->init_mem);
 else
  FUNC_4(VAR_6, VAR_7);

 FUNC_1(VAR_7->pwrb,
    sizeof(struct iscsi_target_context_update_wrb));

 VAR_11 |= VAR_5->beiscsi_conn_cid & VAR_4;
 VAR_11 |= (VAR_7->wrb_index & VAR_1)
        << VAR_2;
 VAR_11 |= 1 << VAR_0;

 FUNC_5(VAR_11, VAR_8->db_va + VAR_3);
}
