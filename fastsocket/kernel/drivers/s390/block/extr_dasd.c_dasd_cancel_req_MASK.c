
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {TYPE_2__* cdev; TYPE_1__* discipline; } ;
struct dasd_ccw_req {int status; int stopclk; struct dasd_device* startdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* term_IO ) (struct dasd_ccw_req*) ;} ;


 int VAR_0 ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int *,char*,struct dasd_ccw_req*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct dasd_ccw_req*) ;

int FUNC_7(struct dasd_ccw_req *VAR_1)
{
 struct dasd_device *VAR_2 = VAR_1->startdev;
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = 0;
 FUNC_4(FUNC_2(VAR_2->cdev), VAR_3);
 switch (VAR_1->status) {
 case 128:

  VAR_1->status = VAR_0;
  break;
 case 129:

  VAR_4 = VAR_2->discipline->term_IO(VAR_1);
  if (VAR_4) {
   FUNC_1(&VAR_2->cdev->dev,
    "Cancelling request %p failed with rc=%d\n",
    VAR_1, VAR_4);
  } else {
   VAR_1->stopclk = FUNC_3();
  }
  break;
 default:
  break;
 }
 FUNC_5(FUNC_2(VAR_2->cdev), VAR_3);
 FUNC_0(VAR_2);
 return VAR_4;
}
