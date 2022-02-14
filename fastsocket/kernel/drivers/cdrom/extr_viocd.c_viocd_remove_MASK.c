
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vio_dev {size_t unit_address; } ;
struct disk_info {TYPE_1__* viocd_disk; int viocd_info; } ;
struct TYPE_3__ {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 struct disk_info* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct vio_dev *VAR_1)
{
 struct disk_info *VAR_2 = &VAR_0[VAR_1->unit_address];

 FUNC_3(&VAR_2->viocd_info);
 FUNC_1(VAR_2->viocd_disk);
 FUNC_0(VAR_2->viocd_disk->queue);
 FUNC_2(VAR_2->viocd_disk);
 return 0;
}
