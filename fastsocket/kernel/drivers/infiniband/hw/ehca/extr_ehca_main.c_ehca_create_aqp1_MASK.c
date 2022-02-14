
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_send_wr; int max_recv_wr; int max_send_sge; int max_recv_sge; } ;
struct ib_qp_init_attr {size_t qp_type; int port_num; int * srq; int * event_handler; int * qp_context; TYPE_1__ cap; int sq_sig_type; struct ib_qp* recv_cq; struct ib_qp* send_cq; } ;
struct ib_qp {int dummy; } ;
typedef struct ib_qp ib_cq ;
struct ehca_sport {struct ib_qp* ibcq_aqp1; struct ib_qp** ibqp_sqp; } ;
struct ehca_shca {int ib_device; TYPE_2__* pd; struct ehca_sport* sport; } ;
struct TYPE_4__ {int ib_pd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int *,char*) ;
 struct ib_qp* FUNC_3 (int *,int *,int *,void*,int,int ) ;
 struct ib_qp* FUNC_4 (int *,struct ib_qp_init_attr*) ;
 int FUNC_5 (struct ib_qp*) ;
 int FUNC_6 (struct ib_qp_init_attr*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ehca_shca *VAR_3, u32 VAR_4)
{
 struct ehca_sport *VAR_5 = &VAR_3->sport[VAR_4 - 1];
 struct ib_cq *VAR_6;
 struct ib_qp *VAR_7;
 struct ib_qp_init_attr VAR_8;
 int VAR_9;

 if (VAR_5->ibcq_aqp1) {
  FUNC_2(&VAR_3->ib_device, "AQP1 CQ is already created.");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(&VAR_3->ib_device, ((void*)0), ((void*)0), (void *)(-1), 10, 0);
 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_3->ib_device, "Cannot create AQP1 CQ.");
  return FUNC_1(VAR_6);
 }
 VAR_5->ibcq_aqp1 = VAR_6;

 if (VAR_5->ibqp_sqp[VAR_1]) {
  FUNC_2(&VAR_3->ib_device, "AQP1 QP is already created.");
  VAR_9 = -VAR_0;
  goto create_aqp1;
 }

 FUNC_6(&VAR_8, 0, sizeof(struct ib_qp_init_attr));
 VAR_8.send_cq = VAR_6;
 VAR_8.recv_cq = VAR_6;
 VAR_8.sq_sig_type = VAR_2;
 VAR_8.cap.max_send_wr = 100;
 VAR_8.cap.max_recv_wr = 100;
 VAR_8.cap.max_send_sge = 2;
 VAR_8.cap.max_recv_sge = 1;
 VAR_8.qp_type = VAR_1;
 VAR_8.port_num = VAR_4;
 VAR_8.qp_context = ((void*)0);
 VAR_8.event_handler = ((void*)0);
 VAR_8.srq = ((void*)0);

 VAR_7 = FUNC_4(&VAR_3->pd->ib_pd, &VAR_8);
 if (FUNC_0(VAR_7)) {
  FUNC_2(&VAR_3->ib_device, "Cannot create AQP1 QP.");
  VAR_9 = FUNC_1(VAR_7);
  goto create_aqp1;
 }
 VAR_5->ibqp_sqp[VAR_1] = VAR_7;

 return 0;

create_aqp1:
 FUNC_5(VAR_5->ibcq_aqp1);
 return VAR_9;
}
