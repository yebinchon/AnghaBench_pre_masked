
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;
struct mlx4_adapter {int board_id; int inta_pin; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_5, struct mlx4_adapter *VAR_6)
{
 struct mlx4_cmd_mailbox *VAR_7;
 u32 *VAR_8;
 int VAR_9;





 VAR_7 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_2(VAR_7);
 VAR_8 = VAR_7->buf;

 VAR_9 = FUNC_5(VAR_5, 0, VAR_7->dma, 0, 0, VAR_1,
      VAR_2, VAR_0);
 if (VAR_9)
  goto out;

 FUNC_1(VAR_6->inta_pin, VAR_8, 0x10);

 FUNC_3(VAR_8 + 0x20 / 4,
       VAR_6->board_id);

out:
 FUNC_6(VAR_5, VAR_7);
 return VAR_9;
}
