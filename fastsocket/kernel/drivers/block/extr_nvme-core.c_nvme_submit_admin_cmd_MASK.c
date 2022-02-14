
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_dev {int * queues; } ;
struct nvme_command {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nvme_command*,int *,int ) ;

int FUNC_1(struct nvme_dev *VAR_1, struct nvme_command *VAR_2,
        u32 *VAR_3)
{
 return FUNC_0(VAR_1->queues[0], VAR_2, VAR_3, VAR_0);
}
