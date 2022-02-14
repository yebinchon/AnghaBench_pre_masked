
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_queue {size_t sq_tail; size_t q_depth; int q_db; struct nvme_command* sq_cmds; } ;
struct nvme_ns {int ns_id; } ;
struct TYPE_2__ {int command_id; int nsid; int opcode; } ;
struct nvme_command {TYPE_1__ common; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_command*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_queue *VAR_1, struct nvme_ns *VAR_2,
        int VAR_3)
{
 struct nvme_command *VAR_4 = &VAR_1->sq_cmds[VAR_1->sq_tail];

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->common.opcode = VAR_0;
 VAR_4->common.command_id = VAR_3;
 VAR_4->common.nsid = FUNC_0(VAR_2->ns_id);

 if (++VAR_1->sq_tail == VAR_1->q_depth)
  VAR_1->sq_tail = 0;
 FUNC_2(VAR_1->sq_tail, VAR_1->q_db);

 return 0;
}
