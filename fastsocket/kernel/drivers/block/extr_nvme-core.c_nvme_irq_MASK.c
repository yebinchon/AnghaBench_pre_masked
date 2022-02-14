
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int q_lock; scalar_t__ cqe_seen; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 irqreturn_t VAR_4;
 struct nvme_queue *VAR_5 = VAR_3;
 FUNC_1(&VAR_5->q_lock);
 FUNC_0(VAR_5);
 VAR_4 = VAR_5->cqe_seen ? VAR_0 : VAR_1;
 VAR_5->cqe_seen = 0;
 FUNC_2(&VAR_5->q_lock);
 return VAR_4;
}
