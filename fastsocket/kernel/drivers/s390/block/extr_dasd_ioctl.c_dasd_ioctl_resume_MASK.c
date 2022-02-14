
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
 int FUNC_2 (struct dasd_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct dasd_block *VAR_3)
{
 unsigned long VAR_4;
 struct dasd_device *VAR_5;

 VAR_5 = VAR_3->base;
 if (!FUNC_0 (VAR_0))
  return -VAR_2;

 FUNC_5("%s: I/O operations have been resumed "
  "on the DASD\n", FUNC_3(&VAR_5->cdev->dev));
 FUNC_6(FUNC_4(VAR_5->cdev), VAR_4);
 FUNC_1(VAR_5, VAR_1);
 FUNC_7(FUNC_4(VAR_5->cdev), VAR_4);

 FUNC_2(VAR_3);
 return 0;
}
