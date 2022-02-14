
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct format_data_t {int start_unit; int stop_unit; int blksize; int intensity; } ;
struct dasd_device {scalar_t__ state; TYPE_3__* cdev; TYPE_2__* discipline; } ;
struct dasd_ccw_req {int memdev; } ;
struct dasd_block {int gdp; struct dasd_device* base; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct dasd_ccw_req* (* format_device ) (struct dasd_device*,struct format_data_t*) ;} ;
struct TYPE_4__ {int i_blkbits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 struct block_device* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dasd_ccw_req*,int ) ;
 int FUNC_7 (struct dasd_ccw_req*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ,int ,int) ;
 int FUNC_10 (char*,int ) ;
 struct dasd_ccw_req* FUNC_11 (struct dasd_device*,struct format_data_t*) ;

__attribute__((used)) static int FUNC_12(struct dasd_block *VAR_5, struct format_data_t *VAR_6)
{
 struct dasd_ccw_req *VAR_7;
 struct dasd_device *VAR_8;
 int VAR_9;

 VAR_8 = VAR_5->base;
 if (VAR_8->discipline->format_device == ((void*)0))
  return -VAR_3;

 if (VAR_8->state != VAR_0) {
  FUNC_10("%s: The DASD cannot be formatted while it is "
      "enabled\n", FUNC_8(&VAR_8->cdev->dev));
  return -VAR_2;
 }

 FUNC_0(VAR_1, VAR_8,
        "formatting units %u to %u (%u B blocks) flags %u",
        VAR_6->start_unit,
        VAR_6->stop_unit, VAR_6->blksize, VAR_6->intensity);






 if (VAR_6->start_unit == 0) {
  struct block_device *VAR_10 = FUNC_3(VAR_5->gdp, 0);
  VAR_10->bd_inode->i_blkbits = FUNC_5(VAR_6->blksize);
  FUNC_4(VAR_10);
 }

 while (VAR_6->start_unit <= VAR_6->stop_unit) {
  VAR_7 = VAR_8->discipline->format_device(VAR_8, VAR_6);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);
  VAR_9 = FUNC_7(VAR_7);
  FUNC_6(VAR_7, VAR_7->memdev);
  if (VAR_9) {
   if (VAR_9 != -VAR_4)
    FUNC_9("%s: Formatting unit %d failed with "
           "rc=%d\n", FUNC_8(&VAR_8->cdev->dev),
           VAR_6->start_unit, VAR_9);
   return VAR_9;
  }
  VAR_6->start_unit++;
 }
 return 0;
}
