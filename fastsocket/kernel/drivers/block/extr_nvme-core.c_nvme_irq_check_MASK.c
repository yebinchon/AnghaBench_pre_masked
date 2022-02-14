
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {size_t cq_head; int cq_phase; struct nvme_completion* cqes; } ;
struct nvme_completion {int status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct nvme_queue *VAR_4 = VAR_3;
 struct nvme_completion VAR_5 = VAR_4->cqes[VAR_4->cq_head];
 if ((FUNC_0(VAR_5.status) & 1) != VAR_4->cq_phase)
  return VAR_0;
 return VAR_1;
}
