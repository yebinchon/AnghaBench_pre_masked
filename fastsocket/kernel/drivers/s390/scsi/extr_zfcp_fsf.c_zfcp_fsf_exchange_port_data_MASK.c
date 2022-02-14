
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {struct zfcp_erp_action* erp_action; int handler; int queue_req; int status; } ;
struct zfcp_erp_action {struct zfcp_fsf_req* fsf_req; TYPE_1__* adapter; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct TYPE_5__ {int erp_req; } ;
struct TYPE_6__ {int adapter_features; TYPE_2__ pool; } ;
struct TYPE_4__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 struct zfcp_fsf_req* FUNC_4 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_6 (struct zfcp_qdio*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 struct qdio_buffer_element* FUNC_9 (struct zfcp_qdio*,int *) ;

int FUNC_10(struct zfcp_erp_action *VAR_8)
{
 struct zfcp_qdio *VAR_9 = VAR_8->adapter->qdio;
 struct qdio_buffer_element *VAR_10;
 struct zfcp_fsf_req *VAR_11;
 int VAR_12 = -VAR_0;

 if (!(VAR_9->adapter->adapter_features & VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_9->req_q_lock);
 if (FUNC_6(VAR_9))
  goto out;

 VAR_11 = FUNC_4(VAR_9, VAR_3,
      VAR_9->adapter->pool.erp_req);

 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto out;
 }

 VAR_11->status |= VAR_6;
 VAR_10 = FUNC_9(VAR_9, &VAR_11->queue_req);
 VAR_10[0].sflags |= VAR_5;
 VAR_10[1].eflags |= VAR_4;

 VAR_11->handler = VAR_7;
 VAR_11->erp_action = VAR_8;
 VAR_8->fsf_req = VAR_11;

 FUNC_8(VAR_11);
 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12) {
  FUNC_5(VAR_11);
  VAR_8->fsf_req = ((void*)0);
 }
out:
 FUNC_3(&VAR_9->req_q_lock);
 return VAR_12;
}
