
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {scalar_t__ merge_bvec_fn; } ;
struct multipath_info {int * rdev; } ;
struct mpconf {int device_lock; struct multipath_info* multipaths; } ;
struct mddev {int raid_disks; int degraded; int queue; int gendisk; struct mpconf* private; } ;
struct md_rdev {int raid_disk; int data_offset; int flags; TYPE_2__* bdev; } ;
struct TYPE_4__ {TYPE_1__* bd_disk; } ;
struct TYPE_3__ {struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 int FUNC_3 (struct md_rdev*,struct mddev*) ;
 int FUNC_4 (struct mpconf*) ;
 int FUNC_5 (int *,struct md_rdev*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mddev *VAR_3, struct md_rdev *VAR_4)
{
 struct mpconf *VAR_5 = VAR_3->private;
 struct request_queue *VAR_6;
 int VAR_7 = -VAR_0;
 int VAR_8;
 struct multipath_info *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = VAR_3->raid_disks - 1;

 if (VAR_4->raid_disk >= 0)
  VAR_10 = VAR_11 = VAR_4->raid_disk;

 FUNC_4(VAR_5);

 for (VAR_8 = VAR_10; VAR_8 <= VAR_11; VAR_8++)
  if ((VAR_9=VAR_5->multipaths+VAR_8)->rdev == ((void*)0)) {
   VAR_6 = VAR_4->bdev->bd_disk->queue;
   FUNC_2(VAR_3->gendisk, VAR_4->bdev,
       VAR_4->data_offset << 9);







   if (VAR_6->merge_bvec_fn) {
    FUNC_0(VAR_3->queue, 1);
    FUNC_1(VAR_3->queue,
          VAR_2 - 1);
   }

   FUNC_7(&VAR_5->device_lock);
   VAR_3->degraded--;
   VAR_4->raid_disk = VAR_8;
   FUNC_6(VAR_1, &VAR_4->flags);
   FUNC_8(&VAR_5->device_lock);
   FUNC_5(VAR_9->rdev, VAR_4);
   VAR_7 = 0;
   FUNC_3(VAR_4, VAR_3);
   break;
  }

 FUNC_4(VAR_5);

 return VAR_7;
}
