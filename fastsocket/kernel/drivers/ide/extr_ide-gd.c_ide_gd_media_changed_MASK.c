
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ide_disk_obj {TYPE_1__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_2__ {int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ide_disk_obj* FUNC_0 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_1(struct gendisk *VAR_3)
{
 struct ide_disk_obj *VAR_4 = FUNC_0(VAR_3, VAR_2);
 ide_drive_t *VAR_5 = VAR_4->drive;
 int VAR_6;


 if (VAR_5->dev_flags & VAR_0) {
  VAR_5->dev_flags &= ~VAR_0;
  return 0;
 }

 VAR_6 = !!(VAR_5->dev_flags & VAR_1);
 VAR_5->dev_flags &= ~VAR_1;

 return VAR_6;
}
