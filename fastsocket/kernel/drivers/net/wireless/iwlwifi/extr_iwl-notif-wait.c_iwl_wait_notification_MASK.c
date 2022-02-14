
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_notification_wait {scalar_t__ aborted; int list; scalar_t__ triggered; } ;
struct iwl_notif_wait_data {int notif_wait_lock; int notif_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,unsigned long) ;

int FUNC_4(struct iwl_notif_wait_data *VAR_2,
     struct iwl_notification_wait *VAR_3,
     unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2->notif_waitq,
     VAR_3->triggered || VAR_3->aborted,
     VAR_4);

 FUNC_1(&VAR_2->notif_wait_lock);
 FUNC_0(&VAR_3->list);
 FUNC_2(&VAR_2->notif_wait_lock);

 if (VAR_3->aborted)
  return -VAR_0;


 if (VAR_5 <= 0)
  return -VAR_1;
 return 0;
}
