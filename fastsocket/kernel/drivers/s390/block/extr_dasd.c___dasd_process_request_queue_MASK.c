
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct dasd_device {scalar_t__ state; int features; int cdev; TYPE_1__* discipline; } ;
struct dasd_ccw_req {int blocklist; int status; void* callback_data; } ;
struct dasd_block {int ccw_queue; struct request_queue* request_queue; struct dasd_device* base; } ;
struct TYPE_2__ {struct dasd_ccw_req* (* build_cp ) (struct dasd_device*,struct dasd_block*,struct request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int ,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct dasd_ccw_req*) ;
 int FUNC_2 (struct dasd_ccw_req*) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct request*,int ) ;
 struct request* FUNC_4 (struct request_queue*) ;
 struct request* FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct dasd_block*,int) ;
 int FUNC_9 (struct dasd_device*,int ) ;
 int FUNC_10 (struct dasd_block*,struct dasd_ccw_req*,struct request*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct request*) ;
 int FUNC_15 (int ,unsigned long) ;
 int FUNC_16 (int ,unsigned long) ;
 struct dasd_ccw_req* FUNC_17 (struct dasd_device*,struct dasd_block*,struct request*) ;

__attribute__((used)) static void FUNC_18(struct dasd_block *VAR_11)
{
 struct request_queue *VAR_12;
 struct request *VAR_13;
 struct dasd_ccw_req *VAR_14;
 struct dasd_device *VAR_15;
 unsigned long VAR_16;
 VAR_12 = VAR_11->request_queue;
 VAR_15 = VAR_11->base;

 if (VAR_12 == ((void*)0))
  return;
 if (VAR_15->state < VAR_2) {
  while ((VAR_13 = FUNC_4(VAR_11->request_queue)))
   FUNC_3(VAR_13, -VAR_7);
  return;
 }

 while (!FUNC_6(VAR_12) && (VAR_13 = FUNC_5(VAR_12))) {
  if (VAR_15->features & VAR_1 &&
      FUNC_14(VAR_13) == VAR_10) {
   FUNC_0(VAR_4, VAR_15,
          "Rejecting write request %p",
          VAR_13);
   FUNC_7(VAR_13);
   FUNC_3(VAR_13, -VAR_7);
   continue;
  }
  VAR_14 = VAR_15->discipline->build_cp(VAR_15, VAR_11, VAR_13);
  if (FUNC_1(VAR_14)) {
   if (FUNC_2(VAR_14) == -VAR_6)
    break;
   if (FUNC_2(VAR_14) == -VAR_8)
    break;
   if (FUNC_2(VAR_14) == -VAR_5) {






    if (!FUNC_13(&VAR_11->ccw_queue))
     break;
    FUNC_15(
     FUNC_11(VAR_15->cdev), VAR_16);
    FUNC_9(VAR_15,
         VAR_3);
    FUNC_16(
     FUNC_11(VAR_15->cdev), VAR_16);
    FUNC_8(VAR_11, VAR_9/2);
    break;
   }
   FUNC_0(VAR_4, VAR_15,
          "CCW creation failed (rc=%ld) "
          "on request %p",
          FUNC_2(VAR_14), VAR_13);
   FUNC_7(VAR_13);
   FUNC_3(VAR_13, -VAR_7);
   continue;
  }




  VAR_14->callback_data = (void *) VAR_13;
  VAR_14->status = VAR_0;
  FUNC_7(VAR_13);
  FUNC_12(&VAR_14->blocklist, &VAR_11->ccw_queue);
  FUNC_10(VAR_11, VAR_14, VAR_13);
 }
}
