
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct zram {scalar_t__ init_done; TYPE_1__* disk; TYPE_4__* queue; int stat64_lock; int init_lock; int lock; } ;
struct TYPE_15__ {struct zram* queuedata; } ;
struct TYPE_14__ {int kobj; } ;
struct TYPE_13__ {int first_minor; TYPE_4__* queue; int disk_name; struct zram* private_data; int * fops; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (int ,int,char*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(struct zram *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 FUNC_10(&VAR_8->lock);
 FUNC_10(&VAR_8->init_lock);
 FUNC_15(&VAR_8->stat64_lock);

 VAR_8->queue = FUNC_2(VAR_1);
 if (!VAR_8->queue) {
  FUNC_11("Error allocating disk queue for device %d\n",
   VAR_9);
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_7(VAR_8->queue, VAR_7);
 VAR_8->queue->queuedata = VAR_8;


 VAR_8->disk = FUNC_1(1);
 if (!VAR_8->disk) {
  FUNC_3(VAR_8->queue);
  FUNC_12("Error allocating disk structure for device %d\n",
   VAR_9);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_8->disk->major = VAR_6;
 VAR_8->disk->first_minor = VAR_9;
 VAR_8->disk->fops = &VAR_4;
 VAR_8->disk->queue = VAR_8->queue;
 VAR_8->disk->private_data = VAR_8;
 FUNC_14(VAR_8->disk->disk_name, 16, "zram%d", VAR_9);


 FUNC_13(VAR_8->disk, 0);





 FUNC_8(VAR_8->disk->queue, VAR_2);
 FUNC_6(VAR_8->disk->queue,
     VAR_3);
 FUNC_4(VAR_8->disk->queue, VAR_2);
 FUNC_5(VAR_8->disk->queue, VAR_2);

 FUNC_0(VAR_8->disk);

 VAR_10 = FUNC_16(&FUNC_9(VAR_8->disk)->kobj,
    &VAR_5);
 if (VAR_10 < 0) {
  FUNC_12("Error creating sysfs group");
  goto out;
 }

 VAR_8->init_done = 0;

out:
 return VAR_10;
}
