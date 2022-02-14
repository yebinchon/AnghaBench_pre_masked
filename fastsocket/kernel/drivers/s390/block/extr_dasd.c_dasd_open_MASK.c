
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dasd_device {scalar_t__ state; int features; TYPE_3__* block; TYPE_2__* discipline; int flags; TYPE_1__* cdev; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;
struct TYPE_6__ {int open_count; } ;
struct TYPE_5__ {int owner; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct dasd_device* FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct block_device *VAR_11, fmode_t VAR_12)
{
 struct dasd_device *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(VAR_11->bd_disk);
 if (!VAR_13)
  return -VAR_6;

 FUNC_2(&VAR_13->block->open_count);
 if (FUNC_7(VAR_2, &VAR_13->flags)) {
  VAR_14 = -VAR_6;
  goto unlock;
 }

 if (!FUNC_8(VAR_13->discipline->owner)) {
  VAR_14 = -VAR_5;
  goto unlock;
 }

 if (VAR_10) {
  FUNC_5(&VAR_13->cdev->dev,
    "Accessing the DASD failed because it is in "
    "probeonly mode\n");
  VAR_14 = -VAR_7;
  goto out;
 }

 if (VAR_13->state <= VAR_3) {
  FUNC_0(VAR_4, VAR_13, " %s",
         " Cannot open unrecognized device");
  VAR_14 = -VAR_6;
  goto out;
 }

 if ((VAR_12 & VAR_9) &&
     (FUNC_7(VAR_1, &VAR_13->flags) ||
      (VAR_13->features & VAR_0))) {
  VAR_14 = -VAR_8;
  goto out;
 }

 FUNC_4(VAR_13);
 return 0;

out:
 FUNC_6(VAR_13->discipline->owner);
unlock:
 FUNC_1(&VAR_13->block->open_count);
 FUNC_4(VAR_13);
 return VAR_14;
}
