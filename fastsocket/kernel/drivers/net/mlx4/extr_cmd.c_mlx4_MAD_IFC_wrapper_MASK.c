
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_vhcr {int in_modifier; int op; int op_modifier; } ;
struct TYPE_7__ {TYPE_2__* slave_state; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct mlx4_priv {int*** virt2phys_pkey; TYPE_4__ mfunc; } ;
struct TYPE_5__ {int num_ports; int * pkey_table_len; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; struct ib_smp* buf; } ;
struct mlx4_cmd_info {int dummy; } ;
struct ib_smp {int* data; int base_version; scalar_t__ mgmt_class; int class_version; scalar_t__ method; scalar_t__ attr_id; int attr_mod; } ;
typedef int __be64 ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_6__ {int* ib_cap_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_dev*,int,int *,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*) ;
 int * FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int*,int ,int) ;
 int FUNC_9 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_10 (struct mlx4_dev*,char*,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (struct mlx4_dev*,int) ;
 int FUNC_12 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_13 (struct mlx4_dev*) ;
 int FUNC_14 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_15(struct mlx4_dev *VAR_16, int VAR_17,
    struct mlx4_vhcr *VAR_18,
    struct mlx4_cmd_mailbox *VAR_19,
    struct mlx4_cmd_mailbox *VAR_20,
    struct mlx4_cmd_info *VAR_21)
{
 struct ib_smp *VAR_22 = VAR_19->buf;
 u32 VAR_23;
 u8 VAR_24;
 u16 *VAR_25;
 int VAR_26;
 int VAR_27, VAR_28;
 struct mlx4_priv *VAR_29 = FUNC_13(VAR_16);
 struct ib_smp *VAR_30 = VAR_20->buf;
 __be16 *VAR_31 = (__be16 *)(VAR_30->data);
 __be32 VAR_32;
 __be64 VAR_33;
 VAR_24 = VAR_18->in_modifier;

 if (VAR_22->base_version == 1 &&
     VAR_22->mgmt_class == VAR_5 &&
     VAR_22->class_version == 1) {
  if (VAR_22->method == VAR_6) {
   if (VAR_22->attr_id == VAR_10) {
    VAR_23 = FUNC_1(VAR_22->attr_mod);
    if (VAR_24 < 1 || VAR_24 > VAR_16->caps.num_ports)
     return -VAR_0;
    VAR_25 = FUNC_5(VAR_16->caps.pkey_table_len[VAR_24], sizeof *VAR_25, VAR_3);
    if (!VAR_25)
     return -VAR_1;



    VAR_26 = FUNC_4(VAR_16, VAR_24, VAR_25, VAR_19, VAR_20);
    if (!VAR_26) {
     for (VAR_27 = VAR_23 * 32; VAR_27 < (VAR_23 + 1) * 32; ++VAR_27) {
      VAR_28 = VAR_29->virt2phys_pkey[VAR_17][VAR_24 - 1][VAR_27];
      VAR_31[VAR_27 % 32] = FUNC_2(VAR_25[VAR_28]);
     }
    }
    FUNC_6(VAR_25);
    return VAR_26;
   }
   if (VAR_22->attr_id == VAR_11) {


    VAR_26 = FUNC_9(VAR_16, VAR_19->dma, VAR_20->dma,
         VAR_18->in_modifier, VAR_18->op_modifier,
         VAR_18->op, VAR_13, VAR_12);

    if (!VAR_26 && VAR_17 != FUNC_12(VAR_16)) {
     u8 *VAR_34 = VAR_30->data + VAR_15;

     *VAR_34 = (*VAR_34 & 0xf0) | FUNC_14(VAR_16, VAR_24, VAR_17);
     VAR_32 = VAR_29->mfunc.master.slave_state[VAR_17].ib_cap_mask[VAR_24];
     FUNC_7(VAR_30->data + VAR_14, &VAR_32, 4);
    }
    return VAR_26;
   }
   if (VAR_22->attr_id == VAR_8) {

    VAR_22->attr_mod = FUNC_3(VAR_17 / 8);

    VAR_26 = FUNC_9(VAR_16, VAR_19->dma, VAR_20->dma,
          VAR_18->in_modifier, VAR_18->op_modifier,
          VAR_18->op, VAR_13, VAR_12);
    if (!VAR_26) {

     if (VAR_17 % 8)
      FUNC_7(VAR_30->data,
             VAR_30->data + (VAR_17 % 8) * 8, 8);

     FUNC_8(VAR_30->data + 8, 0, 56);
    }
    return VAR_26;
   }
   if (VAR_22->attr_id == VAR_9) {
    VAR_26 = FUNC_9(VAR_16, VAR_19->dma, VAR_20->dma,
          VAR_18->in_modifier, VAR_18->op_modifier,
          VAR_18->op, VAR_13, VAR_12);
    if (!VAR_26) {
     VAR_33 = FUNC_11(VAR_16, VAR_17);
     FUNC_7(VAR_30->data + 12, &VAR_33, 8);
    }
    return VAR_26;
   }
  }
 }
 if (VAR_17 != FUNC_12(VAR_16) &&
     ((VAR_22->mgmt_class == VAR_4) ||
      (VAR_22->mgmt_class == VAR_5 &&
       VAR_22->method == VAR_7))) {
  FUNC_10(VAR_16, "slave %d is trying to execute a Subnet MGMT MAD, "
    "class 0x%x, method 0x%x for attr 0x%x. Rejecting\n",
    VAR_17, VAR_22->method, VAR_22->mgmt_class,
    FUNC_0(VAR_22->attr_id));
  return -VAR_2;
 }

 return FUNC_9(VAR_16, VAR_19->dma, VAR_20->dma,
        VAR_18->in_modifier, VAR_18->op_modifier,
        VAR_18->op, VAR_13, VAR_12);
}
