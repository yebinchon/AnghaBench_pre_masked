
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_work {int work; int drain_node; } ;
struct TYPE_2__ {int shost; } ;
struct sas_ha_struct {TYPE_1__ core; int defer_q; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct sas_ha_struct *VAR_2, struct sas_work *VAR_3)
{
 if (!FUNC_3(VAR_1, &VAR_2->state))
  return;

 if (FUNC_3(VAR_0, &VAR_2->state)) {

  if (FUNC_1(&VAR_3->drain_node))
   FUNC_0(&VAR_3->drain_node, &VAR_2->defer_q);
 } else
  FUNC_2(VAR_2->core.shost, &VAR_3->work);
}
