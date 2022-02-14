
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {scalar_t__ state; int dd_data; int sc; struct iscsi_conn* conn; } ;
struct iscsi_conn {TYPE_1__* session; struct bnx2i_conn* dd_data; } ;
struct bnx2i_hba {int dummy; } ;
struct bnx2i_conn {int cmd_cleanup_cmpl; struct bnx2i_hba* hba; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2i_hba*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct iscsi_task *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_3->conn;
 struct bnx2i_conn *VAR_5 = VAR_4->dd_data;
 struct bnx2i_hba *VAR_6 = VAR_5->hba;




 if (!VAR_3->sc || VAR_3->state == VAR_2)
  return;



 if (VAR_3->state == VAR_1) {
  FUNC_1(VAR_6, VAR_3->dd_data);

  FUNC_4(&VAR_4->session->lock);
  FUNC_5(&VAR_5->cmd_cleanup_cmpl,
    FUNC_2(VAR_0));
  FUNC_3(&VAR_4->session->lock);
 }
 FUNC_0(VAR_3->dd_data);
}
