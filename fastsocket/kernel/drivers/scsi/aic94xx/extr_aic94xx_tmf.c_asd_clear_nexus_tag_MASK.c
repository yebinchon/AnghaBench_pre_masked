
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int LUN; } ;
struct sas_task {TYPE_4__* dev; TYPE_1__ ssp_task; struct asd_ascb* lldd_task; } ;
struct asd_ha_struct {int dummy; } ;
struct asd_ascb {int tag; } ;
struct TYPE_9__ {int tag; int lun; } ;
struct TYPE_10__ {int conn_handle; TYPE_2__ ssp_task; int nexus; } ;
struct TYPE_14__ {TYPE_3__ clear_nexus; } ;
struct TYPE_13__ {TYPE_5__* ha; } ;
struct TYPE_12__ {struct asd_ha_struct* lldd_ha; } ;
struct TYPE_11__ {scalar_t__ lldd_dev; scalar_t__ tproto; TYPE_6__* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_7__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct sas_task *VAR_4)
{
 struct asd_ha_struct *VAR_5 = VAR_4->dev->port->ha->lldd_ha;
 struct asd_ascb *VAR_6 = VAR_4->lldd_task;

 VAR_1;
 VAR_3->clear_nexus.nexus = VAR_2;
 FUNC_1(VAR_3->clear_nexus.ssp_task.lun, VAR_4->ssp_task.LUN, 8);
 VAR_3->clear_nexus.ssp_task.tag = VAR_6->tag;
 if (VAR_4->dev->tproto)
  VAR_3->clear_nexus.conn_handle = FUNC_0((u16)(unsigned long)
         VAR_4->dev->lldd_dev);
 VAR_0;
}
