
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {int num_phys; int disco_mutex; struct asd_sas_port** sas_port; int state; } ;
struct sas_discovery {TYPE_1__* disc_work; int pending; } ;
struct asd_sas_port {struct sas_discovery disc; } ;
struct TYPE_2__ {int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int *,int *,struct sas_ha_struct*) ;
 int FUNC_4 (int const,int *) ;

void FUNC_5(struct sas_ha_struct *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->disco_mutex);
 FUNC_0(VAR_1, &VAR_2->state);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_phys; VAR_3++) {
  struct asd_sas_port *VAR_4 = VAR_2->sas_port[VAR_3];
  const int VAR_5 = VAR_0;
  struct sas_discovery *VAR_6 = &VAR_4->disc;

  if (!FUNC_4(VAR_5, &VAR_6->pending))
   continue;

  FUNC_3(VAR_5, &VAR_6->pending, &VAR_6->disc_work[VAR_5].work, VAR_2);
 }
 FUNC_2(&VAR_2->disco_mutex);
}
