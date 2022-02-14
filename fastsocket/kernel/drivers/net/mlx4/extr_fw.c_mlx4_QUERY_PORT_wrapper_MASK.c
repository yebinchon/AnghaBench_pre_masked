
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct mlx4_vhcr {size_t in_modifier; } ;
struct TYPE_14__ {TYPE_5__* vf_admin; TYPE_3__* vf_oper; } ;
struct TYPE_15__ {TYPE_6__ master; } ;
struct mlx4_priv {TYPE_7__ mfunc; } ;
struct TYPE_16__ {int function; int* port_type; int* pkey_table_len; } ;
struct mlx4_dev {TYPE_8__ caps; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_13__ {TYPE_4__* vport; } ;
struct TYPE_12__ {int mac; } ;
struct TYPE_11__ {TYPE_2__* vport; } ;
struct TYPE_9__ {int mac; } ;
struct TYPE_10__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,size_t,int ,int ,int ,int ) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

int FUNC_4(struct mlx4_dev *VAR_8, int VAR_9,
       struct mlx4_vhcr *VAR_10,
       struct mlx4_cmd_mailbox *VAR_11,
       struct mlx4_cmd_mailbox *VAR_12,
       struct mlx4_cmd_info *VAR_13)
{
 struct mlx4_priv *VAR_14 = FUNC_3(VAR_8);
 u64 VAR_15;
 u8 VAR_16;
 u16 VAR_17;
 int VAR_18;





 VAR_18 = FUNC_2(VAR_8, 0, VAR_12->dma, VAR_10->in_modifier, 0,
      VAR_1, VAR_2,
      VAR_0);

 if (!VAR_18 && VAR_8->caps.function != VAR_9) {

  if (VAR_14->mfunc.master.vf_oper[VAR_9].vport[VAR_10->in_modifier].state.mac)
   VAR_15 = VAR_14->mfunc.master.vf_oper[VAR_9].vport[VAR_10->in_modifier].state.mac;
  else {

   FUNC_0(VAR_15, VAR_12->buf, VAR_6);
   VAR_15 += VAR_9 << 8;
   VAR_14->mfunc.master.vf_admin[VAR_9].vport[VAR_10->in_modifier].mac = VAR_15;
  }

  FUNC_1(VAR_12->buf, VAR_15, VAR_6);


  FUNC_0(VAR_16, VAR_12->buf,
    VAR_7);


  VAR_16 &= 0xE0;

  VAR_16 |= (VAR_8->caps.port_type[VAR_10->in_modifier] & 0x3);

  FUNC_1(VAR_12->buf, VAR_16,
    VAR_7);

  VAR_17 = 1;
  FUNC_1(VAR_12->buf, VAR_17,
    0x0e);

  VAR_17 = VAR_8->caps.pkey_table_len[VAR_10->in_modifier];
  FUNC_1(VAR_12->buf, VAR_17,
    0x0c);
 }

 return VAR_18;
}
