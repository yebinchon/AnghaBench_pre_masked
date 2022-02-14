
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ide_tape_obj {struct gendisk* disk; } ;
struct ide_atapi_pc {int dummy; } ;
struct gendisk {int dummy; } ;
struct TYPE_6__ {struct ide_tape_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,struct gendisk*,struct ide_atapi_pc*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct ide_atapi_pc*) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_1)
{
 struct ide_tape_obj *VAR_2 = VAR_1->driver_data;
 struct gendisk *VAR_3 = VAR_2->disk;
 struct ide_atapi_pc VAR_4;
 int VAR_5;

 FUNC_0(VAR_0, "enter");

 FUNC_3(VAR_1, &VAR_4);
 VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_4, ((void*)0), 0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
