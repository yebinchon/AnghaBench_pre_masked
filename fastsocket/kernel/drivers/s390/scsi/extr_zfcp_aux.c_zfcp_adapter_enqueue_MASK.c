
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int seq_print; } ;
struct TYPE_4__ {int list_lock; int work; int list; } ;
struct zfcp_adapter {int qdio; struct zfcp_adapter* req_list; int dbf; int status; TYPE_2__ service_level; int scan_work; int stat_work; int abort_lock; int erp_lock; int req_list_lock; TYPE_1__ events; int erp_running_head; int erp_ready_head; int port_list_head; int erp_done_wqh; int erp_ready_wq; int remove_wq; int refcount; struct ccw_device* ccw_device; } ;
struct TYPE_6__ {int kobj; } ;
struct ccw_device {TYPE_3__ dev; int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*,struct zfcp_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct zfcp_adapter*) ;
 struct zfcp_adapter* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_13 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_14 (struct zfcp_adapter*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct zfcp_adapter*) ;
 int FUNC_17 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_18 (struct zfcp_adapter*) ;
 int FUNC_19 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_20 (struct zfcp_adapter*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_21 (struct zfcp_adapter*) ;
 int VAR_6 ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_24 (struct zfcp_adapter*) ;
 scalar_t__ FUNC_25 (struct zfcp_adapter*) ;
 int VAR_7 ;

int FUNC_26(struct ccw_device *VAR_8)
{
 struct zfcp_adapter *VAR_9;






 VAR_9 = FUNC_8(sizeof(struct zfcp_adapter), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->handler = ((void*)0);
 VAR_9->ccw_device = VAR_8;
 FUNC_3(&VAR_9->refcount, 0);

 if (FUNC_23(VAR_9))
  goto qdio_failed;

 if (FUNC_13(VAR_9))
  goto low_mem_buffers_failed;

 if (FUNC_24(VAR_9))
  goto low_mem_buffers_failed;

 if (FUNC_14(VAR_9))
  goto debug_register_failed;

 if (FUNC_25(VAR_9))
  goto work_queue_failed;

 if (FUNC_20(VAR_9))
  goto generic_services_failed;

 FUNC_6(&VAR_9->remove_wq);
 FUNC_6(&VAR_9->erp_ready_wq);
 FUNC_6(&VAR_9->erp_done_wqh);

 FUNC_0(&VAR_9->port_list_head);
 FUNC_0(&VAR_9->erp_ready_head);
 FUNC_0(&VAR_9->erp_running_head);
 FUNC_0(&VAR_9->events.list);

 FUNC_1(&VAR_9->events.work, VAR_4);
 FUNC_10(&VAR_9->events.list_lock);

 FUNC_10(&VAR_9->req_list_lock);

 FUNC_9(&VAR_9->erp_lock);
 FUNC_9(&VAR_9->abort_lock);

 if (FUNC_18(VAR_9))
  goto erp_thread_failed;

 FUNC_1(&VAR_9->stat_work, VAR_3);
 FUNC_1(&VAR_9->scan_work, VAR_5);

 VAR_9->service_level.seq_print = VAR_6;


 FUNC_4(VAR_2, &VAR_9->status);

 FUNC_5(&VAR_8->dev, VAR_9);

 if (FUNC_11(&VAR_8->dev.kobj,
          &VAR_7))
  goto sysfs_failed;

 FUNC_2(VAR_2, &VAR_9->status);

 if (!FUNC_12(VAR_9))
  return 0;

sysfs_failed:
 FUNC_17(VAR_9);
erp_thread_failed:
 FUNC_19(VAR_9);
generic_services_failed:
 FUNC_16(VAR_9);
work_queue_failed:
 FUNC_15(VAR_9->dbf);
debug_register_failed:
 FUNC_5(&VAR_8->dev, ((void*)0));
 FUNC_7(VAR_9->req_list);
low_mem_buffers_failed:
 FUNC_21(VAR_9);
qdio_failed:
 FUNC_22(VAR_9->qdio);
 FUNC_7(VAR_9);
 return -VAR_0;
}
