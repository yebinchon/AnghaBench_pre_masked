
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_10__ {TYPE_6__* ah; } ;
struct TYPE_11__ {TYPE_1__ ud; } ;
struct ib_send_wr {int num_sge; scalar_t__ opcode; int next; TYPE_2__ wr; TYPE_8__* sg_list; } ;
struct qib_swqe {int length; struct qib_sge* sg_list; scalar_t__ ssn; struct ib_send_wr wr; } ;
struct qib_sge {int mr; } ;
struct TYPE_12__ {scalar_t__ qp_type; int device; int pd; } ;
struct qib_qp {size_t state; int s_max_sge; scalar_t__ s_head; scalar_t__ s_size; scalar_t__ s_last; int port_num; int s_lock; TYPE_3__ ibqp; int s_ssn; int s_max_rd_atomic; } ;
struct qib_pd {int dummy; } ;
struct qib_lkey_table {int dummy; } ;
struct TYPE_18__ {TYPE_7__* pport; } ;
struct TYPE_17__ {int length; int addr; } ;
struct TYPE_16__ {int ibmtu; } ;
struct TYPE_15__ {int pd; } ;
struct TYPE_14__ {int refcount; } ;
struct TYPE_13__ {struct qib_lkey_table lk_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 TYPE_9__* FUNC_1 (int ) ;
 struct qib_swqe* FUNC_2 (struct qib_qp*,scalar_t__) ;
 int* VAR_12 ;
 scalar_t__ FUNC_3 (struct qib_qp*,struct ib_send_wr*) ;
 int FUNC_4 (struct qib_lkey_table*,struct qib_pd*,struct qib_sge*,TYPE_8__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qib_qp*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 TYPE_5__* FUNC_10 (TYPE_6__*) ;
 TYPE_4__* FUNC_11 (int ) ;
 struct qib_pd* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct qib_qp *VAR_13, struct ib_send_wr *VAR_14,
 int *VAR_15)
{
 struct qib_swqe *VAR_16;
 u32 VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 unsigned long VAR_22;
 struct qib_lkey_table *VAR_23;
 struct qib_pd *VAR_24;

 FUNC_8(&VAR_13->s_lock, VAR_22);


 if (FUNC_13(!(VAR_12[VAR_13->state] & VAR_11)))
  goto bail_inval;


 if (VAR_14->num_sge > VAR_13->s_max_sge)
  goto bail_inval;






 if (VAR_14->opcode == VAR_7) {
  if (FUNC_3(VAR_13, VAR_14))
   goto bail_inval;
 } else if (VAR_13->ibqp.qp_type == VAR_4) {
  if ((unsigned) VAR_14->opcode >= VAR_8)
   goto bail_inval;
 } else if (VAR_13->ibqp.qp_type != VAR_3) {

  if (VAR_14->opcode != VAR_9 &&
      VAR_14->opcode != VAR_10)
   goto bail_inval;

  if (VAR_13->ibqp.pd != VAR_14->wr.ud.ah->pd)
   goto bail_inval;
 } else if ((unsigned) VAR_14->opcode > VAR_6)
  goto bail_inval;
 else if (VAR_14->opcode >= VAR_5 &&
     (VAR_14->num_sge == 0 ||
      VAR_14->sg_list[0].length < sizeof(u64) ||
      VAR_14->sg_list[0].addr & (sizeof(u64) - 1)))
  goto bail_inval;
 else if (VAR_14->opcode >= VAR_8 && !VAR_13->s_max_rd_atomic)
  goto bail_inval;

 VAR_17 = VAR_13->s_head + 1;
 if (VAR_17 >= VAR_13->s_size)
  VAR_17 = 0;
 if (VAR_17 == VAR_13->s_last) {
  VAR_21 = -VAR_1;
  goto bail;
 }

 VAR_23 = &FUNC_11(VAR_13->ibqp.device)->lk_table;
 VAR_24 = FUNC_12(VAR_13->ibqp.pd);
 VAR_16 = FUNC_2(VAR_13, VAR_13->s_head);
 VAR_16->wr = *VAR_14;
 VAR_16->length = 0;
 VAR_19 = 0;
 if (VAR_14->num_sge) {
  VAR_20 = VAR_14->opcode >= VAR_8 ?
   VAR_2 : 0;
  for (VAR_18 = 0; VAR_18 < VAR_14->num_sge; VAR_18++) {
   u32 VAR_25 = VAR_14->sg_list[VAR_18].length;
   int VAR_26;

   if (VAR_25 == 0)
    continue;
   VAR_26 = FUNC_4(VAR_23, VAR_24, &VAR_16->sg_list[VAR_19],
      &VAR_14->sg_list[VAR_18], VAR_20);
   if (!VAR_26)
    goto bail_inval_free;
   VAR_16->length += VAR_25;
   VAR_19++;
  }
  VAR_16->wr.num_sge = VAR_19;
 }
 if (VAR_13->ibqp.qp_type == VAR_4 ||
     VAR_13->ibqp.qp_type == VAR_3) {
  if (VAR_16->length > 0x80000000U)
   goto bail_inval_free;
 } else if (VAR_16->length > (FUNC_1(VAR_13->ibqp.device)->pport +
      VAR_13->port_num - 1)->ibmtu)
  goto bail_inval_free;
 else
  FUNC_0(&FUNC_10(VAR_14->wr.ud.ah)->refcount);
 VAR_16->ssn = VAR_13->s_ssn++;
 VAR_13->s_head = VAR_17;

 VAR_21 = 0;
 goto bail;

bail_inval_free:
 while (VAR_19) {
  struct qib_sge *VAR_27 = &VAR_16->sg_list[--VAR_19];

  FUNC_5(VAR_27->mr);
 }
bail_inval:
 VAR_21 = -VAR_0;
bail:
 if (!VAR_21 && !VAR_14->next &&
  !FUNC_7(
    FUNC_1(VAR_13->ibqp.device)->pport + VAR_13->port_num - 1)) {
  FUNC_6(VAR_13);
  *VAR_15 = 1;
 }
 FUNC_9(&VAR_13->s_lock, VAR_22);
 return VAR_21;
}
