
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; int flags; struct dasd_ccw_req* eer_cqr; } ;
struct dasd_ccw_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct dasd_device *VAR_2)
{
 struct dasd_ccw_req *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_2->eer_cqr)
  return;
 FUNC_3(FUNC_2(VAR_2->cdev), VAR_4);
 VAR_3 = VAR_2->eer_cqr;
 VAR_2->eer_cqr = ((void*)0);
 FUNC_0(VAR_1, &VAR_2->flags);
 VAR_5 = FUNC_5(VAR_0, &VAR_2->flags);
 FUNC_4(FUNC_2(VAR_2->cdev), VAR_4);
 if (VAR_3 && !VAR_5)
  FUNC_1(VAR_3, VAR_2);
}
