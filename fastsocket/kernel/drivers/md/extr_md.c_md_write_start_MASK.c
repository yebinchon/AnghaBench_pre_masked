
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; int safemode; int flags; int sb_wait; int sysfs_state; int write_lock; int thread; scalar_t__ in_sync; int writes_pending; int sync_thread; int recovery; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int) ;

void FUNC_10(struct mddev *VAR_4, struct bio *VAR_5)
{
 int VAR_6 = 0;
 if (FUNC_2(VAR_5) != VAR_3)
  return;

 FUNC_0(VAR_4->ro == 1);
 if (VAR_4->ro == 2) {

  VAR_4->ro = 0;
  FUNC_4(VAR_2, &VAR_4->recovery);
  FUNC_3(VAR_4->thread);
  FUNC_3(VAR_4->sync_thread);
  VAR_6 = 1;
 }
 FUNC_1(&VAR_4->writes_pending);
 if (VAR_4->safemode == 1)
  VAR_4->safemode = 0;
 if (VAR_4->in_sync) {
  FUNC_5(&VAR_4->write_lock);
  if (VAR_4->in_sync) {
   VAR_4->in_sync = 0;
   FUNC_4(VAR_0, &VAR_4->flags);
   FUNC_4(VAR_1, &VAR_4->flags);
   FUNC_3(VAR_4->thread);
   VAR_6 = 1;
  }
  FUNC_6(&VAR_4->write_lock);
 }
 if (VAR_6)
  FUNC_7(VAR_4->sysfs_state);
 FUNC_9(VAR_4->sb_wait,
     !FUNC_8(VAR_1, &VAR_4->flags));
}
