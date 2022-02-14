
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nsec; int bsize; } ;
struct ub_lun {TYPE_1__ capacity; int udev; } ;
struct gendisk {int queue; struct ub_lun* private_data; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gendisk*,int ) ;
 int FUNC_2 (int ,struct ub_lun*) ;

__attribute__((used)) static int FUNC_3(struct gendisk *VAR_0)
{
 struct ub_lun *VAR_1 = VAR_0->private_data;

 FUNC_2(VAR_1->udev, VAR_1);


 FUNC_0(VAR_0->queue, VAR_1->capacity.bsize);
 FUNC_1(VAR_0, VAR_1->capacity.nsec);


 return 0;
}
