
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int lock; struct iscsi_conn* leadconn; } ;
struct iscsi_conn {int suspend_tx; int suspend_rx; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iscsi_cls_session *VAR_1,
      struct iscsi_cls_conn *VAR_2, int VAR_3)
{
 struct iscsi_session *VAR_4 = VAR_1->dd_data;
 struct iscsi_conn *VAR_5 = VAR_2->dd_data;

 FUNC_1(&VAR_4->lock);
 if (VAR_3)
  VAR_4->leadconn = VAR_5;
 FUNC_2(&VAR_4->lock);




 FUNC_0(VAR_0, &VAR_5->suspend_rx);
 FUNC_0(VAR_0, &VAR_5->suspend_tx);
 return 0;
}
