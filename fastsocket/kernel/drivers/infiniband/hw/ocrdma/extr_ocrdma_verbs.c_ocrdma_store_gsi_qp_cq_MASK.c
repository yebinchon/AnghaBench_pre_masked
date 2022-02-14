
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_dev {int gsi_qp_created; void* gsi_rqcq; void* gsi_sqcq; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; int recv_cq; int send_cq; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_1,
       struct ib_qp_init_attr *VAR_2)
{
 if (VAR_2->qp_type == VAR_0) {
  VAR_1->gsi_qp_created = 1;
  VAR_1->gsi_sqcq = FUNC_0(VAR_2->send_cq);
  VAR_1->gsi_rqcq = FUNC_0(VAR_2->recv_cq);
 }
}
