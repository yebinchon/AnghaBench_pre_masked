
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_txq_num; } ;
struct il_priv {int cmd_queue; int watchdog; TYPE_1__ hw_params; TYPE_2__* cfg; int status; } ;
struct TYPE_4__ {unsigned long wd_timeout; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct il_priv*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void
FUNC_5(unsigned long VAR_2)
{
 struct il_priv *VAR_3 = (struct il_priv *)VAR_2;
 int VAR_4;
 unsigned long VAR_5;

 if (FUNC_4(VAR_0, &VAR_3->status))
  return;

 VAR_5 = VAR_3->cfg->wd_timeout;
 if (VAR_5 == 0)
  return;


 if (FUNC_1(VAR_3, VAR_3->cmd_queue))
  return;


 for (VAR_4 = 0; VAR_4 < VAR_3->hw_params.max_txq_num; VAR_4++) {

  if (VAR_4 == VAR_3->cmd_queue)
   continue;
  if (FUNC_1(VAR_3, VAR_4))
   return;
 }

 FUNC_2(&VAR_3->watchdog,
    VAR_1 + FUNC_3(FUNC_0(VAR_5)));
}
