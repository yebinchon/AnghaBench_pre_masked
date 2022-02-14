
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opm; } ;
struct dasd_device {TYPE_2__* cdev; TYPE_1__ path_data; } ;
struct dasd_ccw_req {int stopclk; int status; int lpm; int flags; int retries; struct dasd_device* startdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;

struct dasd_ccw_req *
FUNC_5(struct dasd_ccw_req *VAR_4)
{
 struct dasd_device *VAR_5;

 VAR_5 = VAR_4->startdev;


        if (VAR_4->retries > 0) {
  FUNC_0(VAR_3, VAR_5,
                             "default ERP called (%i retries left)",
                             VAR_4->retries);
  if (!FUNC_4(VAR_2, &VAR_4->flags))
   VAR_4->lpm = VAR_5->path_data.opm;
  VAR_4->status = VAR_1;
        } else {
  FUNC_3("%s: default ERP has run out of retries and failed\n",
         FUNC_1(&VAR_5->cdev->dev));
  VAR_4->status = VAR_0;
  VAR_4->stopclk = FUNC_2();
        }
        return VAR_4;
}
