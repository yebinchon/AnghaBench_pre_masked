
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_devmap {struct dasd_device* device; } ;
struct dasd_device {struct ccw_device* cdev; int ref_count; } ;
struct ccw_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dasd_devmap*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dasd_devmap* FUNC_4 (int ) ;
 int FUNC_5 (struct dasd_device*) ;
 int FUNC_6 (struct dasd_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct ccw_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,unsigned long) ;
 int FUNC_15 (int ,int) ;

void
FUNC_16(struct dasd_device *VAR_2)
{
 struct ccw_device *VAR_3;
 struct dasd_devmap *VAR_4;
 unsigned long VAR_5;


 VAR_4 = FUNC_4(FUNC_7(&VAR_2->cdev->dev));
 FUNC_0(FUNC_1(VAR_4));
 FUNC_11(&VAR_1);
 if (VAR_4->device != VAR_2) {
  FUNC_13(&VAR_1);
  FUNC_6(VAR_2);
  return;
 }
 VAR_4->device = ((void*)0);
 FUNC_13(&VAR_1);


 FUNC_12(FUNC_9(VAR_2->cdev), VAR_5);
 FUNC_8(&VAR_2->cdev->dev, ((void*)0));
 FUNC_14(FUNC_9(VAR_2->cdev), VAR_5);





 FUNC_3(3, &VAR_2->ref_count);


 FUNC_15(VAR_0, FUNC_2(&VAR_2->ref_count) == 0);


 VAR_3 = VAR_2->cdev;
 VAR_2->cdev = ((void*)0);


 FUNC_10(&VAR_3->dev);


 FUNC_5(VAR_2);
}
