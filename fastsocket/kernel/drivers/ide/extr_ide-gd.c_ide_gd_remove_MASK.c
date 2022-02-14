
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ide_disk_obj {int dev; int driver; struct gendisk* disk; } ;
struct gendisk {int dummy; } ;
struct TYPE_7__ {TYPE_1__* disk_ops; struct ide_disk_obj* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_6__ {int (* flush ) (TYPE_2__*) ;} ;


 int FUNC_0 (struct gendisk*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_1)
{
 struct ide_disk_obj *VAR_2 = VAR_1->driver_data;
 struct gendisk *VAR_3 = VAR_2->disk;

 FUNC_2(VAR_1, VAR_2->driver);
 FUNC_1(&VAR_2->dev);
 FUNC_0(VAR_3);
 VAR_1->disk_ops->flush(VAR_1);

 FUNC_3(&VAR_0);
 FUNC_5(&VAR_2->dev);
 FUNC_4(&VAR_0);
}
