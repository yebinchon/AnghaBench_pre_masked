
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int watchdog; TYPE_1__* cfg; } ;
struct TYPE_2__ {unsigned int wd_timeout; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct il_priv *VAR_1)
{
 unsigned int VAR_2 = VAR_1->cfg->wd_timeout;

 if (VAR_2)
  FUNC_2(&VAR_1->watchdog,
     VAR_0 + FUNC_3(FUNC_0(VAR_2)));
 else
  FUNC_1(&VAR_1->watchdog);
}
