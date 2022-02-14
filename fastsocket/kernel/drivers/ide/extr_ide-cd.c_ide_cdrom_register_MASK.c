
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cdrom_device_info {int capacity; int disk; int mask; int name; TYPE_1__* handle; int speed; int * ops; } ;
struct cdrom_info {int disk; int current_speed; struct cdrom_device_info devinfo; } ;
struct TYPE_3__ {int atapi_flags; int name; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct cdrom_device_info*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_4, int VAR_5)
{
 struct cdrom_info *VAR_6 = VAR_4->driver_data;
 struct cdrom_device_info *VAR_7 = &VAR_6->devinfo;

 FUNC_0(VAR_2, "nslots: %d", VAR_5);

 VAR_7->ops = &VAR_3;
 VAR_7->speed = VAR_6->current_speed;
 VAR_7->capacity = VAR_5;
 VAR_7->handle = VAR_4;
 FUNC_2(VAR_7->name, VAR_4->name);

 if (VAR_4->atapi_flags & VAR_1)
  VAR_7->mask |= VAR_0;

 VAR_7->disk = VAR_6->disk;
 return FUNC_1(VAR_7);
}
