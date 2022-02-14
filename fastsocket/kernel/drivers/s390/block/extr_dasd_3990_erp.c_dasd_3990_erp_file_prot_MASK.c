
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_2(struct dasd_ccw_req * VAR_1)
{

 struct dasd_device *VAR_2 = VAR_1->startdev;

 FUNC_1(&VAR_2->cdev->dev, "Accessing the DASD failed because of "
  "a hardware error\n");

 return FUNC_0(VAR_1, VAR_0);

}
