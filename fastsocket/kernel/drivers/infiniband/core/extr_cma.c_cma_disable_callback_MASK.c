
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int state; int handler_mutex; } ;
typedef enum rdma_cm_state { ____Placeholder_rdma_cm_state } rdma_cm_state ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct rdma_id_private *VAR_1,
    enum rdma_cm_state VAR_2)
{
 FUNC_0(&VAR_1->handler_mutex);
 if (VAR_1->state != VAR_2) {
  FUNC_1(&VAR_1->handler_mutex);
  return -VAR_0;
 }
 return 0;
}
