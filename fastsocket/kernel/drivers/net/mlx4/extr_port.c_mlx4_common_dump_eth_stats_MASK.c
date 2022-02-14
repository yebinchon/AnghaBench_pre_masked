
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_1(struct mlx4_dev *VAR_3, int VAR_4,
          u32 VAR_5, struct mlx4_cmd_mailbox *VAR_6)
{
 return FUNC_0(VAR_3, 0, VAR_6->dma, VAR_5, 0,
       VAR_0, VAR_2,
       VAR_1);
}
