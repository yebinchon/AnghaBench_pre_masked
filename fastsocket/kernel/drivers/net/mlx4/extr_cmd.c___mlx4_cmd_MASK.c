
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_dev {int pdev; } ;
struct TYPE_3__ {scalar_t__ use_events; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 int FUNC_1 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct mlx4_dev *VAR_1, u64 VAR_2, u64 *VAR_3,
        int VAR_4, u32 VAR_5, u8 VAR_6,
        u16 VAR_7, unsigned long VAR_8, int VAR_9)
{
 if (FUNC_6(VAR_1->pdev))
  return -VAR_0;

 if (!FUNC_3(VAR_1) || (VAR_9 && FUNC_2(VAR_1))) {
  if (FUNC_4(VAR_1)->cmd.use_events)
   return FUNC_1(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6, VAR_7, VAR_8);
  else
   return FUNC_0(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6, VAR_7, VAR_8);
 }
 return FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_5, VAR_6, VAR_7, VAR_8);
}
