
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ide_disk_obj {struct gendisk* disk; TYPE_1__* drive; } ;
struct gendisk {int * private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * driver_data; int * disk_ops; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (struct ide_disk_obj*) ;
 int FUNC_1 (struct gendisk*) ;
 struct ide_disk_obj* FUNC_2 (struct device*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct ide_disk_obj *VAR_2 = FUNC_2(VAR_1, VAR_0);
 ide_drive_t *VAR_3 = VAR_2->drive;
 struct gendisk *VAR_4 = VAR_2->disk;

 VAR_3->disk_ops = ((void*)0);
 VAR_3->driver_data = ((void*)0);
 VAR_4->private_data = ((void*)0);
 FUNC_1(VAR_4);
 FUNC_0(VAR_2);
}
