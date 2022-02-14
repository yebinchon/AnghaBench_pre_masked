
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
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*,int ,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_5)
{
 u64 VAR_6;

 if (FUNC_3(VAR_5)) {
  if (FUNC_2(VAR_5, 0, &VAR_6, VAR_3, VAR_4,
       VAR_0,
       VAR_1, VAR_2))
   return -1;
  return FUNC_1(&VAR_6);
 }
 return FUNC_0(VAR_5);
}
