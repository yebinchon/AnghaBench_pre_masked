
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,int ,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int ,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(struct mlx4_dev *VAR_5, u8 VAR_6, u16 VAR_7, int *VAR_8)
{
 u64 VAR_9 = 0;
 int VAR_10;

 if (FUNC_3(VAR_5)) {
  FUNC_4(&VAR_9, VAR_6);
  VAR_10 = FUNC_2(VAR_5, VAR_7, &VAR_9, VAR_4,
       VAR_3, VAR_0,
       VAR_1, VAR_2);
  if (!VAR_10)
   *VAR_8 = FUNC_1(&VAR_9);

  return VAR_10;
 }
 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
}
