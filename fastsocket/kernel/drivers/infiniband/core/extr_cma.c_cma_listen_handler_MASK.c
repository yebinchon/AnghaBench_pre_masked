
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (struct rdma_cm_id*,struct rdma_cm_event*) ;struct rdma_id_private* context; } ;
struct rdma_id_private {TYPE_1__ id; } ;
struct rdma_cm_id {int (* event_handler ) (struct rdma_cm_id*,struct rdma_cm_event*) ;struct rdma_id_private* context; } ;
struct rdma_cm_event {int dummy; } ;


 int FUNC_0 (struct rdma_cm_id*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_1(struct rdma_cm_id *VAR_0,
         struct rdma_cm_event *VAR_1)
{
 struct rdma_id_private *VAR_2 = VAR_0->context;

 VAR_0->context = VAR_2->id.context;
 VAR_0->event_handler = VAR_2->id.event_handler;
 return VAR_2->id.event_handler(VAR_0, VAR_1);
}
