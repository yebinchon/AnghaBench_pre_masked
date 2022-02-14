
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct loop_device {int lo_number; TYPE_1__* lo_queue; int lo_lock; int lo_event; int * lo_thread; int lo_ctl_mutex; struct gendisk* lo_disk; int lo_state; } ;
struct gendisk {int first_minor; int disk_name; TYPE_1__* queue; struct loop_device* private_data; int * fops; int major; } ;
struct TYPE_4__ {struct loop_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gendisk* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct loop_device*) ;
 struct loop_device* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static struct loop_device *FUNC_10(int VAR_6)
{
 struct loop_device *VAR_7;
 struct gendisk *VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  goto out;

 VAR_7->lo_state = VAR_2;

 VAR_7->lo_queue = FUNC_1(VAR_0);
 if (!VAR_7->lo_queue)
  goto out_free_dev;




 FUNC_3(VAR_7->lo_queue, VAR_4);
 VAR_7->lo_queue->queuedata = VAR_7;

 VAR_8 = VAR_7->lo_disk = FUNC_0(1 << VAR_5);
 if (!VAR_8)
  goto out_free_queue;

 FUNC_7(&VAR_7->lo_ctl_mutex);
 VAR_7->lo_number = VAR_6;
 VAR_7->lo_thread = ((void*)0);
 FUNC_4(&VAR_7->lo_event);
 FUNC_8(&VAR_7->lo_lock);
 VAR_8->major = VAR_1;
 VAR_8->first_minor = VAR_6 << VAR_5;
 VAR_8->fops = &VAR_3;
 VAR_8->private_data = VAR_7;
 VAR_8->queue = VAR_7->lo_queue;
 FUNC_9(VAR_8->disk_name, "loop%d", VAR_6);
 return VAR_7;

out_free_queue:
 FUNC_2(VAR_7->lo_queue);
out_free_dev:
 FUNC_5(VAR_7);
out:
 return ((void*)0);
}
