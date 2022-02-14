
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_cm_id {scalar_t__ qp_type; } ;
struct TYPE_3__ {scalar_t__ qp_type; } ;
struct TYPE_4__ {TYPE_1__ req_rcvd; } ;
struct ib_cm_event {scalar_t__ event; TYPE_2__ param; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct rdma_cm_id *VAR_3, struct ib_cm_event *VAR_4)
{
 return (((VAR_4->event == VAR_0) &&
   (VAR_4->param.req_rcvd.qp_type == VAR_3->qp_type)) ||
  ((VAR_4->event == VAR_1) &&
   (VAR_3->qp_type == VAR_2)) ||
  (!VAR_3->qp_type));
}
