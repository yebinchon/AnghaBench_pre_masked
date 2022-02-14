
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_send_els {int d_id; int resp; int req; TYPE_4__* adapter; } ;
struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {struct zfcp_send_els* data; int handler; TYPE_3__* qtcb; int queue_req; int status; } ;
struct TYPE_8__ {struct zfcp_qdio* qdio; } ;
struct TYPE_5__ {int d_id; } ;
struct TYPE_6__ {TYPE_1__ support; } ;
struct TYPE_7__ {TYPE_2__ bottom; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 struct zfcp_fsf_req* FUNC_6 (struct zfcp_qdio*,int ,int *) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_8 (struct zfcp_qdio*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int VAR_3 ;
 int FUNC_10 (struct zfcp_fsf_req*,int ,int ,int,unsigned int) ;
 int FUNC_11 (struct zfcp_qdio*,int *,int) ;

int FUNC_12(struct zfcp_send_els *VAR_4, unsigned int VAR_5)
{
 struct zfcp_fsf_req *VAR_6;
 struct zfcp_qdio *VAR_7 = VAR_4->adapter->qdio;
 int VAR_8 = -VAR_0;

 FUNC_2(&VAR_7->req_q_lock);
 if (FUNC_8(VAR_7))
  goto out;

 VAR_6 = FUNC_6(VAR_7, VAR_1, ((void*)0));

 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto out;
 }

 VAR_6->status |= VAR_2;


 if (!FUNC_4(VAR_4->adapter))
  FUNC_11(VAR_7, &VAR_6->queue_req, 2);


 VAR_8 = FUNC_10(VAR_6, VAR_4->req, VAR_4->resp, 2, VAR_5);

 if (VAR_8)
  goto failed_send;

 VAR_6->qtcb->bottom.support.d_id = VAR_4->d_id;
 VAR_6->handler = VAR_3;
 VAR_6->data = VAR_4;

 FUNC_5(VAR_6);

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto failed_send;

 goto out;

failed_send:
 FUNC_7(VAR_6);
out:
 FUNC_3(&VAR_7->req_q_lock);
 return VAR_8;
}
