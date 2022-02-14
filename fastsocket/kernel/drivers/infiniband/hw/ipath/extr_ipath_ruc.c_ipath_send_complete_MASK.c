
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int send_flags; size_t opcode; int wr_id; } ;
struct ipath_swqe {int length; TYPE_1__ wr; } ;
struct TYPE_4__ {int send_cq; } ;
struct ipath_qp {size_t state; int s_flags; scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ s_draining; TYPE_2__ ibqp; } ;
struct ib_wc {int status; int byte_len; TYPE_2__* qp; int opcode; int wr_id; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int ,struct ib_wc*,int) ;
 int FUNC_1 (struct ib_wc*,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ipath_qp *VAR_7, struct ipath_swqe *VAR_8,
    enum ib_wc_status VAR_9)
{
 u32 VAR_10, VAR_11;

 if (!(VAR_5[VAR_7->state] & VAR_3))
  return;


 if (!(VAR_7->s_flags & VAR_4) ||
     (VAR_8->wr.send_flags & VAR_1) ||
     VAR_9 != VAR_2) {
  struct ib_wc VAR_12;

  FUNC_1(&VAR_12, 0, sizeof VAR_12);
  VAR_12.wr_id = VAR_8->wr.wr_id;
  VAR_12.status = VAR_9;
  VAR_12.opcode = VAR_6[VAR_8->wr.opcode];
  VAR_12.qp = &VAR_7->ibqp;
  if (VAR_9 == VAR_2)
   VAR_12.byte_len = VAR_8->length;
  FUNC_0(FUNC_2(VAR_7->ibqp.send_cq), &VAR_12,
          VAR_9 != VAR_2);
 }

 VAR_10 = VAR_11 = VAR_7->s_last;
 if (++VAR_11 >= VAR_7->s_size)
  VAR_11 = 0;
 VAR_7->s_last = VAR_11;
 if (VAR_7->s_cur == VAR_10)
  VAR_7->s_cur = VAR_11;
 if (VAR_7->s_tail == VAR_10)
  VAR_7->s_tail = VAR_11;
 if (VAR_7->state == VAR_0 && VAR_11 == VAR_7->s_cur)
  VAR_7->s_draining = 0;
}
