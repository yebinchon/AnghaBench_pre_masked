
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvme_dev {int dummy; } ;
struct TYPE_2__ {int qid; int opcode; } ;
struct nvme_command {TYPE_1__ delete_queue; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvme_command*,int ,int) ;
 int FUNC_2 (struct nvme_dev*,struct nvme_command*,int *) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_1, u8 VAR_2, u16 VAR_3)
{
 int VAR_4;
 struct nvme_command VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.delete_queue.opcode = VAR_2;
 VAR_5.delete_queue.qid = FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_1, &VAR_5, ((void*)0));
 if (VAR_4)
  return -VAR_0;
 return 0;
}
