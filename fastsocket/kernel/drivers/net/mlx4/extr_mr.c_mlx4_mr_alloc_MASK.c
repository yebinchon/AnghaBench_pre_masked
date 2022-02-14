
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx4_mr {int dummy; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ,int ,int,int,int,struct mlx4_mr*) ;

int FUNC_3(struct mlx4_dev *VAR_1, u32 VAR_2, u64 VAR_3, u64 VAR_4, u32 VAR_5,
    int VAR_6, int VAR_7, struct mlx4_mr *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_1);
 if (VAR_9 == -1)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_1, VAR_9, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10)
  FUNC_0(VAR_1, VAR_9);

 return VAR_10;
}
