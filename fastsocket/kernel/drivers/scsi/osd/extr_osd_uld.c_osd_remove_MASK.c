
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ owner; } ;
struct TYPE_3__ {struct scsi_device* scsi_device; } ;
struct osd_uld_device {TYPE_2__ cdev; int minor; scalar_t__ class_member; TYPE_1__ od; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,struct device*,struct osd_uld_device*,struct scsi_device*,struct scsi_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct osd_uld_device*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct osd_uld_device* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 struct scsi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct scsi_device *VAR_3 = FUNC_6(VAR_2);
 struct osd_uld_device *VAR_4 = FUNC_4(VAR_2);

 if (!VAR_4 || (VAR_4->od.scsi_device != VAR_3)) {
  FUNC_1("Half cooked osd-device %p,%p || %p!=%p",
   VAR_2, VAR_4, VAR_4 ? VAR_4->od.scsi_device : ((void*)0),
   VAR_3);
 }

 if (VAR_4->class_member)
  FUNC_5(VAR_1,
          FUNC_0(VAR_0, VAR_4->minor));






 if (VAR_4->cdev.owner)
  FUNC_3(&VAR_4->cdev);

 FUNC_2(VAR_4);
 return 0;
}
