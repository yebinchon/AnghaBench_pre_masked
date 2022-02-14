
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct gelic_card {int tx_timeout_task_counter; int tx_timeout_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct gelic_card* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_1)
{
 struct gelic_card *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(&VAR_2->tx_timeout_task_counter);
 if (VAR_1->flags & VAR_0)
  FUNC_3(&VAR_2->tx_timeout_task);
 else
  FUNC_0(&VAR_2->tx_timeout_task_counter);
}
