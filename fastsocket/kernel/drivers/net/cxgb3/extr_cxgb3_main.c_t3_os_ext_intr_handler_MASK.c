
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int slow_intr_mask; int work_lock; int ext_intr_handler_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,int ,int) ;

void FUNC_4(struct adapter *VAR_3)
{






 FUNC_1(&VAR_3->work_lock);
 if (VAR_3->slow_intr_mask) {
  VAR_3->slow_intr_mask &= ~VAR_1;
  FUNC_3(VAR_3, VAR_0,
        VAR_3->slow_intr_mask);
  FUNC_0(VAR_2, &VAR_3->ext_intr_handler_task);
 }
 FUNC_2(&VAR_3->work_lock);
}
