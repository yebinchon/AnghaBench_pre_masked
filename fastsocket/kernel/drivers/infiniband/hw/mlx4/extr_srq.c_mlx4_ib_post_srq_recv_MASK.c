
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_wqe_data_seg {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct TYPE_6__ {void** db; } ;
struct TYPE_5__ {int max_gs; } ;
struct mlx4_ib_srq {size_t head; size_t tail; int wqe_ctr; int lock; TYPE_3__ db; TYPE_2__ msrq; int * wrid; } ;
struct ib_srq {int dummy; } ;
struct ib_recv_wr {int num_sge; TYPE_1__* sg_list; int wr_id; struct ib_recv_wr* next; } ;
struct TYPE_4__ {int length; int lkey; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mlx4_wqe_srq_next_seg* FUNC_3 (struct mlx4_ib_srq*,size_t) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct mlx4_ib_srq* FUNC_7 (struct ib_srq*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;

int FUNC_10(struct ib_srq *VAR_3, struct ib_recv_wr *VAR_4,
     struct ib_recv_wr **VAR_5)
{
 struct mlx4_ib_srq *VAR_6 = FUNC_7(VAR_3);
 struct mlx4_wqe_srq_next_seg *VAR_7;
 struct mlx4_wqe_data_seg *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 FUNC_5(&VAR_6->lock, VAR_9);

 for (VAR_11 = 0; VAR_4; ++VAR_11, VAR_4 = VAR_4->next) {
  if (FUNC_8(VAR_4->num_sge > VAR_6->msrq.max_gs)) {
   VAR_10 = -VAR_0;
   *VAR_5 = VAR_4;
   break;
  }

  if (FUNC_8(VAR_6->head == VAR_6->tail)) {
   VAR_10 = -VAR_1;
   *VAR_5 = VAR_4;
   break;
  }

  VAR_6->wrid[VAR_6->head] = VAR_4->wr_id;

  VAR_7 = FUNC_3(VAR_6, VAR_6->head);
  VAR_6->head = FUNC_0(VAR_7->next_wqe_index);
  VAR_8 = (struct mlx4_wqe_data_seg *) (VAR_7 + 1);

  for (VAR_12 = 0; VAR_12 < VAR_4->num_sge; ++VAR_12) {
   VAR_8[VAR_12].byte_count = FUNC_1(VAR_4->sg_list[VAR_12].length);
   VAR_8[VAR_12].lkey = FUNC_1(VAR_4->sg_list[VAR_12].lkey);
   VAR_8[VAR_12].addr = FUNC_2(VAR_4->sg_list[VAR_12].addr);
  }

  if (VAR_12 < VAR_6->msrq.max_gs) {
   VAR_8[VAR_12].byte_count = 0;
   VAR_8[VAR_12].lkey = FUNC_1(VAR_2);
   VAR_8[VAR_12].addr = 0;
  }
 }

 if (FUNC_4(VAR_11)) {
  VAR_6->wqe_ctr += VAR_11;





  FUNC_9();

  *VAR_6->db.db = FUNC_1(VAR_6->wqe_ctr);
 }

 FUNC_6(&VAR_6->lock, VAR_9);

 return VAR_10;
}
