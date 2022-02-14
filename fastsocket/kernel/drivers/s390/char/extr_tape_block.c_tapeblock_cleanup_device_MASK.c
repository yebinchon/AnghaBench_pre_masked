
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* request_queue; TYPE_2__* disk; } ;
struct tape_device {TYPE_1__ blk_data; } ;
struct TYPE_7__ {void* queuedata; } ;
struct TYPE_6__ {struct tape_device* private_data; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (struct tape_device*) ;

void
FUNC_5(struct tape_device *VAR_0)
{
 FUNC_2();
 FUNC_4(VAR_0);

 if (!VAR_0->blk_data.disk) {
  goto cleanup_queue;
 }

 FUNC_1(VAR_0->blk_data.disk);
 VAR_0->blk_data.disk->private_data =
  FUNC_4(VAR_0->blk_data.disk->private_data);
 FUNC_3(VAR_0->blk_data.disk);

 VAR_0->blk_data.disk = ((void*)0);
cleanup_queue:
 VAR_0->blk_data.request_queue->queuedata = FUNC_4(VAR_0);

 FUNC_0(VAR_0->blk_data.request_queue);
 VAR_0->blk_data.request_queue = ((void*)0);
}
