
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; int changed; int sector_size; int request_queue; int sdev_gendev; } ;
struct TYPE_2__ {int capacity; int name; struct gendisk* disk; scalar_t__ mask; struct scsi_cd* handle; int * ops; } ;
struct scsi_cd {int capacity; int previous_state; int use; TYPE_1__ cdi; int * driver; scalar_t__ readcd_cdda; scalar_t__ readcd_known; struct scsi_device* device; struct gendisk* disk; int kref; } ;
struct gendisk {int first_minor; int flags; int queue; int ** private_data; int * driverfs_dev; int * fops; int disk_name; int major; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct gendisk*) ;
 struct gendisk* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct device*,struct scsi_cd*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct scsi_cd*) ;
 int FUNC_8 (struct scsi_cd*) ;
 int FUNC_9 (int *) ;
 struct scsi_cd* FUNC_10 (int,int ) ;
 int FUNC_11 (struct gendisk*) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ,struct scsi_device*,char*,int ) ;
 int FUNC_14 (struct gendisk*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,char*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (struct scsi_cd*) ;
 struct scsi_device* FUNC_19 (struct device*) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_18)
{
 struct scsi_device *VAR_19 = FUNC_19(VAR_18);
 struct gendisk *VAR_20;
 struct scsi_cd *VAR_21;
 int VAR_22, VAR_23;

 VAR_23 = -VAR_1;
 if (VAR_19->type != VAR_10 && VAR_19->type != VAR_11)
  goto fail;

 VAR_23 = -VAR_2;
 VAR_21 = FUNC_10(sizeof(*VAR_21), VAR_5);
 if (!VAR_21)
  goto fail;

 FUNC_9(&VAR_21->kref);

 VAR_20 = FUNC_2(1);
 if (!VAR_20)
  goto fail_free;

 FUNC_15(&VAR_15);
 VAR_22 = FUNC_6(VAR_14, VAR_8);
 if (VAR_22 == VAR_8) {
  FUNC_16(&VAR_15);
  VAR_23 = -VAR_0;
  goto fail_put;
 }
 FUNC_0(VAR_22, VAR_14);
 FUNC_16(&VAR_15);

 VAR_20->major = VAR_7;
 VAR_20->first_minor = VAR_22;
 FUNC_17(VAR_20->disk_name, "sr%d", VAR_22);
 VAR_20->fops = &VAR_12;
 VAR_20->flags = VAR_3;

 FUNC_4(VAR_19->request_queue, VAR_9);

 VAR_21->device = VAR_19;
 VAR_21->disk = VAR_20;
 VAR_21->driver = &VAR_17;
 VAR_21->disk = VAR_20;
 VAR_21->capacity = 0x1fffff;
 VAR_21->device->changed = 1;
 VAR_21->previous_state = 1;
 VAR_21->use = 1;
 VAR_21->readcd_known = 0;
 VAR_21->readcd_cdda = 0;

 VAR_21->cdi.ops = &VAR_13;
 VAR_21->cdi.handle = VAR_21;
 VAR_21->cdi.mask = 0;
 VAR_21->cdi.capacity = 1;
 FUNC_17(VAR_21->cdi.name, "sr%d", VAR_22);

 VAR_19->sector_size = 2048;


 FUNC_7(VAR_21);
 FUNC_3(VAR_19->request_queue, VAR_16);
 FUNC_18(VAR_21);

 VAR_20->driverfs_dev = &VAR_19->sdev_gendev;
 FUNC_14(VAR_20, VAR_21->capacity);
 VAR_20->private_data = &VAR_21->driver;
 VAR_20->queue = VAR_19->request_queue;
 VAR_21->cdi.disk = VAR_20;

 if (FUNC_12(&VAR_21->cdi))
  goto fail_put;

 FUNC_5(VAR_18, VAR_21);
 VAR_20->flags |= VAR_4;
 FUNC_1(VAR_20);

 FUNC_13(VAR_6, VAR_19,
      "Attached scsi CD-ROM %s\n", VAR_21->cdi.name);
 return 0;

fail_put:
 FUNC_11(VAR_20);
fail_free:
 FUNC_8(VAR_21);
fail:
 return VAR_23;
}
