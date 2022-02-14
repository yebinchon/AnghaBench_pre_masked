
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {struct dasd_devmap* private_data; } ;
struct dasd_devmap {int dummy; } ;
struct dasd_device {TYPE_1__* cdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct dasd_devmap*) ;
 int VAR_0 ;
 struct dasd_devmap* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct gendisk *VAR_1, struct dasd_device *VAR_2)
{
 struct dasd_devmap *VAR_3;

 VAR_3 = FUNC_1(FUNC_2(&VAR_2->cdev->dev));
 if (FUNC_0(VAR_3))
  return;
 FUNC_3(&VAR_0);
 VAR_1->private_data = VAR_3;
 FUNC_4(&VAR_0);
}
