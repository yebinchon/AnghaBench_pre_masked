
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct dasd_eckd_private {int count; } ;
struct dasd_ccw_req {TYPE_1__* memdev; } ;
struct TYPE_2__ {int cdev; scalar_t__ private; } ;


 int FUNC_0 (struct dasd_ccw_req*,struct request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct dasd_ccw_req *VAR_0,
       struct request *VAR_1)
{
 struct dasd_eckd_private *VAR_2;
 unsigned long VAR_3;

 FUNC_2(FUNC_1(VAR_0->memdev->cdev), VAR_3);
 VAR_2 = (struct dasd_eckd_private *) VAR_0->memdev->private;
 VAR_2->count--;
 FUNC_3(FUNC_1(VAR_0->memdev->cdev), VAR_3);
 return FUNC_0(VAR_0, VAR_1);
}
