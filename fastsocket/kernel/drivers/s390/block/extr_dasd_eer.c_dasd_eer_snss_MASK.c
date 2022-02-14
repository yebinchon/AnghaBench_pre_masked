
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int ccw_queue; int flags; struct dasd_ccw_req* eer_cqr; } ;
struct dasd_ccw_req {int devlist; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct dasd_device *VAR_3)
{
 struct dasd_ccw_req *VAR_4;

 VAR_4 = VAR_3->eer_cqr;
 if (!VAR_4)
  return;
 if (FUNC_4(VAR_1, &VAR_3->flags)) {

  FUNC_3(VAR_2, &VAR_3->flags);
  return;
 }

 FUNC_0(VAR_2, &VAR_3->flags);
 VAR_4->status = VAR_0;
 FUNC_2(&VAR_4->devlist, &VAR_3->ccw_queue);
 FUNC_1(VAR_3);
}
