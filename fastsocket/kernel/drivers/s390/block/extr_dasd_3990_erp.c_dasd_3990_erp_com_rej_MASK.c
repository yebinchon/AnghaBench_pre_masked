
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int retries; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*,char*) ;struct dasd_device* startdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*,int ) ;
 int FUNC_2 (struct dasd_ccw_req*,char*) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_4(struct dasd_ccw_req * VAR_4, char *VAR_5)
{

 struct dasd_device *VAR_6 = VAR_4->startdev;

 VAR_4->function = FUNC_4;


 if (VAR_5[2] & VAR_3) {

  FUNC_0(VAR_1, VAR_6, "%s",
       "Command Reject - environmental data present");

  FUNC_2(VAR_4, VAR_5);

  VAR_4->retries = 5;

 } else if (VAR_5[1] & VAR_2) {
  FUNC_3(&VAR_6->cdev->dev, "An I/O request was rejected"
   " because writing is inhibited\n");
  VAR_4 = FUNC_1(VAR_4, VAR_0);
 } else {


  FUNC_3(&VAR_6->cdev->dev, "An error occurred in the DASD "
   "device driver, reason=%s\n", "09");

  VAR_4 = FUNC_1(VAR_4, VAR_0);
 }

 return VAR_4;

}
