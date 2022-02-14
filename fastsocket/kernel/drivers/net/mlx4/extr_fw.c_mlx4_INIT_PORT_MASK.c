
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* vl_cap; int* port_width_cap; int* ib_mtu_cap; int* gid_table_len; int* pkey_table_len; } ;
struct mlx4_dev {int flags; TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int FUNC_3 (int*,int ,int ) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_12, int VAR_13)
{
 struct mlx4_cmd_mailbox *VAR_14;
 u32 *VAR_15;
 int VAR_16;
 u32 VAR_17;
 u16 VAR_18;

 if (VAR_12->flags & VAR_11) {
  VAR_14 = FUNC_4(VAR_12);
  if (FUNC_0(VAR_14))
   return FUNC_2(VAR_14);
  VAR_15 = VAR_14->buf;

  FUNC_3(VAR_15, 0, 256);

  VAR_17 = 0;
  VAR_17 |= (VAR_12->caps.vl_cap[VAR_13] & 0xf) << 4;
  VAR_17 |= (VAR_12->caps.port_width_cap[VAR_13] & 0xf) << 8;
  FUNC_1(VAR_15, VAR_17, 0x00);

  VAR_18 = 128 << VAR_12->caps.ib_mtu_cap[VAR_13];
  FUNC_1(VAR_15, VAR_18, 0x04);
  VAR_18 = VAR_12->caps.gid_table_len[VAR_13];
  FUNC_1(VAR_15, VAR_18, 0x06);
  VAR_18 = VAR_12->caps.pkey_table_len[VAR_13];
  FUNC_1(VAR_15, VAR_18, 0x0a);

  VAR_16 = FUNC_5(VAR_12, VAR_14->dma, VAR_13, 0, VAR_7,
          VAR_9, VAR_8);

  FUNC_6(VAR_12, VAR_14);
 } else
  VAR_16 = FUNC_5(VAR_12, 0, VAR_13, 0, VAR_7,
          VAR_9, VAR_10);

 return VAR_16;
}
