
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct nvme_ns* queuedata; } ;
struct nvme_queue {int q_lock; int sq_cong; int sq_cong_wait; int sq_full; int q_suspended; } ;
struct nvme_ns {int dev; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 (int *,struct bio*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct nvme_queue* FUNC_4 (int ) ;
 int FUNC_5 (struct nvme_queue*) ;
 int FUNC_6 (struct nvme_queue*,struct nvme_ns*,struct bio*) ;
 int FUNC_7 (struct nvme_queue*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct request_queue *VAR_2, struct bio *VAR_3)
{
 struct nvme_ns *VAR_4 = VAR_2->queuedata;
 struct nvme_queue *VAR_5 = FUNC_4(VAR_4->dev);
 int VAR_6 = -VAR_0;

 if (!VAR_5) {
  FUNC_7(((void*)0));
  FUNC_1(VAR_3, -VAR_1);
  return 0;
 }

 FUNC_8(&VAR_5->q_lock);
 if (!VAR_5->q_suspended && FUNC_3(&VAR_5->sq_cong))
  VAR_6 = FUNC_6(VAR_5, VAR_4, VAR_3);
 if (FUNC_10(VAR_6)) {
  if (FUNC_3(&VAR_5->sq_cong))
   FUNC_0(&VAR_5->sq_full, &VAR_5->sq_cong_wait);
  FUNC_2(&VAR_5->sq_cong, VAR_3);
 }

 FUNC_5(VAR_5);
 FUNC_9(&VAR_5->q_lock);
 FUNC_7(VAR_5);
 return 0;
}
