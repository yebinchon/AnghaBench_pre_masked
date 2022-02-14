
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {scalar_t__* port_type; int* port_ib_mtu; int * ib_port_def_cap; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int ,size_t,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_8 (struct mlx4_dev*) ;

int FUNC_9(struct mlx4_dev *VAR_10, u8 VAR_11, int VAR_12)
{
 struct mlx4_cmd_mailbox *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 if (VAR_10->caps.port_type[VAR_11] == VAR_7)
  return 0;

 VAR_13 = FUNC_5(VAR_10);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 FUNC_4(VAR_13->buf, 0, 256);

 ((__be32 *) VAR_13->buf)[1] = VAR_10->caps.ib_port_def_cap[VAR_11];

 if (VAR_12 >= 0 && FUNC_8(VAR_10)) {
  VAR_16 = 1;
  ((__be16 *) VAR_13->buf)[20] = FUNC_2(VAR_12);
 }


 for (VAR_15 = 8; VAR_15 >= 1; VAR_15 >>= 1) {
  ((__be32 *) VAR_13->buf)[0] = FUNC_3(
   (1 << VAR_1) |
   (1 << VAR_3) |
   (VAR_16 << VAR_2) |
   (VAR_10->caps.port_ib_mtu[VAR_11] << VAR_8) |
   (VAR_15 << VAR_9));
  VAR_14 = FUNC_6(VAR_10, VAR_13->dma, VAR_11, 0, VAR_4,
    VAR_5, VAR_6);
  if (VAR_14 != -VAR_0)
   break;
 }

 FUNC_7(VAR_10, VAR_13);
 return VAR_14;
}
