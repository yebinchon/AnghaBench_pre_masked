
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {TYPE_1__* ah; } ;
struct TYPE_9__ {TYPE_2__ ud; } ;
struct ib_send_wr {int num_sge; scalar_t__ opcode; TYPE_6__* sg_list; TYPE_3__ wr; } ;
struct ipath_swqe {int length; scalar_t__ ssn; struct ib_send_wr wr; int * sg_list; } ;
struct TYPE_10__ {scalar_t__ qp_type; scalar_t__ pd; int device; } ;
struct ipath_qp {size_t state; int s_max_sge; scalar_t__ s_head; scalar_t__ s_size; scalar_t__ s_last; int s_lock; int s_ssn; TYPE_4__ ibqp; int s_max_rd_atomic; } ;
struct ipath_devdata {int ipath_flags; int ipath_ibmtu; } ;
struct TYPE_12__ {int length; int addr; } ;
struct TYPE_11__ {struct ipath_devdata* dd; } ;
struct TYPE_7__ {scalar_t__ pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ipath_swqe* FUNC_0 (struct ipath_qp*,scalar_t__) ;
 int* VAR_15 ;
 int FUNC_1 (struct ipath_qp*,int *,TYPE_6__*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_5__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ipath_qp *VAR_16, struct ib_send_wr *VAR_17)
{
 struct ipath_swqe *VAR_18;
 u32 VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 unsigned long VAR_24;
 struct ipath_devdata *VAR_25 = FUNC_4(VAR_16->ibqp.device)->dd;

 FUNC_2(&VAR_16->s_lock, VAR_24);

 if (VAR_16->ibqp.qp_type != VAR_5 &&
     !(VAR_25->ipath_flags & VAR_13)) {
  VAR_23 = -VAR_1;
  goto bail;
 }


 if (FUNC_5(!(VAR_15[VAR_16->state] & VAR_14)))
  goto bail_inval;


 if (VAR_17->num_sge > VAR_16->s_max_sge)
  goto bail_inval;






 if (VAR_16->ibqp.qp_type == VAR_6) {
  if ((unsigned) VAR_17->opcode >= VAR_10)
   goto bail_inval;
 } else if (VAR_16->ibqp.qp_type == VAR_7) {

  if (VAR_17->opcode != VAR_11 &&
      VAR_17->opcode != VAR_12)
   goto bail_inval;

  if (VAR_16->ibqp.pd != VAR_17->wr.ud.ah->pd)
   goto bail_inval;
 } else if ((unsigned) VAR_17->opcode > VAR_9)
  goto bail_inval;
 else if (VAR_17->opcode >= VAR_8 &&
     (VAR_17->num_sge == 0 ||
      VAR_17->sg_list[0].length < sizeof(u64) ||
      VAR_17->sg_list[0].addr & (sizeof(u64) - 1)))
  goto bail_inval;
 else if (VAR_17->opcode >= VAR_10 && !VAR_16->s_max_rd_atomic)
  goto bail_inval;

 VAR_19 = VAR_16->s_head + 1;
 if (VAR_19 >= VAR_16->s_size)
  VAR_19 = 0;
 if (VAR_19 == VAR_16->s_last) {
  VAR_23 = -VAR_2;
  goto bail;
 }

 VAR_18 = FUNC_0(VAR_16, VAR_16->s_head);
 VAR_18->wr = *VAR_17;
 VAR_18->length = 0;
 if (VAR_17->num_sge) {
  VAR_22 = VAR_17->opcode >= VAR_10 ?
   VAR_3 : 0;
  for (VAR_20 = 0, VAR_21 = 0; VAR_20 < VAR_17->num_sge; VAR_20++) {
   u32 VAR_26 = VAR_17->sg_list[VAR_20].length;
   int VAR_27;

   if (VAR_26 == 0)
    continue;
   VAR_27 = FUNC_1(VAR_16, &VAR_18->sg_list[VAR_21],
        &VAR_17->sg_list[VAR_20], VAR_22);
   if (!VAR_27)
    goto bail_inval;
   VAR_18->length += VAR_26;
   VAR_21++;
  }
  VAR_18->wr.num_sge = VAR_21;
 }
 if (VAR_16->ibqp.qp_type == VAR_6 ||
     VAR_16->ibqp.qp_type == VAR_4) {
  if (VAR_18->length > 0x80000000U)
   goto bail_inval;
 } else if (VAR_18->length > FUNC_4(VAR_16->ibqp.device)->dd->ipath_ibmtu)
  goto bail_inval;
 VAR_18->ssn = VAR_16->s_ssn++;
 VAR_16->s_head = VAR_19;

 VAR_23 = 0;
 goto bail;

bail_inval:
 VAR_23 = -VAR_0;
bail:
 FUNC_3(&VAR_16->s_lock, VAR_24);
 return VAR_23;
}
