
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tm_rsp {int itt; void* max_cmdsn; void* exp_cmdsn; int response; int flags; int opcode; } ;
struct iscsi_task {scalar_t__ hdr; struct beiscsi_io_task* dd_data; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct common_sol_cqe {scalar_t__ cmd_wnd; scalar_t__ exp_cmdsn; int i_resp; int i_flags; } ;
struct beiscsi_io_task {int libiscsi_itt; } ;
struct beiscsi_conn {struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct beiscsi_conn *VAR_1,
   struct iscsi_task *VAR_2,
   struct common_sol_cqe *VAR_3)
{
 struct iscsi_tm_rsp *VAR_4;
 struct iscsi_conn *VAR_5 = VAR_1->conn;
 struct beiscsi_io_task *VAR_6 = VAR_2->dd_data;

 VAR_4 = (struct iscsi_tm_rsp *)VAR_2->hdr;
 VAR_4->opcode = VAR_0;
 VAR_4->flags = VAR_3->i_flags;
 VAR_4->response = VAR_3->i_resp;
 VAR_4->exp_cmdsn = FUNC_1(VAR_3->exp_cmdsn);
 VAR_4->max_cmdsn = FUNC_1(VAR_3->exp_cmdsn +
         VAR_3->cmd_wnd - 1);

 VAR_4->itt = VAR_6->libiscsi_itt;
 FUNC_0(VAR_5, (struct iscsi_hdr *)VAR_4, ((void*)0), 0);
}
