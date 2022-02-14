
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* cdev; } ;
struct dasd_ccw_req {int expires; int retries; int status; int buildclk; struct dasd_device* memdev; struct dasd_device* startdev; scalar_t__ data; struct ccw1* cpaddr; } ;
struct ccw1 {int count; scalar_t__ flags; void* cda; int cmd_code; } ;
typedef scalar_t__ addr_t ;
typedef void* __u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_1 (int,int,int,struct dasd_device*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 () ;
 unsigned long* FUNC_4 (unsigned long*,void*,int) ;
 scalar_t__ FUNC_5 (void*,int) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_6(struct dasd_device *VAR_4,
         void *VAR_5,
         int VAR_6,
         int VAR_7)
{
 struct dasd_ccw_req *VAR_8;
 struct ccw1 *VAR_9;
 unsigned long *VAR_10;

 VAR_8 = FUNC_1(VAR_7, 1 , VAR_6, VAR_4);

 if (FUNC_0(VAR_8)) {

  FUNC_2(&VAR_4->cdev->dev,
    "An error occurred in the DASD device driver, "
    "reason=%s\n", "13");
  return VAR_8;
 }

 VAR_9 = VAR_8->cpaddr;
 VAR_9->cmd_code = VAR_0;
 if (FUNC_5(VAR_5, VAR_6)) {
  VAR_10 = (unsigned long *) (VAR_8->data);
  VAR_9->cda = (__u32)(addr_t) VAR_10;
  VAR_9->flags = VAR_1;
  VAR_10 = FUNC_4(VAR_10, VAR_5, VAR_6);
 } else {
  VAR_9->cda = (__u32)(addr_t) VAR_5;
  VAR_9->flags = 0;
 }

 VAR_9->count = VAR_6;
 VAR_8->startdev = VAR_4;
 VAR_8->memdev = VAR_4;
 VAR_8->expires = 10*VAR_3;
 VAR_8->retries = 256;
 VAR_8->buildclk = FUNC_3();
 VAR_8->status = VAR_2;
 return VAR_8;
}
