
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ra_pages; char* name; int capabilities; scalar_t__ state; struct request_queue* unplug_io_data; int unplug_io_fn; } ;
struct request_queue {int __queue_lock; int * queue_lock; int * orig_bar_rq; scalar_t__ ordcolor; scalar_t__ orderr; scalar_t__ ordseq; scalar_t__ next_ordered; scalar_t__ ordered; int sysfs_lock; int kobj; int delay_work; int unplug_work; int flush_data_in_flight; int * flush_queue; int timeout_list; int timeout; int unplug_timer; TYPE_1__ backing_dev_info; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct request_queue*) ;
 int VAR_9 ;
 int FUNC_5 (int *) ;
 struct request_queue* FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,struct request_queue*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,unsigned long) ;
 int FUNC_11 (int *) ;

struct request_queue *FUNC_12(gfp_t VAR_10, int VAR_11)
{
 struct request_queue *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_7,
    VAR_10 | VAR_3, VAR_11);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->backing_dev_info.unplug_io_fn = VAR_4;
 VAR_12->backing_dev_info.unplug_io_data = VAR_12;
 VAR_12->backing_dev_info.ra_pages =
   (VAR_2 * 1024) / VAR_1;
 VAR_12->backing_dev_info.state = 0;
 VAR_12->backing_dev_info.capabilities = VAR_0;
 VAR_12->backing_dev_info.name = "block";

 VAR_13 = FUNC_3(&VAR_12->backing_dev_info);
 if (VAR_13) {
  FUNC_7(VAR_7, VAR_12);
  return ((void*)0);
 }

 if (FUNC_4(VAR_12)) {
  FUNC_7(VAR_7, VAR_12);
  return ((void*)0);
 }

 FUNC_5(&VAR_12->unplug_timer);
 FUNC_10(&VAR_12->timeout, VAR_8, (unsigned long) VAR_12);
 FUNC_1(&VAR_12->timeout_list);
 FUNC_1(&VAR_12->flush_queue[0]);
 FUNC_1(&VAR_12->flush_queue[1]);
 FUNC_1(&VAR_12->flush_data_in_flight);
 FUNC_2(&VAR_12->unplug_work, VAR_9);
 FUNC_0(&VAR_12->delay_work, VAR_5);

 FUNC_8(&VAR_12->kobj, &VAR_6);

 FUNC_9(&VAR_12->sysfs_lock);
 FUNC_11(&VAR_12->__queue_lock);


 VAR_12->ordered = VAR_12->next_ordered = VAR_12->ordseq = 0;
 VAR_12->orderr = VAR_12->ordcolor = 0;
 VAR_12->orig_bar_rq = ((void*)0);





 VAR_12->queue_lock = &VAR_12->__queue_lock;

 return VAR_12;
}
