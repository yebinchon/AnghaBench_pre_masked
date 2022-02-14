
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int drain_mutex; int lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct sas_ha_struct*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sas_ha_struct *VAR_1)
{



 FUNC_2(&VAR_1->drain_mutex);
 FUNC_4(&VAR_1->lock);
 FUNC_1(VAR_0, &VAR_1->state);
 FUNC_5(&VAR_1->lock);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->drain_mutex);
}
