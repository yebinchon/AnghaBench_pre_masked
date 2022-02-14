
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {int fifo_stall_task; int phy_info_task; int watchdog_task; int reset_task; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_2)
{
 FUNC_2(VAR_0, &VAR_2->flags);


 if (!FUNC_3(VAR_1, &VAR_2->flags))
  FUNC_1(&VAR_2->reset_task);

 FUNC_0(&VAR_2->watchdog_task);
 FUNC_0(&VAR_2->phy_info_task);
 FUNC_0(&VAR_2->fifo_stall_task);
}
