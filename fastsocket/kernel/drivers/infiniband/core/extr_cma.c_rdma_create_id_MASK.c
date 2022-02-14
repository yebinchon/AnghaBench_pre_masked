
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int ps; int qp_type; int event_handler; void* context; } ;
struct rdma_id_private {struct rdma_cm_id id; int seq_num; int mc_list; int listen_list; int handler_mutex; int refcount; int comp; int qp_mutex; int lock; int state; int owner; } ;
typedef int rdma_cm_event_handler ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 struct rdma_cm_id* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 struct rdma_id_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

struct rdma_cm_id *FUNC_9(rdma_cm_event_handler VAR_4,
      void *VAR_5, enum rdma_port_space VAR_6,
      enum ib_qp_type VAR_7)
{
 struct rdma_id_private *VAR_8;

 VAR_8 = FUNC_5(sizeof *VAR_8, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->owner = FUNC_8(VAR_3);
 VAR_8->state = VAR_2;
 VAR_8->id.context = VAR_5;
 VAR_8->id.event_handler = VAR_4;
 VAR_8->id.ps = VAR_6;
 VAR_8->id.qp_type = VAR_7;
 FUNC_7(&VAR_8->lock);
 FUNC_6(&VAR_8->qp_mutex);
 FUNC_4(&VAR_8->comp);
 FUNC_2(&VAR_8->refcount, 1);
 FUNC_6(&VAR_8->handler_mutex);
 FUNC_1(&VAR_8->listen_list);
 FUNC_1(&VAR_8->mc_list);
 FUNC_3(&VAR_8->seq_num, sizeof VAR_8->seq_num);

 return &VAR_8->id;
}
