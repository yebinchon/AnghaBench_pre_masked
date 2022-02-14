
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {int handler; struct zfcp_erp_action* erp_action; TYPE_6__* qtcb; int queue_req; int status; } ;
struct zfcp_erp_action {struct zfcp_fsf_req* fsf_req; TYPE_1__* adapter; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct TYPE_10__ {int feature_selection; } ;
struct TYPE_11__ {TYPE_4__ config; } ;
struct TYPE_12__ {TYPE_5__ bottom; } ;
struct TYPE_8__ {int erp_req; } ;
struct TYPE_9__ {TYPE_2__ pool; } ;
struct TYPE_7__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 struct zfcp_fsf_req* FUNC_4 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_6 (struct zfcp_qdio*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 struct qdio_buffer_element* FUNC_9 (struct zfcp_qdio*,int *) ;

int FUNC_10(struct zfcp_erp_action *VAR_10)
{
 struct qdio_buffer_element *VAR_11;
 struct zfcp_fsf_req *VAR_12;
 struct zfcp_qdio *VAR_13 = VAR_10->adapter->qdio;
 int VAR_14 = -VAR_0;

 FUNC_2(&VAR_13->req_q_lock);
 if (FUNC_6(VAR_13))
  goto out;

 VAR_12 = FUNC_4(VAR_13, VAR_5,
      VAR_13->adapter->pool.erp_req);

 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  goto out;
 }

 VAR_12->status |= VAR_8;
 VAR_11 = FUNC_9(VAR_13, &VAR_12->queue_req);
 VAR_11[0].sflags |= VAR_7;
 VAR_11[1].eflags |= VAR_6;

 VAR_12->qtcb->bottom.config.feature_selection =
   VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_4;
 VAR_12->erp_action = VAR_10;
 VAR_12->handler = VAR_9;
 VAR_10->fsf_req = VAR_12;

 FUNC_8(VAR_12);
 VAR_14 = FUNC_7(VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_12);
  VAR_10->fsf_req = ((void*)0);
 }
out:
 FUNC_3(&VAR_13->req_q_lock);
 return VAR_14;
}
