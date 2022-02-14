
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {scalar_t__ state; int lock; TYPE_1__* leadconn; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct TYPE_2__ {int ehwait; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iscsi_cls_session *VAR_2)
{
 struct iscsi_session *VAR_3 = VAR_2->dd_data;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->state != VAR_0) {
  VAR_3->state = VAR_1;
  if (VAR_3->leadconn)
   FUNC_2(&VAR_3->leadconn->ehwait);
 }
 FUNC_1(&VAR_3->lock);
}
