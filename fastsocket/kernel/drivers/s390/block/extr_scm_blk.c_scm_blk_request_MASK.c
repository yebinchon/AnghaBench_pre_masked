
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {int aob; } ;
struct scm_device {int dev; } ;
struct scm_blk_dev {int queued_reqs; } ;
struct request_queue {struct scm_device* queuedata; } ;
struct request {scalar_t__ cmd_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 struct request* FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request*) ;
 struct scm_blk_dev* FUNC_4 (int *) ;
 int FUNC_5 (struct scm_blk_dev*) ;
 int FUNC_6 (struct scm_request*) ;
 scalar_t__ FUNC_7 (struct scm_request*) ;
 int FUNC_8 (struct scm_blk_dev*,struct request*) ;
 int FUNC_9 (struct scm_request*) ;
 struct scm_request* FUNC_10 () ;
 int FUNC_11 (struct scm_blk_dev*,struct scm_request*,struct request*) ;
 int FUNC_12 (struct scm_request*) ;
 int FUNC_13 (struct scm_request*) ;
 int FUNC_14 (struct scm_request*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct request_queue *VAR_1)
{
 struct scm_device *VAR_2 = VAR_1->queuedata;
 struct scm_blk_dev *VAR_3 = FUNC_4(&VAR_2->dev);
 struct scm_request *VAR_4;
 struct request *VAR_5;
 int VAR_6;

 while ((VAR_5 = FUNC_2(VAR_1))) {
  if (VAR_5->cmd_type != VAR_0)
   continue;

  if (!FUNC_8(VAR_3, VAR_5)) {
   FUNC_5(VAR_3);
   return;
  }
  VAR_4 = FUNC_10();
  if (!VAR_4) {
   FUNC_0(5, "no request");
   FUNC_5(VAR_3);
   return;
  }
  FUNC_11(VAR_3, VAR_4, VAR_5);
  if (!FUNC_14(VAR_4)) {
   FUNC_0(5, "cluster busy");
   FUNC_9(VAR_4);
   return;
  }
  if (FUNC_7(VAR_4)) {
   FUNC_1(&VAR_3->queued_reqs);
   FUNC_3(VAR_5);
   FUNC_6(VAR_4);
   return;
  }
  FUNC_12(VAR_4);
  FUNC_1(&VAR_3->queued_reqs);
  FUNC_3(VAR_5);

  VAR_6 = FUNC_15(VAR_4->aob);
  if (VAR_6) {
   FUNC_0(5, "no subchannel");
   FUNC_13(VAR_4);
   return;
  }
 }
}
