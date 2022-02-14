
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int thermal_periodic; } ;
struct il_priv {TYPE_1__ _3945; int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct il_priv*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (int ,int *,int) ;

void
FUNC_3(struct il_priv *VAR_2)
{


 if (!FUNC_1(VAR_2))
  goto reschedule;




 FUNC_0(VAR_2);

reschedule:
 FUNC_2(VAR_2->workqueue, &VAR_2->_3945.thermal_periodic,
      VAR_1 * VAR_0);
}
