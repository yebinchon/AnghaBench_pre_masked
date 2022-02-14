
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_queue {size_t sq_tail; size_t q_depth; int q_db; TYPE_1__* dev; struct nvme_command* sq_cmds; } ;
struct nvme_ns {int lba_shift; int ns_id; } ;
struct nvme_iod {int first_dma; scalar_t__ npages; } ;
struct nvme_dsm_range {void* slba; void* nlb; void* cattr; } ;
struct TYPE_4__ {int command_id; void* attributes; scalar_t__ nr; void* prp1; void* nsid; int opcode; } ;
struct nvme_command {TYPE_2__ dsm; } ;
struct bio {int bi_size; int bi_sector; } ;
typedef int __le64 ;
struct TYPE_3__ {int prp_small_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 struct nvme_dsm_range* FUNC_2 (int ,int ,int *) ;
 int ** FUNC_3 (struct nvme_iod*) ;
 int FUNC_4 (struct nvme_command*,int ,int) ;
 int FUNC_5 (struct nvme_ns*,int ) ;
 int VAR_3 ;
 int FUNC_6 (size_t,int ) ;

__attribute__((used)) static int FUNC_7(struct nvme_queue *VAR_4, struct nvme_ns *VAR_5,
  struct bio *VAR_6, struct nvme_iod *VAR_7, int VAR_8)
{
 struct nvme_dsm_range *VAR_9;
 struct nvme_command *VAR_10 = &VAR_4->sq_cmds[VAR_4->sq_tail];

 VAR_9 = FUNC_2(VAR_4->dev->prp_small_pool, VAR_1,
       &VAR_7->first_dma);
 if (!VAR_9)
  return -VAR_0;

 FUNC_3(VAR_7)[0] = (__le64 *)VAR_9;
 VAR_7->npages = 0;

 VAR_9->cattr = FUNC_0(0);
 VAR_9->nlb = FUNC_0(VAR_6->bi_size >> VAR_5->lba_shift);
 VAR_9->slba = FUNC_1(FUNC_5(VAR_5, VAR_6->bi_sector));

 FUNC_4(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->dsm.opcode = VAR_3;
 VAR_10->dsm.command_id = VAR_8;
 VAR_10->dsm.nsid = FUNC_0(VAR_5->ns_id);
 VAR_10->dsm.prp1 = FUNC_1(VAR_7->first_dma);
 VAR_10->dsm.nr = 0;
 VAR_10->dsm.attributes = FUNC_0(VAR_2);

 if (++VAR_4->sq_tail == VAR_4->q_depth)
  VAR_4->sq_tail = 0;
 FUNC_6(VAR_4->sq_tail, VAR_4->q_db);

 return 0;
}
