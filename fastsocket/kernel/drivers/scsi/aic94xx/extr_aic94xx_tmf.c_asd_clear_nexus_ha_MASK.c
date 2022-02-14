
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_ha_struct {struct asd_ha_struct* lldd_ha; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_3__ {int nexus; } ;
struct TYPE_4__ {TYPE_1__ clear_nexus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

int FUNC_0(struct sas_ha_struct *VAR_4)
{
 struct asd_ha_struct *VAR_5 = VAR_4->lldd_ha;

 VAR_1;
 VAR_3->clear_nexus.nexus = VAR_2;
 VAR_0;
}
