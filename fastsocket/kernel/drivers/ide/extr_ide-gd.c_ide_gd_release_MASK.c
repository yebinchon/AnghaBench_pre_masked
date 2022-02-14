
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ide_disk_obj {int openers; TYPE_2__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_6__ {int dev_flags; TYPE_1__* disk_ops; } ;
typedef TYPE_2__ ide_drive_t ;
typedef int fmode_t ;
struct TYPE_5__ {int (* set_doorlock ) (TYPE_2__*,struct gendisk*,int ) ;int (* flush ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct ide_disk_obj*) ;
 struct ide_disk_obj* FUNC_2 (struct gendisk*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_4, fmode_t VAR_5)
{
 struct ide_disk_obj *VAR_6 = FUNC_2(VAR_4, VAR_3);
 ide_drive_t *VAR_7 = VAR_6->drive;

 FUNC_0(VAR_0, "enter");

 if (VAR_6->openers == 1)
  VAR_7->disk_ops->flush(VAR_7);

 if ((VAR_7->dev_flags & VAR_2) && VAR_6->openers == 1) {
  VAR_7->disk_ops->set_doorlock(VAR_7, VAR_4, 0);
  VAR_7->dev_flags &= ~VAR_1;
 }

 VAR_6->openers--;

 FUNC_1(VAR_6);

 return 0;
}
