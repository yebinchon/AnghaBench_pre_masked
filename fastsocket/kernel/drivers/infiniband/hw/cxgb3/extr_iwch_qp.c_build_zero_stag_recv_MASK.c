
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {void** pbl_addr; TYPE_4__* sgl; scalar_t__* pagesz; void* num_sgle; } ;
union t3_wr {TYPE_5__ recv; } ;
typedef int u32 ;
struct TYPE_15__ {int rq_size_log2; int rq_wptr; TYPE_6__* rq; } ;
struct iwch_qp {TYPE_7__ wq; TYPE_2__* rhp; } ;
struct ib_recv_wr {int num_sge; int wr_id; TYPE_3__* sg_list; } ;
struct TYPE_9__ {int pbl_base; } ;
struct TYPE_16__ {TYPE_1__ rnic_info; } ;
struct TYPE_14__ {int pbl_addr; int wr_id; } ;
struct TYPE_12__ {scalar_t__ to; void* len; scalar_t__ stag; } ;
struct TYPE_11__ {scalar_t__ length; scalar_t__ lkey; int addr; } ;
struct TYPE_10__ {TYPE_8__ rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*,int ) ;

__attribute__((used)) static int FUNC_4(struct iwch_qp *VAR_6, union t3_wr *VAR_7,
    struct ib_recv_wr *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 VAR_10 = FUNC_3(&VAR_6->rhp->rdev, VAR_5);
 if (!VAR_10)
  return -VAR_1;




 VAR_11 = (VAR_10 - VAR_6->rhp->rdev.rnic_info.pbl_base) >> 3;

 VAR_7->recv.num_sgle = FUNC_1(VAR_8->num_sge);

 for (VAR_9 = 0; VAR_9 < VAR_8->num_sge; VAR_9++) {
  if (VAR_8->sg_list[VAR_9].length > VAR_3)
   return -VAR_0;
  VAR_7->recv.pagesz[VAR_9] = VAR_4;




  if (VAR_8->sg_list[VAR_9].lkey != 0)
   return -VAR_0;
  VAR_7->recv.sgl[VAR_9].stag = 0;
  VAR_7->recv.sgl[VAR_9].len = FUNC_1(VAR_8->sg_list[VAR_9].length);
  VAR_7->recv.sgl[VAR_9].to = FUNC_2(VAR_8->sg_list[VAR_9].addr);
  VAR_7->recv.pbl_addr[VAR_9] = FUNC_1(VAR_11);
  VAR_11 += 2;
 }
 for (; VAR_9 < VAR_2; VAR_9++) {
  VAR_7->recv.pagesz[VAR_9] = 0;
  VAR_7->recv.sgl[VAR_9].stag = 0;
  VAR_7->recv.sgl[VAR_9].len = 0;
  VAR_7->recv.sgl[VAR_9].to = 0;
  VAR_7->recv.pbl_addr[VAR_9] = 0;
 }
 VAR_6->wq.rq[FUNC_0(VAR_6->wq.rq_wptr,
        VAR_6->wq.rq_size_log2)].wr_id = VAR_8->wr_id;
 VAR_6->wq.rq[FUNC_0(VAR_6->wq.rq_wptr,
        VAR_6->wq.rq_size_log2)].pbl_addr = VAR_10;
 return 0;
}
