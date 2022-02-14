
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_mtt {int order; int page_shift; int offset; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int) ;

int FUNC_1(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4,
    struct mlx4_mtt *VAR_5)
{
 int VAR_6;

 if (!VAR_3) {
  VAR_5->order = -1;
  VAR_5->page_shift = VAR_1;
  return 0;
 } else
  VAR_5->page_shift = VAR_4;

 for (VAR_5->order = 0, VAR_6 = 1; VAR_6 < VAR_3; VAR_6 <<= 1)
  ++VAR_5->order;

 VAR_5->offset = FUNC_0(VAR_2, VAR_5->order);
 if (VAR_5->offset == -1)
  return -VAR_0;

 return 0;
}
