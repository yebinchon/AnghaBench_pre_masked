
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct asd_sas_port {int phy_mask; TYPE_1__* ha; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_5__ {int conn_mask; int nexus; } ;
struct TYPE_6__ {TYPE_2__ clear_nexus; } ;
struct TYPE_4__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

int FUNC_0(struct asd_sas_port *VAR_4)
{
 struct asd_ha_struct *VAR_5 = VAR_4->ha->lldd_ha;

 VAR_1;
 VAR_3->clear_nexus.nexus = VAR_2;
 VAR_3->clear_nexus.conn_mask = VAR_4->phy_mask;
 VAR_0;
}
