
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_data {int instance; unsigned int index; int trim_supp; TYPE_3__* disk; TYPE_8__* queue; int * mtip_svc_handler; TYPE_2__* pdev; int dd_flag; int major; } ;
typedef int sector_t ;
struct TYPE_20__ {int discard_granularity; scalar_t__ discard_zeroes_data; } ;
struct TYPE_24__ {TYPE_1__ limits; int queue_flags; struct driver_data* queuedata; } ;
struct TYPE_23__ {int kobj; } ;
struct TYPE_22__ {int first_minor; TYPE_8__* queue; struct driver_data* private_data; int * fops; int major; int * driverfs_dev; int disk_name; } ;
struct TYPE_21__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int) ;
 TYPE_8__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_8__*,int) ;
 int FUNC_7 (TYPE_8__*,int ) ;
 int FUNC_8 (TYPE_8__*,int) ;
 int FUNC_9 (TYPE_8__*,int) ;
 int FUNC_10 (TYPE_8__*,int) ;
 int FUNC_11 (TYPE_8__*,int ) ;
 int FUNC_12 (TYPE_8__*,int) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *,char*) ;
 TYPE_5__* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *,unsigned int*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,unsigned int) ;
 struct kobject* FUNC_20 (int *) ;
 int FUNC_21 (struct kobject*) ;
 int * FUNC_22 (int ,struct driver_data*,unsigned char*) ;
 int VAR_15 ;
 int FUNC_23 (struct driver_data*) ;
 int FUNC_24 (struct driver_data*) ;
 int FUNC_25 (struct driver_data*) ;
 int FUNC_26 (struct driver_data*,int *) ;
 int FUNC_27 (struct driver_data*) ;
 int FUNC_28 (struct driver_data*,struct kobject*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_29 (TYPE_3__*) ;
 int FUNC_30 (char*,unsigned int,int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_31 (int ,int *) ;
 int FUNC_32 (TYPE_3__*,int ) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (unsigned char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_36(struct driver_data *VAR_20)
{
 int VAR_21 = 0, VAR_22 = 0;
 sector_t VAR_23;
 unsigned int VAR_24 = 0;
 struct kobject *VAR_25;
 unsigned char VAR_26[16];

 if (VAR_20->disk)
  goto skip_create_disk;


 VAR_22 = FUNC_27(VAR_20);
 if (VAR_22 < 0) {
  FUNC_14(&VAR_20->pdev->dev,
   "Protocol layer initialization failed\n");
  VAR_21 = -VAR_3;
  goto protocol_init_error;
 }

 VAR_20->disk = FUNC_2(VAR_9);
 if (VAR_20->disk == ((void*)0)) {
  FUNC_14(&VAR_20->pdev->dev,
   "Unable to allocate gendisk structure\n");
  VAR_21 = -VAR_3;
  goto alloc_disk_error;
 }


 do {
  if (!FUNC_18(&VAR_18, VAR_6))
   goto ida_get_error;

  FUNC_33(&VAR_19);
  VAR_21 = FUNC_17(&VAR_18, &VAR_24);
  FUNC_34(&VAR_19);
 } while (VAR_21 == -VAR_1);

 if (VAR_21)
  goto ida_get_error;

 VAR_21 = FUNC_30("rssd",
    VAR_24,
    VAR_20->disk->disk_name,
    VAR_0);
 if (VAR_21)
  goto disk_index_error;

 VAR_20->disk->driverfs_dev = &VAR_20->pdev->dev;
 VAR_20->disk->major = VAR_20->major;
 VAR_20->disk->first_minor = VAR_20->instance * VAR_9;
 VAR_20->disk->fops = &VAR_15;
 VAR_20->disk->private_data = VAR_20;
 VAR_20->index = VAR_24;





 if (VAR_22 == VAR_8)
  goto start_service_thread;

skip_create_disk:

 VAR_20->queue = FUNC_3(VAR_6);
 if (VAR_20->queue == ((void*)0)) {
  FUNC_14(&VAR_20->pdev->dev,
   "Unable to allocate request queue\n");
  VAR_21 = -VAR_5;
  goto block_queue_alloc_init_error;
 }


 FUNC_7(VAR_20->queue, VAR_16);

 VAR_20->disk->queue = VAR_20->queue;
 VAR_20->queue->queuedata = VAR_20;


 FUNC_31(VAR_14, &VAR_20->queue->queue_flags);
 FUNC_11(VAR_20->queue, VAR_10);
 FUNC_12(VAR_20->queue, 4096);
 FUNC_9(VAR_20->queue, 0xffff);
 FUNC_10(VAR_20->queue, 0x400000);
 FUNC_6(VAR_20->queue, 4096);





 FUNC_5(VAR_20->queue, 0);


 if (VAR_20->trim_supp == 1) {
  FUNC_31(VAR_13, &VAR_20->queue->queue_flags);
  VAR_20->queue->limits.discard_granularity = 4096;
  FUNC_8(VAR_20->queue,
   VAR_12 * VAR_11);
  VAR_20->queue->limits.discard_zeroes_data = 0;
 }


 if (!(FUNC_26(VAR_20, &VAR_23))) {
  FUNC_15(&VAR_20->pdev->dev,
   "Could not read drive capacity\n");
  VAR_21 = -VAR_4;
  goto read_capacity_error;
 }
 FUNC_32(VAR_20->disk, VAR_23);


 FUNC_1(VAR_20->disk);





 VAR_25 = FUNC_20(&FUNC_16(VAR_20->disk)->kobj);
 if (VAR_25) {
  FUNC_28(VAR_20, VAR_25);
  FUNC_21(VAR_25);
 }
 FUNC_24(VAR_20);

 if (VAR_20->mtip_svc_handler) {
  FUNC_31(VAR_7, &VAR_20->dd_flag);
  return VAR_21;
 }

start_service_thread:
 FUNC_35(VAR_26, "mtip_svc_thd_%02d", VAR_24);

 VAR_20->mtip_svc_handler = FUNC_22(VAR_17,
      VAR_20, VAR_26);

 if (FUNC_0(VAR_20->mtip_svc_handler)) {
  FUNC_14(&VAR_20->pdev->dev, "service thread failed to start\n");
  VAR_20->mtip_svc_handler = ((void*)0);
  VAR_21 = -VAR_2;
  goto kthread_run_error;
 }

 if (VAR_22 == VAR_8)
  VAR_21 = VAR_22;

 return VAR_21;

kthread_run_error:
 FUNC_23(VAR_20);


 FUNC_13(VAR_20->disk);

read_capacity_error:
 FUNC_4(VAR_20->queue);

block_queue_alloc_init_error:
disk_index_error:
 FUNC_33(&VAR_19);
 FUNC_19(&VAR_18, VAR_24);
 FUNC_34(&VAR_19);

ida_get_error:
 FUNC_29(VAR_20->disk);

alloc_disk_error:
 FUNC_25(VAR_20);

protocol_init_error:
 return VAR_21;
}
