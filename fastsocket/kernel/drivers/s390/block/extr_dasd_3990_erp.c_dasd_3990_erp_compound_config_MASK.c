
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {void (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct dasd_ccw_req * VAR_2, char *VAR_3)
{

 if ((VAR_3[25] & VAR_0) && (VAR_3[26] & VAR_1)) {




  struct dasd_device *VAR_4 = VAR_2->startdev;
  FUNC_0(&VAR_4->cdev->dev,
   "An error occurred in the DASD device driver, "
   "reason=%s\n", "05");

 }

 VAR_2->function = FUNC_1;

}
