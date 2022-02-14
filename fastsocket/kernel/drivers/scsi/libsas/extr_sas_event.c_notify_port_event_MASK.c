
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {int dummy; } ;
struct asd_sas_phy {TYPE_1__* port_events; int port_events_pending; struct sas_ha_struct* ha; } ;
typedef enum port_event { ____Placeholder_port_event } port_event ;
struct TYPE_2__ {int work; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int *,int *,struct sas_ha_struct*) ;

__attribute__((used)) static void FUNC_2(struct asd_sas_phy *VAR_1, enum port_event VAR_2)
{
 struct sas_ha_struct *VAR_3 = VAR_1->ha;

 FUNC_0(VAR_2 >= VAR_0);

 FUNC_1(VAR_2, &VAR_1->port_events_pending,
   &VAR_1->port_events[VAR_2].work, VAR_3);
}
