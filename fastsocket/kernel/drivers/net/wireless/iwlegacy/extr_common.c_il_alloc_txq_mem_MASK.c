
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_tx_queue {int dummy; } ;
struct il_priv {scalar_t__ txq; TYPE_1__* cfg; } ;
struct TYPE_2__ {int num_of_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int ) ;

int
FUNC_2(struct il_priv *VAR_2)
{
 if (!VAR_2->txq)
  VAR_2->txq =
      FUNC_1(sizeof(struct il_tx_queue) *
       VAR_2->cfg->num_of_queues, VAR_1);
 if (!VAR_2->txq) {
  FUNC_0("Not enough memory for txq\n");
  return -VAR_0;
 }
 return 0;
}
