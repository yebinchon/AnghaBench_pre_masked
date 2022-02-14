
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_set_port_general_context {int pptx; int pfctx; int pprx; int pfcrx; int mtu; int flags; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_general_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mlx4_set_port_general_context*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int,int,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_5, u8 VAR_6, int VAR_7,
     u8 VAR_8, u8 VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct mlx4_cmd_mailbox *VAR_12;
 struct mlx4_set_port_general_context *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_4(VAR_5);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);
 VAR_13 = VAR_12->buf;
 FUNC_3(VAR_13, 0, sizeof *VAR_13);

 VAR_13->flags = VAR_4;
 VAR_13->mtu = FUNC_2(VAR_7);
 VAR_13->pptx = (VAR_8 * (!VAR_9)) << 7;
 VAR_13->pfctx = VAR_9;
 VAR_13->pprx = (VAR_10 * (!VAR_11)) << 7;
 VAR_13->pfcrx = VAR_11;

 VAR_15 = VAR_3 << 8 | VAR_6;
 VAR_14 = FUNC_5(VAR_5, VAR_12->dma, VAR_15, 1, VAR_0,
         VAR_1, VAR_2);

 FUNC_6(VAR_5, VAR_12);
 return VAR_14;
}
