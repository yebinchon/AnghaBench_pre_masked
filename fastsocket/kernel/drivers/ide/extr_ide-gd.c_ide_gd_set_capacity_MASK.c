
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ide_disk_ops {unsigned long long (* set_capacity ) (TYPE_1__*,unsigned long long) ;} ;
struct ide_disk_obj {TYPE_1__* drive; } ;
struct gendisk {int dummy; } ;
struct TYPE_3__ {unsigned long long capacity64; struct ide_disk_ops* disk_ops; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 struct ide_disk_obj* FUNC_0 (struct gendisk*,int ) ;
 unsigned long long FUNC_1 (TYPE_1__*,unsigned long long) ;

__attribute__((used)) static unsigned long long FUNC_2(struct gendisk *VAR_1,
           unsigned long long VAR_2)
{
 struct ide_disk_obj *VAR_3 = FUNC_0(VAR_1, VAR_0);
 ide_drive_t *VAR_4 = VAR_3->drive;
 const struct ide_disk_ops *VAR_5 = VAR_4->disk_ops;

 if (VAR_5->set_capacity)
  return VAR_5->set_capacity(VAR_4, VAR_2);

 return VAR_4->capacity64;
}
