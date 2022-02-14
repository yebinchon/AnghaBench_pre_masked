
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_vhcr {int op_modifier; int in_modifier; } ;
struct TYPE_4__ {int num_ports; int function_caps; int num_qps; int num_srqs; int num_cqs; int num_eqs; int reserved_eqs; int num_mpts; int num_mtts; int num_mgms; int num_amgms; } ;
struct TYPE_3__ {int base_tunnel_sqpn; int base_proxy_sqpn; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__ phys_caps; } ;
struct mlx4_cmd_mailbox {int buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

int FUNC_1(struct mlx4_dev *VAR_22, int VAR_23,
    struct mlx4_vhcr *VAR_24,
    struct mlx4_cmd_mailbox *VAR_25,
    struct mlx4_cmd_mailbox *VAR_26,
    struct mlx4_cmd_info *VAR_27)
{
 u8 VAR_28;
 u32 VAR_29;
 int VAR_30 = 0;
 if (VAR_24->op_modifier == 1) {
  VAR_28 = 0;

  FUNC_0(VAR_26->buf, VAR_28, 0xc);

  FUNC_0(VAR_26->buf, VAR_28, 0x8);

  VAR_28 = VAR_24->in_modifier;
  FUNC_0(VAR_26->buf, VAR_28, 0x3);


  VAR_29 = VAR_22->phys_caps.base_tunnel_sqpn + 8 * VAR_23 + VAR_28 - 1;
  FUNC_0(VAR_26->buf, VAR_29, 0x10);

  VAR_29 += 2;
  FUNC_0(VAR_26->buf, VAR_29, 0x18);

  VAR_29 = VAR_22->phys_caps.base_proxy_sqpn + 8 * VAR_23 + VAR_28 - 1;
  FUNC_0(VAR_26->buf, VAR_29, 0x14);

  VAR_29 += 2;
  FUNC_0(VAR_26->buf, VAR_29, 0x1c);

 } else if (VAR_24->op_modifier == 0) {

  VAR_28 = (0x80 | 0x40);
  FUNC_0(VAR_26->buf, VAR_28, 0x0);

  VAR_28 = VAR_22->caps.num_ports;
  FUNC_0(VAR_26->buf, VAR_28, 0x1);

  VAR_29 = VAR_22->caps.function_caps;
  FUNC_0(VAR_26->buf, VAR_29, 0x4);

  VAR_28 = 0;
  FUNC_0(VAR_26->buf, VAR_28, 0x8);

  VAR_29 = VAR_22->caps.num_qps;
  FUNC_0(VAR_26->buf, VAR_29, 0x10);

  VAR_29 = VAR_22->caps.num_srqs;
  FUNC_0(VAR_26->buf, VAR_29, 0x18);

  VAR_29 = VAR_22->caps.num_cqs;
  FUNC_0(VAR_26->buf, VAR_29, 0x14);

  VAR_29 = VAR_22->caps.num_eqs;
  FUNC_0(VAR_26->buf, VAR_29, 0x2c);

  VAR_29 = VAR_22->caps.reserved_eqs;
  FUNC_0(VAR_26->buf, VAR_29, 0x30);

  VAR_29 = VAR_22->caps.num_mpts;
  FUNC_0(VAR_26->buf, VAR_29, 0x20);

  VAR_29 = VAR_22->caps.num_mtts;
  FUNC_0(VAR_26->buf, VAR_29, 0x24);

  VAR_29 = VAR_22->caps.num_mgms + VAR_22->caps.num_amgms;
  FUNC_0(VAR_26->buf, VAR_29, 0x28);

 } else
  VAR_30 = -VAR_0;

 return VAR_30;
}
