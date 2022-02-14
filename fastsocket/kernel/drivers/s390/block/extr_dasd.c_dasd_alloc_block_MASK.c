
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct dasd_block {TYPE_1__ profile; TYPE_2__ timer; int queue_lock; int ccw_queue; int tasklet; int tasklet_scheduled; int request_queue_lock; int open_count; } ;


 int VAR_0 ;
 struct dasd_block* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 struct dasd_block* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void (*) (unsigned long),unsigned long) ;

struct dasd_block *FUNC_7(void)
{
 struct dasd_block *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_4->open_count, -1);

 FUNC_5(&VAR_4->request_queue_lock);
 FUNC_2(&VAR_4->tasklet_scheduled, 0);
 FUNC_6(&VAR_4->tasklet,
       (void (*)(unsigned long)) VAR_2,
       (unsigned long) VAR_4);
 FUNC_1(&VAR_4->ccw_queue);
 FUNC_5(&VAR_4->queue_lock);
 FUNC_3(&VAR_4->timer);
 VAR_4->timer.function = VAR_3;
 VAR_4->timer.data = (unsigned long) VAR_4;
 FUNC_5(&VAR_4->profile.lock);

 return VAR_4;
}
