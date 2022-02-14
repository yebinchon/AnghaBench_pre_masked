
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct mlx4_vhcr {int dummy; } ;
struct TYPE_2__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_cmd_mailbox* buf; int dma; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct mlx4_cmd_mailbox*,int ) ;
 int FUNC_1 (struct mlx4_cmd_mailbox*,int,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_3(struct mlx4_dev *VAR_12, int VAR_13,
          struct mlx4_vhcr *VAR_14,
          struct mlx4_cmd_mailbox *VAR_15,
          struct mlx4_cmd_mailbox *VAR_16,
          struct mlx4_cmd_info *VAR_17)
{
 u64 VAR_18;
 int VAR_19 = 0;
 u8 VAR_20;
 u32 VAR_21;

 VAR_19 = FUNC_2(VAR_12, 0, VAR_16->dma, 0, 0, VAR_2,
      VAR_3, VAR_1);
 if (VAR_19)
  return VAR_19;




 FUNC_0(VAR_18, VAR_16->buf, VAR_10);
 VAR_18 |= VAR_5;
 VAR_18 &= ~VAR_4;
 FUNC_1(VAR_16->buf, VAR_18, VAR_10);


 FUNC_0(VAR_20, VAR_16->buf, VAR_9);
 VAR_20 &= 0x7f;
 FUNC_1(VAR_16->buf, VAR_20, VAR_9);


 FUNC_0(VAR_20, VAR_16->buf, VAR_7);
 VAR_20 &= 0x7f;
 FUNC_1(VAR_16->buf, VAR_20, VAR_7);


 FUNC_0(VAR_21, VAR_16, VAR_8);
 VAR_21 &= ~VAR_0;
 FUNC_1(VAR_16->buf, VAR_21, VAR_8);


 if (VAR_12->caps.steering_mode != VAR_6) {
  FUNC_0(VAR_20, VAR_16->buf,
    VAR_11);
  VAR_20 &= 0x7f;
  FUNC_1(VAR_16->buf, VAR_20,
    VAR_11);
 }
 return 0;
}
