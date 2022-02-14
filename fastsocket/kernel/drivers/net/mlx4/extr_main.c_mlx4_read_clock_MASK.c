
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct mlx4_priv {scalar_t__ clock_mapping; } ;
struct mlx4_dev {int dummy; } ;
typedef int cycle_t ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

cycle_t FUNC_3(struct mlx4_dev *VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3;
 cycle_t VAR_4;
 int VAR_5;
 struct mlx4_priv *VAR_6 = FUNC_0(VAR_0);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  VAR_1 = FUNC_2(FUNC_1(VAR_6->clock_mapping));
  VAR_2 = FUNC_2(FUNC_1(VAR_6->clock_mapping + 4));
  VAR_3 = FUNC_2(FUNC_1(VAR_6->clock_mapping));
  if (VAR_1 == VAR_3)
   break;
 }

 VAR_4 = (u64) VAR_1 << 32 | (u64) VAR_2;

 return VAR_4;
}
