
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int (* event_handler ) (TYPE_5__*,struct rdma_cm_event*) ;scalar_t__ qp_type; } ;
struct TYPE_13__ {struct ib_cm_id* ib; } ;
struct rdma_id_private {TYPE_5__ id; int handler_mutex; TYPE_4__ cm_id; int refcount; } ;
struct TYPE_10__ {scalar_t__ private_data_len; scalar_t__ private_data; } ;
struct TYPE_11__ {TYPE_1__ ud; } ;
struct rdma_cm_event {TYPE_2__ param; int event; } ;
struct ib_cm_id {int cm_handler; struct rdma_id_private* context; } ;
struct TYPE_12__ {int req_rcvd; } ;
struct ib_cm_event {scalar_t__ event; int private_data; TYPE_3__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rdma_id_private*,struct rdma_id_private*) ;
 int FUNC_2 (TYPE_5__*,struct ib_cm_event*) ;
 scalar_t__ FUNC_3 (struct rdma_id_private*,int ) ;
 int FUNC_4 (struct rdma_id_private*) ;
 scalar_t__ FUNC_5 (struct rdma_id_private*,int ) ;
 int FUNC_6 (struct rdma_id_private*,int ) ;
 int VAR_12 ;
 struct rdma_id_private* FUNC_7 (TYPE_5__*,struct ib_cm_event*) ;
 struct rdma_id_private* FUNC_8 (TYPE_5__*,struct ib_cm_event*) ;
 int FUNC_9 (struct rdma_cm_event*,int *,int ,int) ;
 int FUNC_10 (struct rdma_id_private*) ;
 int FUNC_11 (struct ib_cm_id*,int ,int *,int ) ;
 int VAR_13 ;
 int FUNC_12 (struct rdma_cm_event*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_18(struct ib_cm_id *VAR_14, struct ib_cm_event *VAR_15)
{
 struct rdma_id_private *VAR_16, *VAR_17;
 struct rdma_cm_event VAR_18;
 int VAR_19, VAR_20;

 VAR_16 = VAR_14->context;
 if (!FUNC_2(&VAR_16->id, VAR_15))
  return -VAR_2;

 if (FUNC_5(VAR_16, VAR_10))
  return -VAR_1;

 FUNC_12(&VAR_18, 0, sizeof VAR_18);
 VAR_19 = FUNC_10(VAR_16);
 VAR_18.event = VAR_9;
 if (VAR_15->event == VAR_5) {
  VAR_17 = FUNC_8(&VAR_16->id, VAR_15);
  VAR_18.param.ud.private_data = VAR_15->private_data + VAR_19;
  VAR_18.param.ud.private_data_len =
    VAR_4 - VAR_19;
 } else {
  VAR_17 = FUNC_7(&VAR_16->id, VAR_15);
  FUNC_9(&VAR_18, &VAR_15->param.req_rcvd,
           VAR_15->private_data, VAR_19);
 }
 if (!VAR_17) {
  VAR_20 = -VAR_3;
  goto err1;
 }

 FUNC_14(&VAR_17->handler_mutex, VAR_11);
 VAR_20 = FUNC_1(VAR_17, VAR_16);
 if (VAR_20)
  goto err2;

 VAR_17->cm_id.ib = VAR_14;
 VAR_14->context = VAR_17;
 VAR_14->cm_handler = VAR_12;





 FUNC_0(&VAR_17->refcount);
 VAR_20 = VAR_17->id.event_handler(&VAR_17->id, &VAR_18);
 if (VAR_20)
  goto err3;





 FUNC_13(&VAR_13);
 if (FUNC_3(VAR_17, VAR_7) && (VAR_17->id.qp_type != VAR_6))
  FUNC_11(VAR_14, VAR_0, ((void*)0), 0);
 FUNC_15(&VAR_13);
 FUNC_15(&VAR_17->handler_mutex);
 FUNC_15(&VAR_16->handler_mutex);
 FUNC_4(VAR_17);
 return 0;

err3:
 FUNC_4(VAR_17);

 VAR_17->cm_id.ib = ((void*)0);
err2:
 FUNC_6(VAR_17, VAR_8);
 FUNC_15(&VAR_17->handler_mutex);
err1:
 FUNC_15(&VAR_16->handler_mutex);
 if (VAR_17)
  FUNC_16(&VAR_17->id);
 return VAR_20;
}
