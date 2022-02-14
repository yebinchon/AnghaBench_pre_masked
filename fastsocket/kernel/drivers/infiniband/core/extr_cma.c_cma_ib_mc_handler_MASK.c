
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* event_handler ) (TYPE_3__*,struct rdma_cm_event*) ;int port_num; int device; scalar_t__ qp; } ;
struct rdma_id_private {int handler_mutex; TYPE_3__ id; int qp_mutex; } ;
struct TYPE_6__ {int qp_num; int qkey; int ah_attr; int private_data; } ;
struct TYPE_7__ {TYPE_1__ ud; } ;
struct rdma_cm_event {int status; int event; TYPE_2__ param; } ;
struct TYPE_9__ {int qkey; int mlid; int mgid; } ;
struct ib_sa_multicast {TYPE_5__ rec; struct cma_multicast* context; } ;
struct cma_multicast {int context; struct rdma_id_private* id_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rdma_id_private*,int ) ;
 int FUNC_3 (struct rdma_id_private*,int ) ;
 int FUNC_4 (struct rdma_id_private*,int ) ;
 int FUNC_5 (scalar_t__,int *,int ) ;
 int FUNC_6 (int ,int ,TYPE_5__*,int *) ;
 int FUNC_7 (struct rdma_cm_event*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_12(int VAR_5, struct ib_sa_multicast *VAR_6)
{
 struct rdma_id_private *VAR_7;
 struct cma_multicast *VAR_8 = VAR_6->context;
 struct rdma_cm_event VAR_9;
 int VAR_10;

 VAR_7 = VAR_8->id_priv;
 if (FUNC_2(VAR_7, VAR_0) &&
     FUNC_2(VAR_7, VAR_1))
  return 0;

 if (!VAR_5)
  VAR_5 = FUNC_4(VAR_7, FUNC_1(VAR_6->rec.qkey));
 FUNC_8(&VAR_7->qp_mutex);
 if (!VAR_5 && VAR_7->id.qp)
  VAR_5 = FUNC_5(VAR_7->id.qp, &VAR_6->rec.mgid,
      FUNC_0(VAR_6->rec.mlid));
 FUNC_9(&VAR_7->qp_mutex);

 FUNC_7(&VAR_9, 0, sizeof VAR_9);
 VAR_9.status = VAR_5;
 VAR_9.param.ud.private_data = VAR_8->context;
 if (!VAR_5) {
  VAR_9.event = VAR_4;
  FUNC_6(VAR_7->id.device,
      VAR_7->id.port_num, &VAR_6->rec,
      &VAR_9.param.ud.ah_attr);
  VAR_9.param.ud.qp_num = 0xFFFFFF;
  VAR_9.param.ud.qkey = FUNC_1(VAR_6->rec.qkey);
 } else
  VAR_9.event = VAR_3;

 VAR_10 = VAR_7->id.event_handler(&VAR_7->id, &VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_7, VAR_2);
  FUNC_9(&VAR_7->handler_mutex);
  FUNC_10(&VAR_7->id);
  return 0;
 }

 FUNC_9(&VAR_7->handler_mutex);
 return 0;
}
