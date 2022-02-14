
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int wqe_shift; } ;
struct TYPE_6__ {void* buf; } ;
struct TYPE_7__ {TYPE_1__* page_list; TYPE_2__ direct; } ;
struct mthca_qp {int send_wqe_offset; TYPE_4__ sq; TYPE_3__ queue; scalar_t__ is_direct; } ;
struct TYPE_5__ {void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_0(struct mthca_qp *VAR_2, int VAR_3)
{
 if (VAR_2->is_direct)
  return VAR_2->queue.direct.buf + VAR_2->send_wqe_offset +
   (VAR_3 << VAR_2->sq.wqe_shift);
 else
  return VAR_2->queue.page_list[(VAR_2->send_wqe_offset +
         (VAR_3 << VAR_2->sq.wqe_shift)) >>
        VAR_0].buf +
   ((VAR_2->send_wqe_offset + (VAR_3 << VAR_2->sq.wqe_shift)) &
    (VAR_1 - 1));
}
