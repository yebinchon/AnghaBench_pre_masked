
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int blk_bdsa; int blk_size; } ;
struct dasd_fba_private {TYPE_3__ rdc_data; } ;
struct TYPE_4__ {int opm; } ;
struct dasd_device {struct ccw_device* cdev; int flags; TYPE_1__ path_data; int default_expires; int * private; struct dasd_block* block; } ;
struct dasd_block {struct dasd_device* base; } ;
struct TYPE_5__ {int cu_model; int cu_type; int dev_model; int dev_type; } ;
struct ccw_device {TYPE_2__ id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ccw_device*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dasd_block*) ;
 int VAR_7 ;
 int FUNC_2 (struct dasd_block*) ;
 struct dasd_block* FUNC_3 () ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_block*) ;
 int FUNC_6 (struct dasd_device*,int ,TYPE_3__*,int) ;
 int FUNC_7 (int *,char*,int ,int ,int ,int ,int,int,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct dasd_fba_private*) ;
 struct dasd_fba_private* FUNC_10 (int,int) ;
 int FUNC_11 (struct dasd_fba_private*,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(struct dasd_device *VAR_8)
{
 struct dasd_block *VAR_9;
 struct dasd_fba_private *VAR_10;
 struct ccw_device *VAR_11 = VAR_8->cdev;
 int VAR_12;
 int VAR_13;

 VAR_10 = (struct dasd_fba_private *) VAR_8->private;
 if (!VAR_10) {
  VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_6 | VAR_5);
  if (!VAR_10) {
   FUNC_8(&VAR_8->cdev->dev,
     "Allocating memory for private DASD "
     "data failed\n");
   return -VAR_4;
  }
  VAR_8->private = (void *) VAR_10;
 } else {
  FUNC_11(VAR_10, 0, sizeof(*VAR_10));
 }
 VAR_9 = FUNC_3();
 if (FUNC_1(VAR_9)) {
  FUNC_0(VAR_3, VAR_11, "%s", "could not allocate "
    "dasd block structure");
  VAR_8->private = ((void*)0);
  FUNC_9(VAR_10);
  return FUNC_2(VAR_9);
 }
 VAR_8->block = VAR_9;
 VAR_9->base = VAR_8;


 VAR_12 = FUNC_6(VAR_8, VAR_1,
      &VAR_10->rdc_data, 32);
 if (VAR_12) {
  FUNC_0(VAR_3, VAR_11, "Read device "
    "characteristics returned error %d", VAR_12);
  VAR_8->block = ((void*)0);
  FUNC_5(VAR_9);
  VAR_8->private = ((void*)0);
  FUNC_9(VAR_10);
  return VAR_12;
 }

 VAR_8->default_expires = VAR_0;
 VAR_8->path_data.opm = VAR_7;

 VAR_13 = FUNC_4(VAR_8);
 if (VAR_13)
  FUNC_12(VAR_2, &VAR_8->flags);

 FUNC_7(&VAR_8->cdev->dev,
   "New FBA DASD %04X/%02X (CU %04X/%02X) with %d MB "
   "and %d B/blk%s\n",
   VAR_11->id.dev_type,
   VAR_11->id.dev_model,
   VAR_11->id.cu_type,
   VAR_11->id.cu_model,
   ((VAR_10->rdc_data.blk_bdsa *
     (VAR_10->rdc_data.blk_size >> 9)) >> 11),
   VAR_10->rdc_data.blk_size,
   VAR_13 ? ", read-only device" : "");
 return 0;
}
