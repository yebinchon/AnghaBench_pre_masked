
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_task {TYPE_1__* conn; } ;
struct iscsi_session {int lock; } ;
struct TYPE_2__ {struct iscsi_session* session; } ;


 int FUNC_0 (struct iscsi_task*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_task *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->conn->session;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
}
