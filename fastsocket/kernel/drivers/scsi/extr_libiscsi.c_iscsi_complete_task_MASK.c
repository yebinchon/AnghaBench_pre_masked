
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int state; int running; int sc; int itt; struct iscsi_conn* conn; } ;
struct iscsi_conn {struct iscsi_task* ping_task; struct iscsi_task* task; int session; } ;


 int FUNC_0 (int ,char*,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iscsi_task *VAR_4, int VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_4->conn;

 FUNC_0(VAR_6->session,
     "complete task itt 0x%x state %d sc %p\n",
     VAR_4->itt, VAR_4->state, VAR_4->sc);
 if (VAR_4->state == VAR_2 ||
     VAR_4->state == VAR_1 ||
     VAR_4->state == VAR_0)
  return;
 FUNC_1(VAR_4->state == VAR_3);
 VAR_4->state = VAR_5;

 if (!FUNC_4(&VAR_4->running))
  FUNC_3(&VAR_4->running);

 if (VAR_6->task == VAR_4)
  VAR_6->task = ((void*)0);

 if (VAR_6->ping_task == VAR_4)
  VAR_6->ping_task = ((void*)0);


 FUNC_2(VAR_4);
}
