
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*) ;

void FUNC_2(struct mlx4_dev *VAR_4, u64 *VAR_5)
{
 if (!FUNC_1(VAR_4)) {
  *VAR_5 = 0;
  return;
 }

 *VAR_5 = (VAR_2 |
    VAR_3 |
    VAR_1);

 if (FUNC_0(VAR_4))
  *VAR_5 |= VAR_0;
}
