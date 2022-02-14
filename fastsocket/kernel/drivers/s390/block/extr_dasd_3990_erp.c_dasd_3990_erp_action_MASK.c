
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int features; TYPE_2__* cdev; } ;
struct TYPE_3__ {int scsw; } ;
struct dasd_ccw_req {int blocklist; int status; struct dasd_ccw_req* refers; TYPE_1__ irb; struct dasd_device* startdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,struct dasd_ccw_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct dasd_ccw_req *
FUNC_9(struct dasd_ccw_req * VAR_6)
{
 struct dasd_ccw_req *VAR_7 = ((void*)0);
 struct dasd_device *VAR_8 = VAR_6->startdev;
 struct dasd_ccw_req *VAR_9 = ((void*)0);

 if (VAR_8->features & VAR_2) {

  FUNC_4(&VAR_8->cdev->dev,
       "ERP chain at BEGINNING of ERP-ACTION\n");
  for (VAR_9 = VAR_6;
       VAR_9 != ((void*)0); VAR_9 = VAR_9->refers) {

   FUNC_4(&VAR_8->cdev->dev,
        "ERP %p (%02x) refers to %p\n",
        VAR_9, VAR_9->status,
        VAR_9->refers);
  }
 }


 if ((FUNC_7(&VAR_6->irb.scsw) == 0x00) &&
     (FUNC_8(&VAR_6->irb.scsw) ==
      (VAR_4 | VAR_5))) {

  FUNC_0(VAR_3, VAR_8,
       "ERP called for successful request %p"
       " - NO ERP necessary", VAR_6);

  VAR_6->status = VAR_0;

  return VAR_6;
 }


 VAR_7 = FUNC_3(VAR_6);

 if (VAR_7 == ((void*)0)) {

  VAR_7 = FUNC_1(VAR_6);
 } else {

  VAR_7 = FUNC_2(VAR_6, VAR_7);
 }

 if (VAR_8->features & VAR_2) {

  FUNC_4(&VAR_8->cdev->dev,
       "ERP chain at END of ERP-ACTION\n");
  for (VAR_9 = VAR_7;
       VAR_9 != ((void*)0); VAR_9 = VAR_9->refers) {

   FUNC_4(&VAR_8->cdev->dev,
        "ERP %p (%02x) refers to %p\n",
        VAR_9, VAR_9->status,
        VAR_9->refers);
  }
 }


 if (FUNC_6(&VAR_7->blocklist)) {
  VAR_6->status = VAR_1;

  FUNC_5(&VAR_7->blocklist, &VAR_6->blocklist);
 }



 return VAR_7;

}
