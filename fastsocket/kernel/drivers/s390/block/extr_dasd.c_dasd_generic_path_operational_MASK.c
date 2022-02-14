
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {int stopped; scalar_t__ block; TYPE_1__* cdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct dasd_device*,int) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int *,char*) ;

int FUNC_6(struct dasd_device *VAR_3)
{
 FUNC_5(&VAR_3->cdev->dev, "A channel path to the device has become "
   "operational\n");
 FUNC_0(VAR_2, VAR_3, "%s", "path operational");
 FUNC_1(VAR_3, VAR_0);
 if (VAR_3->stopped & VAR_1) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_2(VAR_3);
  return 1;
 }
 FUNC_4(VAR_3);
 if (VAR_3->block)
  FUNC_3(VAR_3->block);
 return 1;
}
