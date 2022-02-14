
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wc ;
struct qib_sge {int mr; } ;
struct qib_sge_state {int num_sge; scalar_t__ total_len; struct qib_sge sge; struct qib_sge* sg_list; } ;
struct qib_rwqe {int num_sge; int wr_id; TYPE_4__* sg_list; } ;
struct TYPE_6__ {int recv_cq; int pd; TYPE_1__* srq; int device; } ;
struct qib_qp {scalar_t__ r_len; TYPE_2__ ibqp; struct qib_sge* r_sg_list; struct qib_sge_state r_sge; } ;
struct qib_pd {int dummy; } ;
struct qib_lkey_table {int dummy; } ;
struct ib_wc {TYPE_2__* qp; int opcode; int status; int wr_id; } ;
struct TYPE_8__ {scalar_t__ length; } ;
struct TYPE_7__ {struct qib_lkey_table lk_table; } ;
struct TYPE_5__ {int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_wc*,int ,int) ;
 int FUNC_1 (int ,struct ib_wc*,int) ;
 int FUNC_2 (struct qib_lkey_table*,struct qib_pd*,struct qib_sge*,TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 struct qib_pd* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct qib_qp *VAR_3, struct qib_rwqe *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ib_wc VAR_8;
 struct qib_lkey_table *VAR_9;
 struct qib_pd *VAR_10;
 struct qib_sge_state *VAR_11;

 VAR_9 = &FUNC_5(VAR_3->ibqp.device)->lk_table;
 VAR_10 = FUNC_6(VAR_3->ibqp.srq ? VAR_3->ibqp.srq->pd : VAR_3->ibqp.pd);
 VAR_11 = &VAR_3->r_sge;
 VAR_11->sg_list = VAR_3->r_sg_list;
 VAR_3->r_len = 0;
 for (VAR_5 = VAR_6 = 0; VAR_5 < VAR_4->num_sge; VAR_5++) {
  if (VAR_4->sg_list[VAR_5].length == 0)
   continue;

  if (!FUNC_2(VAR_9, VAR_10, VAR_6 ? &VAR_11->sg_list[VAR_6 - 1] : &VAR_11->sge,
     &VAR_4->sg_list[VAR_5], VAR_0))
   goto bad_lkey;
  VAR_3->r_len += VAR_4->sg_list[VAR_5].length;
  VAR_6++;
 }
 VAR_11->num_sge = VAR_6;
 VAR_11->total_len = VAR_3->r_len;
 VAR_7 = 1;
 goto bail;

bad_lkey:
 while (VAR_6) {
  struct qib_sge *VAR_12 = --VAR_6 ? &VAR_11->sg_list[VAR_6 - 1] : &VAR_11->sge;

  FUNC_3(VAR_12->mr);
 }
 VAR_11->num_sge = 0;
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.wr_id = VAR_4->wr_id;
 VAR_8.status = VAR_1;
 VAR_8.opcode = VAR_2;
 VAR_8.qp = &VAR_3->ibqp;

 FUNC_1(FUNC_4(VAR_3->ibqp.recv_cq), &VAR_8, 1);
 VAR_7 = 0;
bail:
 return VAR_7;
}
