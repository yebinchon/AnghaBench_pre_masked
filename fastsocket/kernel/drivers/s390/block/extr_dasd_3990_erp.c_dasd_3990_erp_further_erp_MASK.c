
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {scalar_t__ function; int status; int irb; struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char) ;
 int VAR_2 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,int) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct dasd_ccw_req* FUNC_4 (struct dasd_ccw_req*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,struct dasd_ccw_req*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_7(struct dasd_ccw_req *VAR_10)
{

 struct dasd_device *VAR_11 = VAR_10->startdev;
 char *VAR_12 = FUNC_5(&VAR_10->irb);


 if ((VAR_10->function == VAR_5) ||
     (VAR_10->function == FUNC_2) ||
     (VAR_10->function == VAR_3)) {

  VAR_10 = FUNC_2(VAR_10);

 } else if (VAR_10->function == FUNC_3) {
  VAR_10 = FUNC_3(VAR_10);
 } else if (VAR_10->function == VAR_4) {



  VAR_10 = FUNC_2(VAR_10);

  if (VAR_12 && !(VAR_12[2] & VAR_1)) {




   switch (VAR_12[25]) {
   case 0x17:
   case 0x57:{
     VAR_10 = FUNC_1(VAR_10, 0x20);
     break;
    }
   case 0x18:
   case 0x58:{
     VAR_10 = FUNC_1(VAR_10, 0x40);
     break;
    }
   case 0x19:
   case 0x59:{
     VAR_10 = FUNC_1(VAR_10, 0x80);
     break;
    }
   default:
    FUNC_0(VAR_2, VAR_11,
         "invalid subcommand modifier 0x%x "
         "for Diagnostic Control Command",
         VAR_12[25]);
   }
  }


 } else if (VAR_12 &&
     ((VAR_10->function == VAR_9) ||
      (VAR_10->function == VAR_8) ||
      (VAR_10->function == VAR_6) ||
      (VAR_10->function == VAR_7))) {

  VAR_10 = FUNC_4(VAR_10, VAR_12);

 } else {




  FUNC_6(&VAR_11->cdev->dev,
   "ERP %p has run out of retries and failed\n", VAR_10);

  VAR_10->status = VAR_0;
 }

 return VAR_10;

}
