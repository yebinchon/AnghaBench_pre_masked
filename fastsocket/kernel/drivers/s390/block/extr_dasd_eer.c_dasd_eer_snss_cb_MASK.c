
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int cdev; int flags; struct dasd_ccw_req* eer_cqr; } ;
struct dasd_ccw_req {struct dasd_device* startdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct dasd_device*,struct dasd_ccw_req*,int ) ;
 int FUNC_3 (struct dasd_ccw_req*,struct dasd_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct dasd_ccw_req *VAR_3, void *VAR_4)
{
 struct dasd_device *VAR_5 = VAR_3->startdev;
 unsigned long VAR_6;

 FUNC_2(VAR_5, VAR_3, VAR_0);
 FUNC_5(FUNC_4(VAR_5->cdev), VAR_6);
 if (VAR_5->eer_cqr == VAR_3) {
  FUNC_0(VAR_1, &VAR_5->flags);
  if (FUNC_7(VAR_2, &VAR_5->flags))

   FUNC_1(VAR_5);
  VAR_3 = ((void*)0);
 }
 FUNC_6(FUNC_4(VAR_5->cdev), VAR_6);
 if (VAR_3)







  FUNC_3(VAR_3, VAR_5);
}
