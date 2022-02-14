
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* pagesz; void** pbl_addr; TYPE_1__* sgl; void* num_sgle; } ;
union t3_wr {TYPE_2__ recv; } ;
typedef int u8 ;
typedef unsigned long u32 ;
struct TYPE_9__ {int rq_size_log2; int rq_wptr; TYPE_3__* rq; } ;
struct iwch_qp {TYPE_4__ wq; int rhp; } ;
struct ib_recv_wr {unsigned long num_sge; int wr_id; TYPE_5__* sg_list; } ;
struct TYPE_10__ {unsigned long lkey; unsigned long length; scalar_t__ addr; } ;
struct TYPE_8__ {int pbl_addr; int wr_id; } ;
struct TYPE_6__ {scalar_t__ to; void* len; void* stag; } ;


 size_t FUNC_0 (int ,int ) ;
 int VAR_0 ;
 void* FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,TYPE_5__*,unsigned long,unsigned long*,int*) ;

__attribute__((used)) static int FUNC_4(struct iwch_qp *VAR_1, union t3_wr *VAR_2,
    struct ib_recv_wr *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u32 VAR_6[VAR_0];
 u8 VAR_7[VAR_0];

 VAR_5 = FUNC_3(VAR_1->rhp, VAR_3->sg_list, VAR_3->num_sge, VAR_6,
          VAR_7);
 if (VAR_5)
  return VAR_5;
 VAR_2->recv.pagesz[0] = VAR_7[0];
 VAR_2->recv.pagesz[1] = VAR_7[1];
 VAR_2->recv.pagesz[2] = VAR_7[2];
 VAR_2->recv.pagesz[3] = VAR_7[3];
 VAR_2->recv.num_sgle = FUNC_1(VAR_3->num_sge);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_sge; VAR_4++) {
  VAR_2->recv.sgl[VAR_4].stag = FUNC_1(VAR_3->sg_list[VAR_4].lkey);
  VAR_2->recv.sgl[VAR_4].len = FUNC_1(VAR_3->sg_list[VAR_4].length);


  VAR_2->recv.sgl[VAR_4].to = FUNC_2(((u32)VAR_3->sg_list[VAR_4].addr) &
    ((1UL << (12 + VAR_7[VAR_4])) - 1));


  VAR_2->recv.pbl_addr[VAR_4] = FUNC_1(VAR_6[VAR_4]);
 }
 for (; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->recv.sgl[VAR_4].stag = 0;
  VAR_2->recv.sgl[VAR_4].len = 0;
  VAR_2->recv.sgl[VAR_4].to = 0;
  VAR_2->recv.pbl_addr[VAR_4] = 0;
 }
 VAR_1->wq.rq[FUNC_0(VAR_1->wq.rq_wptr,
        VAR_1->wq.rq_size_log2)].wr_id = VAR_3->wr_id;
 VAR_1->wq.rq[FUNC_0(VAR_1->wq.rq_wptr,
        VAR_1->wq.rq_size_log2)].pbl_addr = 0;
 return 0;
}
