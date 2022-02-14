
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wqe_cnt; unsigned int wqe_shift; } ;
struct mlx4_ib_qp {unsigned int sq_max_wqes_per_wr; TYPE_1__ sq; } ;


 int FUNC_0 (struct mlx4_ib_qp*,int,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline unsigned FUNC_2(struct mlx4_ib_qp *VAR_0, int VAR_1)
{
 unsigned VAR_2 = VAR_0->sq.wqe_cnt - (VAR_1 & (VAR_0->sq.wqe_cnt - 1));
 if (FUNC_1(VAR_2 < VAR_0->sq_max_wqes_per_wr)) {
  FUNC_0(VAR_0, VAR_1, VAR_2 << VAR_0->sq.wqe_shift);
  VAR_1 += VAR_2;
 }
 return VAR_1;
}
