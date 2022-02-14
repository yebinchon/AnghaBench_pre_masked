
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct domain_device {scalar_t__ lldd_dev; TYPE_2__* port; } ;
struct asd_ha_struct {int dummy; } ;
typedef enum clear_nexus_phase { ____Placeholder_clear_nexus_phase } clear_nexus_phase ;
struct TYPE_7__ {int flags; int conn_handle; int nexus; } ;
struct TYPE_8__ {TYPE_3__ clear_nexus; } ;
struct TYPE_6__ {TYPE_1__* ha; } ;
struct TYPE_5__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 TYPE_4__* VAR_8 ;

__attribute__((used)) static int FUNC_1(struct domain_device *VAR_9,
          enum clear_nexus_phase VAR_10)
{
 struct asd_ha_struct *VAR_11 = VAR_9->port->ha->lldd_ha;

 VAR_1;
 VAR_8->clear_nexus.nexus = VAR_3;
 switch (VAR_10) {
 case 129:
  VAR_8->clear_nexus.flags = VAR_2 | VAR_7;
  break;
 case 130:
  VAR_8->clear_nexus.flags = VAR_6 | VAR_4;
  break;
 case 128:
  VAR_8->clear_nexus.flags = VAR_5;
 }
 VAR_8->clear_nexus.conn_handle = FUNC_0((u16)(unsigned long)
         VAR_9->lldd_dev);
 VAR_0;
}
