
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {int cq_phase; int q_depth; int cq_vector; int q_suspended; int cq_dma_addr; void* cqes; int * q_db; int sq_cong; int sq_cong_wait; int sq_full; scalar_t__ cq_head; int q_lock; struct nvme_dev* dev; struct device* q_dmadev; void* sq_cmds; int sq_dma_addr; } ;
struct nvme_dev {int db_stride; int queue_count; int * dbs; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct device*,int ,int *,int ) ;
 int FUNC_4 (struct device*,int ,void*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nvme_queue*) ;
 struct nvme_queue* FUNC_8 (int,int ) ;
 int FUNC_9 (void*,int ,int ) ;
 unsigned int FUNC_10 (int) ;
 int VAR_1 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct nvme_queue *FUNC_12(struct nvme_dev *VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 struct device *VAR_6 = &VAR_2->pci_dev->dev;
 unsigned VAR_7 = FUNC_10(VAR_4);
 struct nvme_queue *VAR_8 = FUNC_8(sizeof(*VAR_8) + VAR_7, VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->cqes = FUNC_3(VAR_6, FUNC_0(VAR_4),
     &VAR_8->cq_dma_addr, VAR_0);
 if (!VAR_8->cqes)
  goto free_nvmeq;
 FUNC_9((void *)VAR_8->cqes, 0, FUNC_0(VAR_4));

 VAR_8->sq_cmds = FUNC_3(VAR_6, FUNC_1(VAR_4),
     &VAR_8->sq_dma_addr, VAR_0);
 if (!VAR_8->sq_cmds)
  goto free_cqdma;

 VAR_8->q_dmadev = VAR_6;
 VAR_8->dev = VAR_2;
 FUNC_11(&VAR_8->q_lock);
 VAR_8->cq_head = 0;
 VAR_8->cq_phase = 1;
 FUNC_6(&VAR_8->sq_full);
 FUNC_5(&VAR_8->sq_cong_wait, VAR_1);
 FUNC_2(&VAR_8->sq_cong);
 VAR_8->q_db = &VAR_2->dbs[VAR_3 << (VAR_2->db_stride + 1)];
 VAR_8->q_depth = VAR_4;
 VAR_8->cq_vector = VAR_5;
 VAR_8->q_suspended = 1;
 VAR_2->queue_count++;

 return VAR_8;

 free_cqdma:
 FUNC_4(VAR_6, FUNC_0(VAR_4), (void *)VAR_8->cqes,
       VAR_8->cq_dma_addr);
 free_nvmeq:
 FUNC_7(VAR_8);
 return ((void*)0);
}
