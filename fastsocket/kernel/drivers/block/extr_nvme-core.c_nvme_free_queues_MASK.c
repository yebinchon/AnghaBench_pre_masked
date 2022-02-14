
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int queue_count; int ** queues; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nvme_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = VAR_0->queue_count - 1; VAR_1 >= 0; VAR_1--) {
  FUNC_0(VAR_0->queues[VAR_1]);
  VAR_0->queue_count--;
  VAR_0->queues[VAR_1] = ((void*)0);
 }
}
