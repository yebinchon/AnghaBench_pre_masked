
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shost; } ;
struct TYPE_4__ {int sas_port; int sas_phy; TYPE_1__ core; } ;
struct asd_ha_struct {TYPE_2__ sas_ha; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct asd_ha_struct *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->sas_ha);

 FUNC_1(VAR_0->sas_ha.core.shost);
 FUNC_4(VAR_0->sas_ha.core.shost);
 FUNC_3(VAR_0->sas_ha.core.shost);

 FUNC_0(VAR_0->sas_ha.sas_phy);
 FUNC_0(VAR_0->sas_ha.sas_port);

 return VAR_1;
}
