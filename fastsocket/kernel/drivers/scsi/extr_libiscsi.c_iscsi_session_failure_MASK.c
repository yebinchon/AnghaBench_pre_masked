
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {scalar_t__ state; int lock; struct iscsi_conn* leadconn; } ;
struct iscsi_conn {TYPE_1__* cls_conn; } ;
struct device {int dummy; } ;
typedef enum iscsi_err { ____Placeholder_iscsi_err } iscsi_err ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct device* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct iscsi_conn*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct iscsi_session *VAR_2,
      enum iscsi_err VAR_3)
{
 struct iscsi_conn *VAR_4;
 struct device *VAR_5;

 FUNC_4(&VAR_2->lock);
 VAR_4 = VAR_2->leadconn;
 if (VAR_2->state == VAR_1 || !VAR_4) {
  FUNC_5(&VAR_2->lock);
  return;
 }

 VAR_5 = FUNC_0(&VAR_4->cls_conn->dev);
 FUNC_5(&VAR_2->lock);
 if (!VAR_5)
         return;





 if (VAR_3 == VAR_0)
  FUNC_1(VAR_4->cls_conn, VAR_3);
 else
  FUNC_2(VAR_4, VAR_3);
 FUNC_3(VAR_5);
}
