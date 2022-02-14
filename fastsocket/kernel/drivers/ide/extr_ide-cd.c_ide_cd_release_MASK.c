
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int * private_data; } ;
struct device {int dummy; } ;
struct cdrom_device_info {TYPE_1__* handle; } ;
struct cdrom_info {struct cdrom_info* toc; struct gendisk* disk; TYPE_1__* drive; struct cdrom_device_info devinfo; } ;
struct TYPE_2__ {int queue; int * driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cdrom_info*) ;
 int FUNC_3 (struct gendisk*) ;
 struct cdrom_info* FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct cdrom_device_info*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2)
{
 struct cdrom_info *VAR_3 = FUNC_4(VAR_2, VAR_1);
 struct cdrom_device_info *VAR_4 = &VAR_3->devinfo;
 ide_drive_t *VAR_5 = VAR_3->drive;
 struct gendisk *VAR_6 = VAR_3->disk;

 FUNC_1(VAR_0, "enter");

 FUNC_2(VAR_3->toc);
 if (VAR_4->handle == VAR_5)
  FUNC_5(VAR_4);
 VAR_5->driver_data = ((void*)0);
 FUNC_0(VAR_5->queue, ((void*)0));
 VAR_6->private_data = ((void*)0);
 FUNC_3(VAR_6);
 FUNC_2(VAR_3);
}
