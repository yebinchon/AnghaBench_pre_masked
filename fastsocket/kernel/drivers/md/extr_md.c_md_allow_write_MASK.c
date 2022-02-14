
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int safemode; int flags; int write_lock; int sysfs_state; scalar_t__ safemode_delay; scalar_t__ in_sync; TYPE_1__* pers; scalar_t__ ro; } ;
struct TYPE_2__ {int sync_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mddev*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct mddev *VAR_3)
{
 if (!VAR_3->pers)
  return 0;
 if (VAR_3->ro)
  return 0;
 if (!VAR_3->pers->sync_request)
  return 0;

 FUNC_2(&VAR_3->write_lock);
 if (VAR_3->in_sync) {
  VAR_3->in_sync = 0;
  FUNC_1(VAR_1, &VAR_3->flags);
  FUNC_1(VAR_2, &VAR_3->flags);
  if (VAR_3->safemode_delay &&
      VAR_3->safemode == 0)
   VAR_3->safemode = 1;
  FUNC_3(&VAR_3->write_lock);
  FUNC_0(VAR_3, 0);
  FUNC_4(VAR_3->sysfs_state);
 } else
  FUNC_3(&VAR_3->write_lock);

 if (FUNC_5(VAR_2, &VAR_3->flags))
  return -VAR_0;
 else
  return 0;
}
