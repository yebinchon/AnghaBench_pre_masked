
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cdrom_info {int dev; int disk; int driver; } ;
struct TYPE_4__ {struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_2)
{
 struct cdrom_info *VAR_3 = VAR_2->driver_data;

 FUNC_2(VAR_0, "enter");

 FUNC_3(VAR_2, VAR_3->driver);
 FUNC_1(&VAR_3->dev);
 FUNC_0(VAR_3->disk);

 FUNC_4(&VAR_1);
 FUNC_6(&VAR_3->dev);
 FUNC_5(&VAR_1);
}
