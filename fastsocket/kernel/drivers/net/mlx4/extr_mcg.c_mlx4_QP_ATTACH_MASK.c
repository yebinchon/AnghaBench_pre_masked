
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx4_qp {int qpn; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int buf; } ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_4, struct mlx4_qp *VAR_5,
     u8 VAR_6[16], u8 VAR_7, u8 VAR_8,
     enum mlx4_protocol VAR_9)
{
 struct mlx4_cmd_mailbox *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 if (!FUNC_6(VAR_4))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_2(VAR_10->buf, VAR_6, 16);
 VAR_12 = VAR_5->qpn;
 VAR_12 |= (VAR_9 << 28);
 if (VAR_7 && VAR_8)
  VAR_12 |= (1 << 31);

 VAR_11 = FUNC_4(VAR_4, VAR_10->dma, VAR_12, VAR_7,
         VAR_1, VAR_2,
         VAR_3);

 FUNC_5(VAR_4, VAR_10);
 return VAR_11;
}
