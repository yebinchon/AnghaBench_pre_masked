
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct ide_disk_obj {int driver; } ;
struct TYPE_5__ {int dev_flags; int atapi_flags; int queue; int pc_delay; int pc_callback; int * id; struct ide_disk_obj* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_7)
{
 struct ide_disk_obj *VAR_8 = VAR_7->driver_data;
 u16 *VAR_9 = VAR_7->id;

 VAR_7->pc_callback = VAR_6;
 if (!FUNC_3((char *)&VAR_9[VAR_0], "IOMEGA ZIP 100 ATAPI", 20)) {
  VAR_7->atapi_flags |= VAR_3;

  VAR_7->pc_delay = VAR_1;
  FUNC_0(VAR_7->queue, 64);
 }





 if (FUNC_3((char *)&VAR_9[VAR_0], "IOMEGA Clik!", 11) == 0) {
  FUNC_0(VAR_7->queue, 64);
  VAR_7->atapi_flags |= VAR_2;

  VAR_7->dev_flags &= ~VAR_5;
 }

 (void) FUNC_1(VAR_7);

 FUNC_2(VAR_7, VAR_8->driver);

 VAR_7->dev_flags |= VAR_4;
}
