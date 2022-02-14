
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct request_queue {int max_hw_segments; int max_phys_segments; int max_sectors; struct i2o_block_device* queuedata; } ;
struct TYPE_2__ {int user_tid; int tid; } ;
struct i2o_device {TYPE_1__ lct_data; int device; struct i2o_controller* iop; } ;
struct i2o_controller {scalar_t__ limit_sectors; scalar_t__ adaptec; } ;
struct i2o_block_device {int power; struct gendisk* gd; struct i2o_device* i2o_dev; } ;
struct gendisk {int first_minor; int disk_name; struct request_queue* queue; int * driverfs_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ FUNC_0 (struct i2o_block_device*) ;
 int VAR_4 ;
 int FUNC_1 (struct i2o_block_device*) ;
 int FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct request_queue*,unsigned short) ;
 int FUNC_5 (struct request_queue*,int ) ;
 int FUNC_6 (struct device*,struct i2o_block_device*) ;
 struct i2o_block_device* FUNC_7 () ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (struct i2o_device*) ;
 int FUNC_9 (struct i2o_device*) ;
 int FUNC_10 (struct i2o_device*,int *,int ,int) ;
 int FUNC_11 (struct i2o_device*,int,int,int*,int) ;
 int FUNC_12 (struct i2o_controller*,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int ,int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (struct gendisk*,int) ;
 int FUNC_20 (int ,char*,char) ;
 struct i2o_device* FUNC_21 (struct device*) ;

__attribute__((used)) static int FUNC_22(struct device *VAR_6)
{
 struct i2o_device *VAR_7 = FUNC_21(VAR_6);
 struct i2o_controller *VAR_8 = VAR_7->iop;
 struct i2o_block_device *VAR_9;
 struct gendisk *VAR_10;
 struct request_queue *VAR_11;
 static int VAR_12 = 0;
 int VAR_13;
 u64 VAR_14;
 u32 VAR_15;
 u16 VAR_16 = 4;
 u16 VAR_17;
 unsigned short VAR_18;






 if (VAR_8->limit_sectors)
  VAR_18 = VAR_3;
 else
  VAR_18 = VAR_2;


 if (VAR_7->lct_data.user_tid != 0xfff) {
  FUNC_15("skipping used device %03x\n", VAR_7->lct_data.tid);
  return -VAR_1;
 }

 if (FUNC_8(VAR_7)) {
  FUNC_18("Unable to claim device. Installation aborted\n");
  VAR_13 = -VAR_0;
  goto exit;
 }

 VAR_9 = FUNC_7();
 if (FUNC_0(VAR_9)) {
  FUNC_16("could not alloc a new I2O block device");
  VAR_13 = FUNC_1(VAR_9);
  goto claim_release;
 }

 VAR_9->i2o_dev = VAR_7;
 FUNC_6(VAR_6, VAR_9);


 VAR_10 = VAR_9->gd;
 VAR_10->first_minor = VAR_12 << 4;
 FUNC_20(VAR_10->disk_name, "i2o/hd%c", 'a' + VAR_12);
 VAR_10->driverfs_dev = &VAR_7->device;


 VAR_11 = VAR_10->queue;
 VAR_11->queuedata = VAR_9;

 FUNC_4(VAR_11, VAR_18);
 FUNC_5(VAR_11, FUNC_12(VAR_8, VAR_16));

 FUNC_15("max sectors = %d\n", VAR_11->max_sectors);
 FUNC_15("phys segments = %d\n", VAR_11->max_phys_segments);
 FUNC_15("max hw segments = %d\n", VAR_11->max_hw_segments);





 if (!FUNC_11(VAR_7, 0x0004, 1, &VAR_15, 4) ||
     !FUNC_11(VAR_7, 0x0000, 3, &VAR_15, 4)) {
  FUNC_3(VAR_11, FUNC_13(VAR_15));
 } else
  FUNC_18("unable to get blocksize of %s\n", VAR_10->disk_name);

 if (!FUNC_11(VAR_7, 0x0004, 0, &VAR_14, 8) ||
     !FUNC_11(VAR_7, 0x0000, 4, &VAR_14, 8)) {
  FUNC_19(VAR_10, FUNC_14(VAR_14) >> VAR_4);
 } else
  FUNC_18("could not get size of %s\n", VAR_10->disk_name);

 if (!FUNC_11(VAR_7, 0x0000, 2, &VAR_17, 2))
  VAR_9->power = VAR_17;

 FUNC_10(VAR_7, &VAR_5, 0, 0xffffffff);

 FUNC_2(VAR_10);

 VAR_12++;

 FUNC_17("device added (TID: %03x): %s\n", VAR_7->lct_data.tid,
   VAR_9->gd->disk_name);

 return 0;

      claim_release:
 FUNC_9(VAR_7);

      exit:
 return VAR_13;
}
