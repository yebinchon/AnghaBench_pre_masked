
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scsi_device; } ;
struct osd_uld_device {TYPE_1__ od; } ;
struct osd_dev {scalar_t__ scsi_device; TYPE_2__* file; } ;
struct TYPE_4__ {struct osd_uld_device* private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct osd_dev*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct osd_dev*) ;

void FUNC_4(struct osd_dev *VAR_0)
{

 if (VAR_0 && !FUNC_1(VAR_0)) {
  struct osd_uld_device *VAR_1 = VAR_0->file->private_data;

  FUNC_0(VAR_0->scsi_device != VAR_1->od.scsi_device);

  FUNC_2(VAR_0->file);
  FUNC_3(VAR_0);
 }
}
