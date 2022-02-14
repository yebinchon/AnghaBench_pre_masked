
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_qp_context {int qkey; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_0, struct mlx4_vhcr *VAR_1,
      struct mlx4_qp_context *VAR_2)
{
 u32 VAR_3 = VAR_1->in_modifier & 0xffffff;
 u32 VAR_4 = 0;

 if (FUNC_1(VAR_0, VAR_3, &VAR_4))
  return;


 VAR_2->qkey = FUNC_0(VAR_4);
}
