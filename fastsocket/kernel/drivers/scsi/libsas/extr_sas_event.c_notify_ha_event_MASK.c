
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {TYPE_1__* ha_events; int pending; } ;
typedef enum ha_event { ____Placeholder_ha_event } ha_event ;
struct TYPE_2__ {int work; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int *,int *,struct sas_ha_struct*) ;

__attribute__((used)) static void FUNC_2(struct sas_ha_struct *VAR_1, enum ha_event VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);

 FUNC_1(VAR_2, &VAR_1->pending,
   &VAR_1->ha_events[VAR_2].work, VAR_1);
}
