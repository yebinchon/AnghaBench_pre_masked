
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_adapter {struct zfcp_adapter* stats_reset_data; struct zfcp_adapter* fc_stats; struct zfcp_adapter* req_list; int qdio; int dbf; int req_list_lock; TYPE_2__* ccw_device; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct zfcp_adapter*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct zfcp_adapter*) ;
 int FUNC_6 (struct zfcp_adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct zfcp_adapter*) ;
 int VAR_0 ;

void FUNC_9(struct zfcp_adapter *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_3(&VAR_1->ccw_device->dev.kobj,
      &VAR_0);

 FUNC_1(&VAR_1->req_list_lock, VAR_3);
 VAR_2 = FUNC_8(VAR_1);
 FUNC_2(&VAR_1->req_list_lock, VAR_3);
 if (!VAR_2)
  return;

 FUNC_5(VAR_1);
 FUNC_4(VAR_1->dbf);
 FUNC_6(VAR_1);
 FUNC_7(VAR_1->qdio);
 FUNC_0(VAR_1->req_list);
 FUNC_0(VAR_1->fc_stats);
 FUNC_0(VAR_1->stats_reset_data);
 FUNC_0(VAR_1);
}
