
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {int completion; struct fsf_qtcb_bottom_config* data; TYPE_3__* qtcb; int handler; int queue_req; } ;
struct qdio_buffer_element {int eflags; int sflags; } ;
struct fsf_qtcb_bottom_config {int dummy; } ;
struct TYPE_4__ {int feature_selection; } ;
struct TYPE_5__ {TYPE_1__ config; } ;
struct TYPE_6__ {TYPE_2__ bottom; } ;


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
 int FUNC_4 (int *) ;
 int VAR_9 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int *) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_7 (struct zfcp_qdio*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*,int ) ;
 struct qdio_buffer_element* FUNC_10 (struct zfcp_qdio*,int *) ;

int FUNC_11(struct zfcp_qdio *VAR_10,
           struct fsf_qtcb_bottom_config *VAR_11)
{
 struct qdio_buffer_element *VAR_12;
 struct zfcp_fsf_req *VAR_13 = ((void*)0);
 int VAR_14 = -VAR_0;

 FUNC_2(&VAR_10->req_q_lock);
 if (FUNC_7(VAR_10))
  goto out_unlock;

 VAR_13 = FUNC_5(VAR_10, VAR_5, ((void*)0));

 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto out_unlock;
 }

 VAR_12 = FUNC_10(VAR_10, &VAR_13->queue_req);
 VAR_12[0].sflags |= VAR_7;
 VAR_12[1].eflags |= VAR_6;
 VAR_13->handler = VAR_9;

 VAR_13->qtcb->bottom.config.feature_selection =
   VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_4;

 if (VAR_11)
  VAR_13->data = VAR_11;

 FUNC_9(VAR_13, VAR_8);
 VAR_14 = FUNC_8(VAR_13);
 FUNC_3(&VAR_10->req_q_lock);
 if (!VAR_14)
  FUNC_4(&VAR_13->completion);

 FUNC_6(VAR_13);
 return VAR_14;

out_unlock:
 FUNC_3(&VAR_10->req_q_lock);
 return VAR_14;
}
