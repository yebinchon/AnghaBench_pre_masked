
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct driver_data {scalar_t__ run; int pump_messages; int workqueue; int lock; int * cur_chip; int * cur_transfer; int * cur_msg; scalar_t__ busy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_3(struct driver_data *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);

 if (VAR_2->run == VAR_1 || VAR_2->busy) {
  FUNC_2(&VAR_2->lock, VAR_3);
  return -VAR_0;
 }

 VAR_2->run = VAR_1;
 VAR_2->cur_msg = ((void*)0);
 VAR_2->cur_transfer = ((void*)0);
 VAR_2->cur_chip = ((void*)0);
 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_2->workqueue, &VAR_2->pump_messages);

 return 0;
}
