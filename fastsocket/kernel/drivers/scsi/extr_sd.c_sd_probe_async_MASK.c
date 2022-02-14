
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_disk {int index; int media_present; int first_scan; int dev; scalar_t__ capacity; scalar_t__ ATO; scalar_t__ RCD; scalar_t__ WCE; scalar_t__ cache_override; scalar_t__ write_prot; struct scsi_device* device; int driver; struct gendisk* disk; } ;
struct device {int dummy; } ;
struct scsi_device {int sector_size; scalar_t__ removable; struct device sdev_gendev; int request_queue; } ;
struct gendisk {int first_minor; int flags; struct device* driverfs_dev; int queue; int * private_data; int * fops; int minors; int major; } ;
typedef int async_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gendisk*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,struct scsi_disk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct scsi_disk*) ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int ,struct scsi_disk*,char*,char*) ;
 int FUNC_8 (struct gendisk*) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(void *VAR_9, async_cookie_t VAR_10)
{
 struct scsi_disk *VAR_11 = VAR_9;
 struct scsi_device *VAR_12;
 struct gendisk *VAR_13;
 u32 VAR_14;
 struct device *VAR_15;

 VAR_12 = VAR_11->device;
 VAR_13 = VAR_11->disk;
 VAR_14 = VAR_11->index;
 VAR_15 = &VAR_12->sdev_gendev;

 if (VAR_14 < VAR_4) {
  VAR_13->major = FUNC_6((VAR_14 & 0xf0) >> 4);
  VAR_13->first_minor = ((VAR_14 & 0xf) << 4) | (VAR_14 & 0xfff00);
  VAR_13->minors = VAR_5;
 }
 VAR_13->fops = &VAR_6;
 VAR_13->private_data = &VAR_11->driver;
 VAR_13->queue = VAR_11->device->request_queue;


 VAR_12->sector_size = 512;
 VAR_11->capacity = 0;
 VAR_11->media_present = 1;
 VAR_11->write_prot = 0;
 VAR_11->cache_override = 0;
 VAR_11->WCE = 0;
 VAR_11->RCD = 0;
 VAR_11->ATO = 0;
 VAR_11->first_scan = 1;

 FUNC_8(VAR_13);

 FUNC_1(VAR_12->request_queue, VAR_7);
 FUNC_2(VAR_12->request_queue, VAR_8);

 VAR_13->driverfs_dev = &VAR_12->sdev_gendev;
 VAR_13->flags = VAR_1 | VAR_0;
 if (VAR_12->removable)
  VAR_13->flags |= VAR_2;

 FUNC_3(VAR_15, VAR_11);
 FUNC_0(VAR_13);
 if (VAR_11->capacity)
  FUNC_5(VAR_11);

 FUNC_8(VAR_13);

 FUNC_7(VAR_3, VAR_11, "Attached SCSI %sdisk\n",
    VAR_12->removable ? "removable " : "");
 FUNC_4(&VAR_11->dev);
}
