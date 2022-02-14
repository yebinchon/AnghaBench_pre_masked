
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_txq_num; } ;
struct il_priv {int cmd_queue; TYPE_1__ hw_params; int txq; } ;


 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*,int) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_0)
{
 int VAR_1;

 if (!VAR_0->txq)
  return;


 for (VAR_1 = 0; VAR_1 < VAR_0->hw_params.max_txq_num; VAR_1++)
  if (VAR_1 == VAR_0->cmd_queue)
   FUNC_0(VAR_0);
  else
   FUNC_1(VAR_0, VAR_1);
}
