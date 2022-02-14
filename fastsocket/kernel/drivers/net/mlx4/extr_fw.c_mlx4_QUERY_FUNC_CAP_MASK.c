
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_func_cap {int flags; int num_ports; int pf_context_behaviour; int qp_quota; int srq_quota; int cq_quota; int max_eq; int reserved_eq; int mpt_quota; int mtt_quota; int mcg_quota; int physical_port; int qp0_tunnel_qpn; int qp0_proxy_qpn; int qp1_tunnel_qpn; int qp1_proxy_qpn; } ;
struct TYPE_2__ {int num_ports; scalar_t__* port_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_31, u32 VAR_32,
   struct mlx4_func_cap *VAR_33)
{
 struct mlx4_cmd_mailbox *VAR_34;
 u32 *VAR_35;
 u8 VAR_36, VAR_37;
 u32 VAR_38;
 int VAR_39 = 0;

 VAR_37 = !!VAR_32;

 VAR_34 = FUNC_3(VAR_31);
 if (FUNC_0(VAR_34))
  return FUNC_2(VAR_34);

 VAR_39 = FUNC_4(VAR_31, 0, VAR_34->dma, VAR_32, VAR_37,
      VAR_3,
      VAR_4, VAR_5);
 if (VAR_39)
  goto out;

 VAR_35 = VAR_34->buf;

 if (!VAR_37) {
  FUNC_1(VAR_36, VAR_35, VAR_12);
  if (!(VAR_36 & (VAR_13 | VAR_14))) {
   FUNC_5(VAR_31, "The host supports neither eth nor rdma interfaces\n");
   VAR_39 = -VAR_2;
   goto out;
  }
  VAR_33->flags = VAR_36;

  FUNC_1(VAR_36, VAR_35, VAR_19);
  VAR_33->num_ports = VAR_36;

  FUNC_1(VAR_38, VAR_35, VAR_20);
  VAR_33->pf_context_behaviour = VAR_38;

  FUNC_1(VAR_38, VAR_35, VAR_26);
  VAR_33->qp_quota = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_30);
  VAR_33->srq_quota = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_8);
  VAR_33->cq_quota = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_15);
  VAR_33->max_eq = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_29);
  VAR_33->reserved_eq = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_17);
  VAR_33->mpt_quota = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_18);
  VAR_33->mtt_quota = VAR_38 & 0xFFFFFF;

  FUNC_1(VAR_38, VAR_35, VAR_16);
  VAR_33->mcg_quota = VAR_38 & 0xFFFFFF;
  goto out;
 }


 if (VAR_32 > VAR_31->caps.num_ports) {
  VAR_39 = -VAR_0;
  goto out;
 }

 if (VAR_31->caps.port_type[VAR_32] == VAR_6) {
  FUNC_1(VAR_36, VAR_35, VAR_11);
  if (VAR_36 & VAR_10) {
   FUNC_5(VAR_31, "VLAN is enforced on this port\n");
   VAR_39 = -VAR_2;
   goto out;
  }

  if (VAR_36 & VAR_9) {
   FUNC_5(VAR_31, "Force mac is enabled on this port\n");
   VAR_39 = -VAR_2;
   goto out;
  }
 } else if (VAR_31->caps.port_type[VAR_32] == VAR_7) {
  FUNC_1(VAR_36, VAR_35, VAR_28);
  if (VAR_36 & VAR_27) {
   FUNC_5(VAR_31, "phy_wqe_gid is "
     "enforced on this ib port\n");
   VAR_39 = -VAR_2;
   goto out;
  }
 }

 FUNC_1(VAR_36, VAR_35, VAR_21);
 VAR_33->physical_port = VAR_36;
 if (VAR_33->physical_port != VAR_32) {
  VAR_39 = -VAR_1;
  goto out;
 }

 FUNC_1(VAR_38, VAR_35, VAR_23);
 VAR_33->qp0_tunnel_qpn = VAR_38 & 0xFFFFFF;

 FUNC_1(VAR_38, VAR_35, VAR_22);
 VAR_33->qp0_proxy_qpn = VAR_38 & 0xFFFFFF;

 FUNC_1(VAR_38, VAR_35, VAR_25);
 VAR_33->qp1_tunnel_qpn = VAR_38 & 0xFFFFFF;

 FUNC_1(VAR_38, VAR_35, VAR_24);
 VAR_33->qp1_proxy_qpn = VAR_38 & 0xFFFFFF;
out:
 FUNC_6(VAR_31, VAR_34);

 return VAR_39;
}
