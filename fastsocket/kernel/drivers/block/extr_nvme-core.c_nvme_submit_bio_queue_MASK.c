
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvme_queue {size_t sq_tail; size_t q_depth; int dev; int q_db; struct nvme_command* sq_cmds; } ;
struct nvme_ns {int lba_shift; int ns_id; int queue; } ;
struct nvme_iod {struct bio* private; } ;
struct TYPE_2__ {int command_id; void* dsmgmt; void* control; void* length; int slba; void* nsid; int opcode; } ;
struct nvme_command {TYPE_1__ rw; int common; } ;
struct bio {int bi_rw; int bi_sector; int bi_size; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct nvme_queue*,struct nvme_iod*,int ,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,struct bio*) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nvme_queue*,int,int *) ;
 int FUNC_7 (struct nvme_command*,int ,int) ;
 struct nvme_iod* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct nvme_ns*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int ,struct nvme_iod*) ;
 int FUNC_11 (struct nvme_queue*,struct nvme_iod*,struct bio*,int,int) ;
 int FUNC_12 (int ,int *,struct nvme_iod*,int,int ) ;
 int FUNC_13 (struct bio*) ;
 int FUNC_14 (struct nvme_queue*,struct nvme_ns*,struct bio*,struct nvme_iod*,int) ;
 int FUNC_15 (struct nvme_queue*,struct nvme_ns*,int) ;
 int FUNC_16 (struct nvme_queue*,struct nvme_ns*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (size_t,int ) ;

__attribute__((used)) static int FUNC_19(struct nvme_queue *VAR_17, struct nvme_ns *VAR_18,
        struct bio *VAR_19)
{
 struct nvme_command *VAR_20;
 struct nvme_iod *VAR_21;
 enum dma_data_direction VAR_22;
 int VAR_23, VAR_24, VAR_25;
 u16 VAR_26;
 u32 VAR_27;
 int VAR_28 = FUNC_2(VAR_18->queue, VAR_19);

 if ((VAR_19->bi_rw & VAR_12) && VAR_28) {
  VAR_25 = FUNC_16(VAR_17, VAR_18);
  if (VAR_25)
   return VAR_25;
 }

 VAR_25 = -VAR_5;
 VAR_21 = FUNC_8(VAR_28, VAR_19->bi_size, VAR_6);
 if (!VAR_21)
  goto nomem;
 VAR_21->private = VAR_19;

 VAR_25 = -VAR_4;
 VAR_23 = FUNC_0(VAR_17, VAR_21, VAR_14, VAR_7);
 if (FUNC_17(VAR_23 < 0))
  goto free_iod;

 if (VAR_19->bi_rw & VAR_0) {
  VAR_25 = FUNC_14(VAR_17, VAR_18, VAR_19, VAR_21, VAR_23);
  if (VAR_25)
   goto free_cmdid;
  return VAR_25;
 }
 if ((VAR_19->bi_rw & VAR_12) && !VAR_28)
  return FUNC_15(VAR_17, VAR_18, VAR_23);

 VAR_26 = 0;
 if (VAR_19->bi_rw & VAR_13)
  VAR_26 |= VAR_9;
 if (VAR_19->bi_rw & (VAR_11 | VAR_1))
  VAR_26 |= VAR_10;

 VAR_27 = 0;
 if (VAR_19->bi_rw & VAR_1)
  VAR_27 |= VAR_8;

 VAR_20 = &VAR_17->sq_cmds[VAR_17->sq_tail];

 FUNC_7(VAR_20, 0, sizeof(*VAR_20));
 if (FUNC_1(VAR_19)) {
  VAR_20->rw.opcode = VAR_16;
  VAR_22 = VAR_3;
 } else {
  VAR_20->rw.opcode = VAR_15;
  VAR_22 = VAR_2;
 }

 VAR_25 = FUNC_11(VAR_17, VAR_21, VAR_19, VAR_22, VAR_28);
 if (VAR_25 <= 0)
  goto free_cmdid;
 VAR_24 = VAR_25;

 VAR_20->rw.command_id = VAR_23;
 VAR_20->rw.nsid = FUNC_4(VAR_18->ns_id);
 VAR_24 = FUNC_12(VAR_17->dev, &VAR_20->common, VAR_21, VAR_24,
        VAR_6);
 VAR_20->rw.slba = FUNC_5(FUNC_9(VAR_18, VAR_19->bi_sector));
 VAR_20->rw.length = FUNC_3((VAR_24 >> VAR_18->lba_shift) - 1);
 VAR_20->rw.control = FUNC_3(VAR_26);
 VAR_20->rw.dsmgmt = FUNC_4(VAR_27);

 FUNC_13(VAR_19);
 if (++VAR_17->sq_tail == VAR_17->q_depth)
  VAR_17->sq_tail = 0;
 FUNC_18(VAR_17->sq_tail, VAR_17->q_db);

 return 0;

 free_cmdid:
 FUNC_6(VAR_17, VAR_23, ((void*)0));
 free_iod:
 FUNC_10(VAR_17->dev, VAR_21);
 nomem:
 return VAR_25;
}
