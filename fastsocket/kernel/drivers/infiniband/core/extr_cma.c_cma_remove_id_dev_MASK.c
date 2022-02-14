
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* event_handler ) (TYPE_1__*,struct rdma_cm_event*) ;} ;
struct rdma_id_private {int handler_mutex; TYPE_1__ id; } ;
struct rdma_cm_event {int event; } ;
typedef enum rdma_cm_state { ____Placeholder_rdma_cm_state } rdma_cm_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rdma_id_private*,int) ;
 int FUNC_1 (struct rdma_id_private*,int ) ;
 int FUNC_2 (struct rdma_id_private*,int ) ;
 int FUNC_3 (struct rdma_cm_event*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_7(struct rdma_id_private *VAR_3)
{
 struct rdma_cm_event VAR_4;
 enum rdma_cm_state VAR_5;
 int VAR_6 = 0;


 VAR_5 = FUNC_2(VAR_3, VAR_1);
 if (VAR_5 == VAR_0)
  return 0;

 FUNC_0(VAR_3, VAR_5);
 FUNC_4(&VAR_3->handler_mutex);


 if (!FUNC_1(VAR_3, VAR_1))
  goto out;

 FUNC_3(&VAR_4, 0, sizeof VAR_4);
 VAR_4.event = VAR_2;
 VAR_6 = VAR_3->id.event_handler(&VAR_3->id, &VAR_4);
out:
 FUNC_5(&VAR_3->handler_mutex);
 return VAR_6;
}
