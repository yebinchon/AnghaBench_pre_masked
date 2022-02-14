
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_ccw_req {scalar_t__ status; int retries; struct dasd_ccw_req* (* function ) (struct dasd_ccw_req*) ;TYPE_2__* startdev; int lpm; int flags; } ;
struct TYPE_3__ {int opm; } ;
struct TYPE_4__ {TYPE_1__ path_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static struct dasd_ccw_req *FUNC_3(struct dasd_ccw_req *VAR_3)
{
 VAR_3->function = FUNC_3;
 FUNC_1(VAR_3);
 if (VAR_3->status == VAR_0 &&
     !FUNC_2(VAR_2, &VAR_3->flags)) {
  VAR_3->status = VAR_1;
  VAR_3->retries = 10;
  VAR_3->lpm = VAR_3->startdev->path_data.opm;
  VAR_3->function = FUNC_0;
 }
 return VAR_3;
}
