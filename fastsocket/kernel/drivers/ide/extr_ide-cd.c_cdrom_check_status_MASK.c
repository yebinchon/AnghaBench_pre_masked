
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request_sense {int dummy; } ;
struct cdrom_device_info {int sanyo_slot; } ;
struct cdrom_info {struct cdrom_device_info devinfo; } ;
struct TYPE_4__ {struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int ,int *,int *,struct request_sense*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (unsigned char*,int ,int) ;

int FUNC_3(ide_drive_t *VAR_4, struct request_sense *VAR_5)
{
 struct cdrom_info *VAR_6 = VAR_4->driver_data;
 struct cdrom_device_info *VAR_7 = &VAR_6->devinfo;
 unsigned char VAR_8[VAR_0];

 FUNC_1(VAR_2, "enter");

 FUNC_2(VAR_8, 0, VAR_0);
 VAR_8[0] = VAR_1;





 VAR_8[7] = VAR_7->sanyo_slot % 3;

 return FUNC_0(VAR_4, VAR_8, 0, ((void*)0), ((void*)0), VAR_5, 0, VAR_3);
}
