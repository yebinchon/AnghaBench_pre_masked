
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int * buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_5, u8 VAR_6,
        int *VAR_7, int *VAR_8)
{
 struct mlx4_cmd_mailbox *VAR_9;
 u32 *VAR_10;
 u16 VAR_11;
 int VAR_12;

 VAR_9 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_9))
  return FUNC_2(VAR_9);

 VAR_12 = FUNC_4(VAR_5, 0, VAR_9->dma, VAR_6, 0,
       VAR_0, VAR_1,
       VAR_2);
 if (VAR_12)
  goto out;

 VAR_10 = VAR_9->buf;

 FUNC_1(VAR_11, VAR_10, VAR_3);
 *VAR_7 = VAR_11;

 FUNC_1(VAR_11, VAR_10, VAR_4);
 *VAR_8 = VAR_11;

out:
 FUNC_5(VAR_5, VAR_9);
 return VAR_12;
}
