
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct dasd_device {TYPE_1__ profile; int state_mutex; void* target; void* state; int reload_device; int restore_device; int kick_work; TYPE_2__ timer; int ccw_queue; int tasklet; int tasklet_scheduled; int mem_lock; void* erp_mem; int erp_chunks; void* ccw_mem; int ccw_chunks; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct dasd_device* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,void*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (unsigned long,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct dasd_device*) ;
 struct dasd_device* FUNC_10 (int,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,void (*) (unsigned long),unsigned long) ;

struct dasd_device *FUNC_14(void)
{
 struct dasd_device *VAR_10;

 VAR_10 = FUNC_10(sizeof(struct dasd_device), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);


 VAR_10->ccw_mem = (void *) FUNC_3(VAR_2 | VAR_3, 1);
 if (!VAR_10->ccw_mem) {
  FUNC_9(VAR_10);
  return FUNC_0(-VAR_1);
 }

 VAR_10->erp_mem = (void *) FUNC_7(VAR_2 | VAR_3);
 if (!VAR_10->erp_mem) {
  FUNC_6((unsigned long) VAR_10->ccw_mem, 1);
  FUNC_9(VAR_10);
  return FUNC_0(-VAR_1);
 }

 FUNC_5(&VAR_10->ccw_chunks, VAR_10->ccw_mem, VAR_4*2);
 FUNC_5(&VAR_10->erp_chunks, VAR_10->erp_mem, VAR_4);
 FUNC_12(&VAR_10->mem_lock);
 FUNC_4(&VAR_10->tasklet_scheduled, 0);
 FUNC_13(&VAR_10->tasklet,
       (void (*)(unsigned long)) VAR_5,
       (unsigned long) VAR_10);
 FUNC_1(&VAR_10->ccw_queue);
 FUNC_8(&VAR_10->timer);
 VAR_10->timer.function = VAR_6;
 VAR_10->timer.data = (unsigned long) VAR_10;
 FUNC_2(&VAR_10->kick_work, VAR_7);
 FUNC_2(&VAR_10->restore_device, VAR_9);
 FUNC_2(&VAR_10->reload_device, VAR_8);
 VAR_10->state = VAR_0;
 VAR_10->target = VAR_0;
 FUNC_11(&VAR_10->state_mutex);
 FUNC_12(&VAR_10->profile.lock);
 return VAR_10;
}
