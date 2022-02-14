
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int dummy; } ;
struct nvme_dev {struct nvme_queue** queues; } ;


 int FUNC_0 () ;

struct nvme_queue *FUNC_1(struct nvme_dev *VAR_0)
{
 return VAR_0->queues[FUNC_0() + 1];
}
