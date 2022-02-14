
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mthca_ucontext {int db_tab; int uar; } ;
struct mthca_sqp {int dummy; } ;
struct ib_qp {int qp_num; } ;
struct TYPE_12__ {int max_gs; int max; int db_index; } ;
struct TYPE_11__ {int max_gs; int max; int db_index; } ;
struct TYPE_8__ {int lkey; } ;
struct TYPE_9__ {TYPE_1__ ibmr; } ;
struct mthca_qp {int qpn; struct ib_qp ibqp; int max_inline_data; TYPE_5__ rq; TYPE_4__ sq; TYPE_2__ mr; } ;
struct mthca_create_qp {int rq_db_index; int sq_db_index; int lkey; int rq_db_page; int sq_db_page; } ;
struct ib_udata {int dummy; } ;
struct TYPE_13__ {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {int qp_type; TYPE_6__ cap; int port_num; int sq_sig_type; int recv_cq; int send_cq; scalar_t__ create_flags; } ;
struct ib_pd {int device; TYPE_3__* uobject; } ;
struct TYPE_10__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ib_qp* FUNC_0 (int) ;
 int VAR_4 ;





 int FUNC_1 (struct mthca_create_qp*,struct ib_udata*,int) ;
 int FUNC_2 (struct mthca_qp*) ;
 struct mthca_qp* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int,int ,TYPE_6__*,struct mthca_qp*) ;
 int FUNC_5 (int ,int ,int ,int ,int ,TYPE_6__*,int,int ,int ) ;
 int FUNC_6 (int ,int *,int ,int ,int ) ;
 int FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ib_pd*) ;
 int FUNC_11 (struct mthca_qp*) ;
 struct mthca_ucontext* FUNC_12 (int ) ;

__attribute__((used)) static struct ib_qp *FUNC_13(struct ib_pd *VAR_5,
         struct ib_qp_init_attr *VAR_6,
         struct ib_udata *VAR_7)
{
 struct mthca_create_qp VAR_8;
 struct mthca_qp *VAR_9;
 int VAR_10;

 if (VAR_6->create_flags)
  return FUNC_0(-VAR_1);

 switch (VAR_6->qp_type) {
 case 131:
 case 129:
 case 128:
 {
  struct mthca_ucontext *VAR_11;

  VAR_9 = FUNC_3(sizeof *VAR_9, VAR_4);
  if (!VAR_9)
   return FUNC_0(-VAR_2);

  if (VAR_5->uobject) {
   VAR_11 = FUNC_12(VAR_5->uobject->context);

   if (FUNC_1(&VAR_8, VAR_7, sizeof VAR_8)) {
    FUNC_2(VAR_9);
    return FUNC_0(-VAR_0);
   }

   VAR_10 = FUNC_6(FUNC_9(VAR_5->device), &VAR_11->uar,
      VAR_11->db_tab,
      VAR_8.sq_db_index, VAR_8.sq_db_page);
   if (VAR_10) {
    FUNC_2(VAR_9);
    return FUNC_0(VAR_10);
   }

   VAR_10 = FUNC_6(FUNC_9(VAR_5->device), &VAR_11->uar,
      VAR_11->db_tab,
      VAR_8.rq_db_index, VAR_8.rq_db_page);
   if (VAR_10) {
    FUNC_7(FUNC_9(VAR_5->device),
          &VAR_11->uar,
          VAR_11->db_tab,
          VAR_8.sq_db_index);
    FUNC_2(VAR_9);
    return FUNC_0(VAR_10);
   }

   VAR_9->mr.ibmr.lkey = VAR_8.lkey;
   VAR_9->sq.db_index = VAR_8.sq_db_index;
   VAR_9->rq.db_index = VAR_8.rq_db_index;
  }

  VAR_10 = FUNC_4(FUNC_9(VAR_5->device), FUNC_10(VAR_5),
         FUNC_8(VAR_6->send_cq),
         FUNC_8(VAR_6->recv_cq),
         VAR_6->qp_type, VAR_6->sq_sig_type,
         &VAR_6->cap, VAR_9);

  if (VAR_10 && VAR_5->uobject) {
   VAR_11 = FUNC_12(VAR_5->uobject->context);

   FUNC_7(FUNC_9(VAR_5->device),
         &VAR_11->uar,
         VAR_11->db_tab,
         VAR_8.sq_db_index);
   FUNC_7(FUNC_9(VAR_5->device),
         &VAR_11->uar,
         VAR_11->db_tab,
         VAR_8.rq_db_index);
  }

  VAR_9->ibqp.qp_num = VAR_9->qpn;
  break;
 }
 case 130:
 case 132:
 {

  if (VAR_5->uobject)
   return FUNC_0(-VAR_1);

  VAR_9 = FUNC_3(sizeof (struct mthca_sqp), VAR_4);
  if (!VAR_9)
   return FUNC_0(-VAR_2);

  VAR_9->ibqp.qp_num = VAR_6->qp_type == 130 ? 0 : 1;

  VAR_10 = FUNC_5(FUNC_9(VAR_5->device), FUNC_10(VAR_5),
          FUNC_8(VAR_6->send_cq),
          FUNC_8(VAR_6->recv_cq),
          VAR_6->sq_sig_type, &VAR_6->cap,
          VAR_9->ibqp.qp_num, VAR_6->port_num,
          FUNC_11(VAR_9));
  break;
 }
 default:

  return FUNC_0(-VAR_3);
 }

 if (VAR_10) {
  FUNC_2(VAR_9);
  return FUNC_0(VAR_10);
 }

 VAR_6->cap.max_send_wr = VAR_9->sq.max;
 VAR_6->cap.max_recv_wr = VAR_9->rq.max;
 VAR_6->cap.max_send_sge = VAR_9->sq.max_gs;
 VAR_6->cap.max_recv_sge = VAR_9->rq.max_gs;
 VAR_6->cap.max_inline_data = VAR_9->max_inline_data;

 return &VAR_9->ibqp;
}
