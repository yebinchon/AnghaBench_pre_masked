
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_qp {int dummy; } ;
struct mlx4_ib_cq {int lock; int mcq; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_ib_cq*,struct mlx4_ib_qp**,struct ib_wc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct mlx4_ib_cq* FUNC_4 (struct ib_cq*) ;

int FUNC_5(struct ib_cq *VAR_1, int VAR_2, struct ib_wc *VAR_3)
{
 struct mlx4_ib_cq *VAR_4 = FUNC_4(VAR_1);
 struct mlx4_ib_qp *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 FUNC_2(&VAR_4->lock, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  VAR_8 = FUNC_1(VAR_4, &VAR_5, VAR_3 + VAR_7);
  if (VAR_8)
   break;
 }

 FUNC_0(&VAR_4->mcq);

 FUNC_3(&VAR_4->lock, VAR_6);

 if (VAR_8 == 0 || VAR_8 == -VAR_0)
  return VAR_7;
 else
  return VAR_8;
}
