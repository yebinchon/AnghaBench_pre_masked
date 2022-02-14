
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_wka_port {int handle; TYPE_1__* adapter; } ;
struct zfcp_send_ct {int resp; int req; struct zfcp_wka_port* wka_port; } ;
struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {struct zfcp_send_ct* data; TYPE_3__* qtcb; int handler; int status; } ;
typedef int mempool_t ;
struct TYPE_5__ {int port_handle; } ;
struct TYPE_6__ {TYPE_2__ header; } ;
struct TYPE_4__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zfcp_fsf_req*) ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int *) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_7 (struct zfcp_qdio*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int FUNC_9 (struct zfcp_fsf_req*,int ,int ,int ,unsigned int) ;

int FUNC_10(struct zfcp_send_ct *VAR_5, mempool_t *VAR_6,
       unsigned int VAR_7)
{
 struct zfcp_wka_port *VAR_8 = VAR_5->wka_port;
 struct zfcp_qdio *VAR_9 = VAR_8->adapter->qdio;
 struct zfcp_fsf_req *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_2(&VAR_9->req_q_lock);
 if (FUNC_7(VAR_9))
  goto out;

 VAR_10 = FUNC_5(VAR_9, VAR_2, VAR_6);

 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->status |= VAR_3;
 VAR_11 = FUNC_9(VAR_10, VAR_5->req, VAR_5->resp,
        VAR_1, VAR_7);
 if (VAR_11)
  goto failed_send;

 VAR_10->handler = VAR_4;
 VAR_10->qtcb->header.port_handle = VAR_8->handle;
 VAR_10->data = VAR_5;

 FUNC_4(VAR_10);

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11)
  goto failed_send;

 goto out;

failed_send:
 FUNC_6(VAR_10);
out:
 FUNC_3(&VAR_9->req_q_lock);
 return VAR_11;
}
