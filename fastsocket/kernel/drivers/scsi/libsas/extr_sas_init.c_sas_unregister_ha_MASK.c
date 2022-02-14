
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int lldd_max_execute_num; int drain_mutex; } ;


 int FUNC_0 (struct sas_ha_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sas_ha_struct*) ;
 int FUNC_4 (struct sas_ha_struct*) ;
 int FUNC_5 (struct sas_ha_struct*) ;

int FUNC_6(struct sas_ha_struct *VAR_0)
{
 FUNC_3(VAR_0);
 FUNC_5(VAR_0);


 FUNC_1(&VAR_0->drain_mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->drain_mutex);

 if (VAR_0->lldd_max_execute_num > 1) {
  FUNC_4(VAR_0);
  VAR_0->lldd_max_execute_num = 1;
 }

 return 0;
}
