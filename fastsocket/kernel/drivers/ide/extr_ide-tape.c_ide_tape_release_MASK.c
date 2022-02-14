
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ide_tape_obj {int minor; int valid; struct gendisk* disk; TYPE_1__* drive; } ;
struct gendisk {int * private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * driver_data; int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ide_tape_obj*) ;
 int FUNC_4 (struct gendisk*) ;
 struct ide_tape_obj* FUNC_5 (struct device*,int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_5)
{
 struct ide_tape_obj *VAR_6 = FUNC_5(VAR_5, VAR_2);
 ide_drive_t *VAR_7 = VAR_6->drive;
 struct gendisk *VAR_8 = VAR_6->disk;

 FUNC_0(VAR_6->valid);

 VAR_7->dev_flags &= ~VAR_1;
 VAR_7->driver_data = ((void*)0);
 FUNC_2(VAR_4, FUNC_1(VAR_0, VAR_6->minor));
 FUNC_2(VAR_4,
   FUNC_1(VAR_0, VAR_6->minor + 128));
 VAR_3[VAR_6->minor] = ((void*)0);
 VAR_8->private_data = ((void*)0);
 FUNC_4(VAR_8);
 FUNC_3(VAR_6);
}
