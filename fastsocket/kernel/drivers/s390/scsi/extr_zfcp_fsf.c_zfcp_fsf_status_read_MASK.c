
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; struct zfcp_adapter* adapter; } ;
struct TYPE_5__ {int sbale_curr; } ;
struct zfcp_fsf_req {TYPE_2__ queue_req; struct fsf_status_read_buffer* data; } ;
struct TYPE_4__ {int status_read_data; int status_read_req; } ;
struct zfcp_adapter {int dbf; TYPE_1__ pool; } ;
struct qdio_buffer_element {int length; void* addr; int eflags; } ;
struct fsf_status_read_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 struct fsf_status_read_buffer* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct fsf_status_read_buffer*,int ) ;
 int FUNC_4 (struct fsf_status_read_buffer*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int *) ;
 struct zfcp_fsf_req* FUNC_8 (struct zfcp_qdio*,int ,int ) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_10 (struct zfcp_qdio*) ;
 int FUNC_11 (struct zfcp_fsf_req*) ;
 struct qdio_buffer_element* FUNC_12 (struct zfcp_qdio*,TYPE_2__*) ;
 struct qdio_buffer_element* FUNC_13 (struct zfcp_qdio*,TYPE_2__*) ;

int FUNC_14(struct zfcp_qdio *VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_5->adapter;
 struct zfcp_fsf_req *VAR_7;
 struct fsf_status_read_buffer *VAR_8;
 struct qdio_buffer_element *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_5(&VAR_5->req_q_lock);
 if (FUNC_10(VAR_5))
  goto out;

 VAR_7 = FUNC_8(VAR_5, VAR_2,
      VAR_6->pool.status_read_req);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  goto out;
 }

 VAR_9 = FUNC_13(VAR_5, &VAR_7->queue_req);
 VAR_9[2].eflags |= VAR_4;
 VAR_7->queue_req.sbale_curr = 2;

 VAR_8 = FUNC_2(VAR_6->pool.status_read_data, VAR_3);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto failed_buf;
 }
 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_7->data = VAR_8;
 VAR_9 = FUNC_12(VAR_5, &VAR_7->queue_req);
 VAR_9->addr = (void *) VAR_8;
 VAR_9->length = sizeof(*VAR_8);

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10)
  goto failed_req_send;

 goto out;

failed_req_send:
 FUNC_3(VAR_8, VAR_6->pool.status_read_data);
failed_buf:
 FUNC_9(VAR_7);
 FUNC_7("fail", VAR_6->dbf, ((void*)0));
out:
 FUNC_6(&VAR_5->req_q_lock);
 return VAR_10;
}
