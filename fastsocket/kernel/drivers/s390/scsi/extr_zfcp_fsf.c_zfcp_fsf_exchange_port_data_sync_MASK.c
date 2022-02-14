
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; TYPE_1__* adapter; } ;
struct zfcp_fsf_req {int completion; int handler; int queue_req; struct fsf_qtcb_bottom_port* data; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct fsf_qtcb_bottom_port {int dummy; } ;
struct TYPE_2__ {int adapter_features; } ;


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
 int FUNC_4 (int *) ;
 int VAR_7 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int *) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_7 (struct zfcp_qdio*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*,int ) ;
 struct qdio_buffer_element* FUNC_10 (struct zfcp_qdio*,int *) ;

int FUNC_11(struct zfcp_qdio *VAR_8,
         struct fsf_qtcb_bottom_port *VAR_9)
{
 struct qdio_buffer_element *VAR_10;
 struct zfcp_fsf_req *VAR_11 = ((void*)0);
 int VAR_12 = -VAR_0;

 if (!(VAR_8->adapter->adapter_features & VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_8->req_q_lock);
 if (FUNC_7(VAR_8))
  goto out_unlock;

 VAR_11 = FUNC_5(VAR_8, VAR_3, ((void*)0));

 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto out_unlock;
 }

 if (VAR_9)
  VAR_11->data = VAR_9;

 VAR_10 = FUNC_10(VAR_8, &VAR_11->queue_req);
 VAR_10[0].sflags |= VAR_5;
 VAR_10[1].eflags |= VAR_4;

 VAR_11->handler = VAR_7;
 FUNC_9(VAR_11, VAR_6);
 VAR_12 = FUNC_8(VAR_11);
 FUNC_3(&VAR_8->req_q_lock);

 if (!VAR_12)
  FUNC_4(&VAR_11->completion);

 FUNC_6(VAR_11);

 return VAR_12;

out_unlock:
 FUNC_3(&VAR_8->req_q_lock);
 return VAR_12;
}
