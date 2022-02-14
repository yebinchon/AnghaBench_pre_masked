
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ide_disk_obj {int disk; } ;
struct ide_atapi_pc {int req_xfer; int flags; } ;
struct TYPE_4__ {int atapi_flags; struct ide_disk_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ide_atapi_pc*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,struct ide_atapi_pc*,int*,int ) ;

__attribute__((used)) static int FUNC_2(ide_drive_t *VAR_3, struct ide_atapi_pc *VAR_4)
{
 struct ide_disk_obj *VAR_5 = VAR_3->driver_data;
 u8 VAR_6[20];

 VAR_3->atapi_flags &= ~VAR_1;

 FUNC_0(VAR_4, VAR_0);
 VAR_4->flags |= VAR_2;

 if (FUNC_1(VAR_3, VAR_5->disk, VAR_4, VAR_6, VAR_4->req_xfer))
  return 1;

 if (VAR_6[8 + 2] & 0x40)
  VAR_3->atapi_flags |= VAR_1;

 return 0;
}
