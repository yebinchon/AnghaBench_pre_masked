
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int cons_index; } ;
struct TYPE_7__ {int cqe; } ;
struct TYPE_5__ {int entry_size; } ;
struct mlx4_ib_cq {TYPE_4__ mcq; TYPE_3__ ibcq; TYPE_2__* resize_buf; TYPE_1__ buf; } ;
struct mlx4_cqe {int owner_sr_opcode; } ;
struct TYPE_6__ {int cqe; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx4_cqe* FUNC_0 (struct mlx4_ib_cq*,int) ;
 struct mlx4_cqe* FUNC_1 (int *,int) ;
 int FUNC_2 (struct mlx4_cqe*,struct mlx4_cqe*,int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_cq *VAR_3)
{
 struct mlx4_cqe *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7 = VAR_3->buf.entry_size;
 int VAR_8 = VAR_7 == 64 ? 1 : 0;

 VAR_6 = VAR_3->mcq.cons_index;
 VAR_4 = FUNC_0(VAR_3, VAR_6 & VAR_3->ibcq.cqe);
 VAR_4 += VAR_8;

 while ((VAR_4->owner_sr_opcode & VAR_0) != VAR_1) {
  VAR_5 = FUNC_1(&VAR_3->resize_buf->buf,
        (VAR_6 + 1) & VAR_3->resize_buf->cqe);
  FUNC_2(VAR_5, FUNC_0(VAR_3, VAR_6 & VAR_3->ibcq.cqe), VAR_7);
  VAR_5 += VAR_8;

  VAR_5->owner_sr_opcode = (VAR_4->owner_sr_opcode & ~VAR_2) |
   (((VAR_6 + 1) & (VAR_3->resize_buf->cqe + 1)) ? VAR_2 : 0);
  VAR_4 = FUNC_0(VAR_3, ++VAR_6 & VAR_3->ibcq.cqe);
  VAR_4 += VAR_8;
 }
 ++VAR_3->mcq.cons_index;
}
