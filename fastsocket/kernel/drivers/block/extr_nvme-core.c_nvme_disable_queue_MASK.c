
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {size_t cq_vector; int q_suspended; int q_lock; } ;
struct nvme_dev {TYPE_1__* entry; struct nvme_queue** queues; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (struct nvme_dev*,int) ;
 int FUNC_1 (struct nvme_dev*,int) ;
 int FUNC_2 (int,struct nvme_queue*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct nvme_queue*,int) ;
 int FUNC_5 (struct nvme_queue*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct nvme_dev *VAR_0, int VAR_1)
{
 struct nvme_queue *VAR_2 = VAR_0->queues[VAR_1];
 int VAR_3 = VAR_0->entry[VAR_2->cq_vector].vector;

 FUNC_6(&VAR_2->q_lock);
 if (VAR_2->q_suspended) {
  FUNC_7(&VAR_2->q_lock);
  return;
 }
 VAR_2->q_suspended = 1;
 FUNC_7(&VAR_2->q_lock);

 FUNC_3(VAR_3, ((void*)0));
 FUNC_2(VAR_3, VAR_2);


 if (VAR_1) {
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_1);
 }

 FUNC_6(&VAR_2->q_lock);
 FUNC_5(VAR_2);
 FUNC_4(VAR_2, 0);
 FUNC_7(&VAR_2->q_lock);
}
