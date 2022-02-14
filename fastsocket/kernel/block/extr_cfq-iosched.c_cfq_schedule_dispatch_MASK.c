
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_data {int unplug_work; int queue; scalar_t__ busy_queues; } ;


 int FUNC_0 (struct cfq_data*,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct cfq_data *VAR_0)
{
 if (VAR_0->busy_queues) {
  FUNC_0(VAR_0, "schedule dispatch");
  FUNC_1(VAR_0->queue, &VAR_0->unplug_work);
 }
}
