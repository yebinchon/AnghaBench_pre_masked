
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_task {int running; struct iscsi_conn* conn; } ;
struct iscsi_conn {int requeue; } ;


 int FUNC_0 (struct iscsi_conn*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct iscsi_task *VAR_0)
{
 struct iscsi_conn *VAR_1 = VAR_0->conn;





 if (FUNC_2(&VAR_0->running))
  FUNC_1(&VAR_0->running, &VAR_1->requeue);
 FUNC_0(VAR_1);
}
