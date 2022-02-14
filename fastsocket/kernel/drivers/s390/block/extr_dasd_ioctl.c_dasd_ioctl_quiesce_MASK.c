
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_block {struct dasd_device* base; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dasd_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct dasd_block *VAR_3)
{
 unsigned long VAR_4;
 struct dasd_device *VAR_5;

 VAR_5 = VAR_3->base;
 if (!FUNC_0 (VAR_0))
  return -VAR_2;

 FUNC_4("%s: The DASD has been put in the quiesce "
  "state\n", FUNC_2(&VAR_5->cdev->dev));
 FUNC_5(FUNC_3(VAR_5->cdev), VAR_4);
 FUNC_1(VAR_5, VAR_1);
 FUNC_6(FUNC_3(VAR_5->cdev), VAR_4);
 return 0;
}
