
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int ah; } ;
struct TYPE_7__ {TYPE_1__ ud; } ;
struct TYPE_8__ {unsigned int num_sge; int send_flags; size_t opcode; int wr_id; TYPE_2__ wr; } ;
struct qib_swqe {int length; TYPE_3__ wr; struct qib_sge* sg_list; } ;
struct qib_sge {int mr; } ;
struct TYPE_9__ {scalar_t__ qp_type; int send_cq; } ;
struct qib_qp {size_t state; int s_flags; scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ s_draining; TYPE_4__ ibqp; } ;
struct ib_wc {int status; int byte_len; TYPE_4__* qp; int opcode; int wr_id; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_10__ {int refcount; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int* VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (struct ib_wc*,int ,int) ;
 int FUNC_2 (int ,struct ib_wc*,int) ;
 int FUNC_3 (int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct qib_qp *VAR_10, struct qib_swqe *VAR_11,
         enum ib_wc_status VAR_12)
{
 u32 VAR_13, VAR_14;
 unsigned VAR_15;

 if (!(VAR_8[VAR_10->state] & VAR_6))
  return;

 for (VAR_15 = 0; VAR_15 < VAR_11->wr.num_sge; VAR_15++) {
  struct qib_sge *VAR_16 = &VAR_11->sg_list[VAR_15];

  FUNC_3(VAR_16->mr);
 }
 if (VAR_10->ibqp.qp_type == VAR_3 ||
     VAR_10->ibqp.qp_type == VAR_2 ||
     VAR_10->ibqp.qp_type == VAR_1)
  FUNC_0(&FUNC_4(VAR_11->wr.wr.ud.ah)->refcount);


 if (!(VAR_10->s_flags & VAR_7) ||
     (VAR_11->wr.send_flags & VAR_4) ||
     VAR_12 != VAR_5) {
  struct ib_wc VAR_17;

  FUNC_1(&VAR_17, 0, sizeof VAR_17);
  VAR_17.wr_id = VAR_11->wr.wr_id;
  VAR_17.status = VAR_12;
  VAR_17.opcode = VAR_9[VAR_11->wr.opcode];
  VAR_17.qp = &VAR_10->ibqp;
  if (VAR_12 == VAR_5)
   VAR_17.byte_len = VAR_11->length;
  FUNC_2(FUNC_5(VAR_10->ibqp.send_cq), &VAR_17,
        VAR_12 != VAR_5);
 }

 VAR_14 = VAR_10->s_last;
 VAR_13 = VAR_14;
 if (++VAR_14 >= VAR_10->s_size)
  VAR_14 = 0;
 VAR_10->s_last = VAR_14;
 if (VAR_10->s_acked == VAR_13)
  VAR_10->s_acked = VAR_14;
 if (VAR_10->s_cur == VAR_13)
  VAR_10->s_cur = VAR_14;
 if (VAR_10->s_tail == VAR_13)
  VAR_10->s_tail = VAR_14;
 if (VAR_10->state == VAR_0 && VAR_14 == VAR_10->s_cur)
  VAR_10->s_draining = 0;
}
