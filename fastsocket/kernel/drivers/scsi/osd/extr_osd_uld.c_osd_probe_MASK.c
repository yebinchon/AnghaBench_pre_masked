
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; } ;
struct TYPE_4__ {int kobj; int owner; } ;
struct osd_uld_device {int minor; TYPE_1__ cdev; struct device* class_member; int od; struct gendisk* disk; int kref; } ;
struct gendisk {int first_minor; int disk_name; int major; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct osd_uld_device*) ;
 struct gendisk* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (struct device*,struct osd_uld_device*) ;
 struct device* FUNC_11 (int ,struct device*,int ,char*,int ) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (struct osd_uld_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct osd_uld_device* FUNC_18 (int,int ) ;
 int FUNC_19 (int *,struct scsi_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct gendisk*) ;
 int FUNC_21 (struct scsi_device*) ;
 int FUNC_22 (struct scsi_device*) ;
 int FUNC_23 (int ,char*,int) ;
 struct scsi_device* FUNC_24 (struct device*) ;

__attribute__((used)) static int FUNC_25(struct device *VAR_12)
{
 struct scsi_device *VAR_13 = FUNC_24(VAR_12);
 struct gendisk *VAR_14;
 struct osd_uld_device *VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_13->type != VAR_8)
  return -VAR_2;

 do {
  if (!FUNC_13(&VAR_10, VAR_4))
   return -VAR_2;

  VAR_17 = FUNC_12(&VAR_10, &VAR_16);
 } while (VAR_17 == -VAR_0);

 if (VAR_17)
  return VAR_17;
 if (VAR_16 >= VAR_6) {
  VAR_17 = -VAR_1;
  goto err_retract_minor;
 }

 VAR_17 = -VAR_3;
 VAR_15 = FUNC_18(sizeof(*VAR_15), VAR_4);
 if (((void*)0) == VAR_15)
  goto err_retract_minor;

 FUNC_17(&VAR_15->kref);
 FUNC_10(VAR_12, VAR_15);
 VAR_15->minor = VAR_16;



 VAR_14 = FUNC_6(1);
 if (!VAR_14) {
  FUNC_2("alloc_disk failed\n");
  goto err_free_osd;
 }
 VAR_14->major = VAR_5;
 VAR_14->first_minor = VAR_15->minor;
 FUNC_23(VAR_14->disk_name, "osd%d", VAR_15->minor);
 VAR_15->disk = VAR_14;




 FUNC_21(VAR_13);
 FUNC_19(&VAR_15->od, VAR_13);


 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17) {
  FUNC_2("osd detection failed, non-compatible OSD device\n");
  goto err_put_disk;
 }


 FUNC_9(&VAR_15->cdev, &VAR_9);
 VAR_15->cdev.owner = VAR_7;
 VAR_17 = FUNC_7(&VAR_15->cdev,
    FUNC_1(VAR_5, VAR_15->minor), 1);
 if (VAR_17) {
  FUNC_2("cdev_add failed\n");
  goto err_put_disk;
 }
 FUNC_16(&VAR_15->cdev.kobj);


 VAR_15->class_member = FUNC_11(VAR_11, VAR_12,
  FUNC_1(VAR_5, VAR_15->minor), "%s", VAR_14->disk_name);
 if (FUNC_0(VAR_15->class_member)) {
  FUNC_2("class_device_create failed\n");
  VAR_17 = FUNC_4(VAR_15->class_member);
  goto err_put_cdev;
 }

 FUNC_10(VAR_15->class_member, VAR_15);

 FUNC_3("osd_probe %s\n", VAR_14->disk_name);
 return 0;

err_put_cdev:
 FUNC_8(&VAR_15->cdev);
err_put_disk:
 FUNC_22(VAR_13);
 FUNC_20(VAR_14);
err_free_osd:
 FUNC_10(VAR_12, ((void*)0));
 FUNC_15(VAR_15);
err_retract_minor:
 FUNC_14(&VAR_10, VAR_16);
 return VAR_17;
}
