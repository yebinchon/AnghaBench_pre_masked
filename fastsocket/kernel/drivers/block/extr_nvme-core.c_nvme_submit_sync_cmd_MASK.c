
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sync_cmd_info {int status; int result; int task; } ;
struct nvme_queue {int dummy; } ;
struct TYPE_2__ {int command_id; } ;
struct nvme_command {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_queue*,struct sync_cmd_info*,int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct nvme_queue*,int) ;
 int FUNC_2 (struct nvme_queue*,struct nvme_command*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

int FUNC_5(struct nvme_queue *VAR_4, struct nvme_command *VAR_5,
      u32 *VAR_6, unsigned VAR_7)
{
 int VAR_8;
 struct sync_cmd_info VAR_9;

 VAR_9.task = VAR_2;
 VAR_9.status = -VAR_0;

 VAR_8 = FUNC_0(VAR_4, &VAR_9, VAR_3,
        VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_5->common.command_id = VAR_8;

 FUNC_4(VAR_1);
 FUNC_2(VAR_4, VAR_5);
 FUNC_3(VAR_7);

 if (VAR_9.status == -VAR_0) {
  FUNC_1(VAR_4, VAR_8);
  return -VAR_0;
 }

 if (VAR_6)
  *VAR_6 = VAR_9.result;

 return VAR_9.status;
}
