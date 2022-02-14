
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct nvme_queue {int q_depth; int sq_dma_addr; } ;
struct nvme_dev {int dummy; } ;
struct TYPE_2__ {void* cqid; void* sq_flags; void* qsize; void* sqid; int prp1; int opcode; } ;
struct nvme_command {TYPE_1__ create_sq; } ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct nvme_dev*,struct nvme_command*,int *) ;

__attribute__((used)) static int FUNC_4(struct nvme_dev *VAR_4, u16 VAR_5,
      struct nvme_queue *VAR_6)
{
 int VAR_7;
 struct nvme_command VAR_8;
 int VAR_9 = VAR_1 | VAR_2;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.create_sq.opcode = VAR_3;
 VAR_8.create_sq.prp1 = FUNC_1(VAR_6->sq_dma_addr);
 VAR_8.create_sq.sqid = FUNC_0(VAR_5);
 VAR_8.create_sq.qsize = FUNC_0(VAR_6->q_depth - 1);
 VAR_8.create_sq.sq_flags = FUNC_0(VAR_9);
 VAR_8.create_sq.cqid = FUNC_0(VAR_5);

 VAR_7 = FUNC_3(VAR_4, &VAR_8, ((void*)0));
 if (VAR_7)
  return -VAR_0;
 return 0;
}
