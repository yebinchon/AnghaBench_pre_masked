
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int queue_io; struct dm_target* ti; int mpio_pool; int work_mutex; int pg_init_wait; int trigger_event; int process_queued_ios; int pg_init_delay_msecs; int lock; int queued_ios; int priority_groups; } ;
struct dm_target {struct multipath* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct multipath*) ;
 struct multipath* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static struct multipath *FUNC_8(struct dm_target *VAR_6)
{
 struct multipath *VAR_7;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (VAR_7) {
  FUNC_0(&VAR_7->priority_groups);
  FUNC_0(&VAR_7->queued_ios);
  FUNC_7(&VAR_7->lock);
  VAR_7->queue_io = 1;
  VAR_7->pg_init_delay_msecs = VAR_0;
  FUNC_1(&VAR_7->process_queued_ios, VAR_4);
  FUNC_1(&VAR_7->trigger_event, VAR_5);
  FUNC_2(&VAR_7->pg_init_wait);
  FUNC_6(&VAR_7->work_mutex);
  VAR_7->mpio_pool = FUNC_5(VAR_2, VAR_3);
  if (!VAR_7->mpio_pool) {
   FUNC_3(VAR_7);
   return ((void*)0);
  }
  VAR_7->ti = VAR_6;
  VAR_6->private = VAR_7;
 }

 return VAR_7;
}
