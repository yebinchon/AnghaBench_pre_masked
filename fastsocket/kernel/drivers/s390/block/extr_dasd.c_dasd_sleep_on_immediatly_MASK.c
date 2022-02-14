
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct dasd_device {scalar_t__ block; int cdev; TYPE_1__ ccw_queue; int flags; } ;
struct dasd_ccw_req {scalar_t__ status; int intrc; int devlist; int callback_data; int callback; int flags; struct dasd_device* startdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dasd_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(struct dasd_ccw_req *VAR_10)
{
 struct dasd_device *VAR_11;
 int VAR_12;

 VAR_11 = VAR_10->startdev;
 if (FUNC_8(VAR_4, &VAR_11->flags) &&
     !FUNC_8(VAR_0, &VAR_10->flags)) {
  VAR_10->status = VAR_2;
  VAR_10->intrc = -VAR_7;
  return -VAR_6;
 }
 FUNC_6(FUNC_4(VAR_11->cdev));
 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12) {
  FUNC_7(FUNC_4(VAR_11->cdev));
  return VAR_12;
 }
 VAR_10->callback = VAR_8;
 VAR_10->callback_data = VAR_5;
 VAR_10->status = VAR_3;




 FUNC_5(&VAR_10->devlist, VAR_11->ccw_queue.next);


 FUNC_3(VAR_11);

 FUNC_7(FUNC_4(VAR_11->cdev));

 FUNC_9(VAR_9, FUNC_1(VAR_10));

 if (VAR_10->status == VAR_1)
  VAR_12 = 0;
 else if (VAR_10->intrc)
  VAR_12 = VAR_10->intrc;
 else
  VAR_12 = -VAR_6;


 FUNC_3(VAR_11);
 if (VAR_11->block)
  FUNC_2(VAR_11->block);

 return VAR_12;
}
