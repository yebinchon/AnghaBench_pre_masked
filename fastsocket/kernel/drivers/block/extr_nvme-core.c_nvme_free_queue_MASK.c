
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {void* sq_cmds; int sq_dma_addr; int q_depth; int q_dmadev; int cq_dma_addr; scalar_t__ cqes; int q_lock; int sq_cong; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct bio* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,void*,int ) ;
 int FUNC_6 (struct nvme_queue*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct nvme_queue *VAR_1)
{
 FUNC_7(&VAR_1->q_lock);
 while (FUNC_3(&VAR_1->sq_cong)) {
  struct bio *VAR_2 = FUNC_4(&VAR_1->sq_cong);
  FUNC_2(VAR_2, -VAR_0);
 }
 FUNC_8(&VAR_1->q_lock);

 FUNC_5(VAR_1->q_dmadev, FUNC_0(VAR_1->q_depth),
    (void *)VAR_1->cqes, VAR_1->cq_dma_addr);
 FUNC_5(VAR_1->q_dmadev, FUNC_1(VAR_1->q_depth),
     VAR_1->sq_cmds, VAR_1->sq_dma_addr);
 FUNC_6(VAR_1);
}
