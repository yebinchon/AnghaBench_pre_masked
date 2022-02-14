
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {int dummy; } ;
struct dasd_ccw_req {struct dasd_ccw_req* data; struct dasd_ccw_req* cpaddr; } ;
struct ccw1 {struct ccw1* data; struct ccw1* cpaddr; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_ccw_req*) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_ccw_req*) ;

void FUNC_3(struct dasd_ccw_req *VAR_2, struct dasd_device *VAR_3)
{
 FUNC_2(VAR_2->cpaddr);
 FUNC_2(VAR_2->data);
 FUNC_2(VAR_2);
 FUNC_1(VAR_3);
}
