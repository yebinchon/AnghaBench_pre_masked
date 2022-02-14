
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_vport_state {int default_vlan; int default_qos; } ;
struct TYPE_10__ {int default_vlan; } ;
struct mlx4_vport_oper_state {TYPE_3__ state; } ;
struct TYPE_12__ {TYPE_4__* slave_state; TYPE_2__* vf_oper; TYPE_1__* vf_admin; } ;
struct TYPE_13__ {TYPE_5__ master; } ;
struct mlx4_priv {TYPE_6__ mfunc; } ;
struct TYPE_14__ {int flags2; } ;
struct mlx4_dev {TYPE_7__ caps; } ;
typedef enum mlx4_vlan_transition { ____Placeholder_mlx4_vlan_transition } mlx4_vlan_transition ;
struct TYPE_11__ {scalar_t__ active; } ;
struct TYPE_9__ {struct mlx4_vport_oper_state* vport; } ;
struct TYPE_8__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*,char*,int,int) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_priv*,int,int) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;

int FUNC_6(struct mlx4_dev *VAR_6, int VAR_7, int VAR_8, u16 VAR_9, u8 VAR_10)
{
 struct mlx4_priv *VAR_11 = FUNC_5(VAR_6);
 struct mlx4_vport_oper_state *VAR_12;
 struct mlx4_vport_state *VAR_13;
 int VAR_14;
 enum mlx4_vlan_transition VAR_15;

 if ((!FUNC_3(VAR_6)) ||
     !(VAR_6->caps.flags2 & VAR_3))
  return -VAR_1;

 if ((VAR_9 > 4095) || (VAR_10 > 7))
  return -VAR_0;

 VAR_14 = FUNC_1(VAR_6, VAR_8);
 if (VAR_14 < 0)
  return -VAR_0;

 VAR_13 = &VAR_11->mfunc.master.vf_admin[VAR_14].vport[VAR_7];
 VAR_12 = &VAR_11->mfunc.master.vf_oper[VAR_14].vport[VAR_7];

 if ((0 == VAR_9) && (0 == VAR_10))
  VAR_13->default_vlan = VAR_4;
 else
  VAR_13->default_vlan = VAR_9;
 VAR_13->default_qos = VAR_10;

 VAR_15 = FUNC_0(VAR_12->state.default_vlan,
       VAR_13->default_vlan);

 if (VAR_11->mfunc.master.slave_state[VAR_14].active &&
     VAR_6->caps.flags2 & VAR_2 &&
     VAR_15 == VAR_5) {
  FUNC_2(VAR_6, "updating vf %d port %d config params immediately\n",
     VAR_8, VAR_7);
  FUNC_4(VAR_11, VAR_14, VAR_7);
 }
 return 0;
}
