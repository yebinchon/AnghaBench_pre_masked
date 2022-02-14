
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btmrvl_private {TYPE_1__* adapter; } ;
struct TYPE_2__ {int cmd_wait_q; int ps_state; int tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct btmrvl_private *VAR_1)
{
 FUNC_1(&VAR_1->adapter->tx_queue);

 VAR_1->adapter->ps_state = VAR_0;

 FUNC_0(&VAR_1->adapter->cmd_wait_q);
}
