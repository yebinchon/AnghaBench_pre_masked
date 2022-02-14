
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ default_vlan; scalar_t__ default_qos; } ;
struct TYPE_8__ {scalar_t__ default_vlan; scalar_t__ default_qos; } ;
struct mlx4_vport_oper_state {int vlan_idx; TYPE_3__ state; } ;
struct mlx4_vf_immed_vlan_work {int flags; scalar_t__ orig_vlan_id; int orig_vlan_ix; int port; int slave; scalar_t__ qos; scalar_t__ vlan_id; int vlan_ix; int work; struct mlx4_priv* priv; } ;
struct TYPE_9__ {int comm_wq; TYPE_2__* vf_admin; TYPE_1__* vf_oper; } ;
struct TYPE_10__ {TYPE_4__ master; } ;
struct mlx4_priv {TYPE_5__ mfunc; int dev; } ;
struct TYPE_7__ {struct mlx4_vport_state* vport; } ;
struct TYPE_6__ {struct mlx4_vport_oper_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,scalar_t__,int*) ;
 int FUNC_2 (struct mlx4_vf_immed_vlan_work*) ;
 struct mlx4_vf_immed_vlan_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,int,int,int,int) ;
 int VAR_5 ;
 int FUNC_5 (int *,char*,int,int) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct mlx4_priv *VAR_6,
         int VAR_7, int VAR_8)
{
 struct mlx4_vport_oper_state *VAR_9;
 struct mlx4_vport_state *VAR_10;
 struct mlx4_vf_immed_vlan_work *VAR_11;
 int VAR_12;
 int VAR_13 = VAR_4;

 VAR_9 = &VAR_6->mfunc.master.vf_oper[VAR_7].vport[VAR_8];
 VAR_10 = &VAR_6->mfunc.master.vf_admin[VAR_7].vport[VAR_8];

 if (VAR_9->state.default_vlan == VAR_10->default_vlan &&
     VAR_9->state.default_qos == VAR_10->default_qos)
  return 0;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 if (VAR_9->state.default_vlan != VAR_10->default_vlan) {
  VAR_12 = FUNC_1(&VAR_6->dev, VAR_8,
        VAR_10->default_vlan,
        &VAR_13);
  if (VAR_12) {
   FUNC_2(VAR_11);
   FUNC_5((&VAR_6->dev),
      "No vlan resources slave %d, port %d\n",
      VAR_7, VAR_8);
   return VAR_12;
  }
  VAR_11->flags |= VAR_3;
  FUNC_4((&(VAR_6->dev)),
    "alloc vlan %d idx  %d slave %d port %d\n",
    (int)(VAR_10->default_vlan),
    VAR_13, VAR_7, VAR_8);
 }


 VAR_11->orig_vlan_id = VAR_9->state.default_vlan;
 VAR_11->orig_vlan_ix = VAR_9->vlan_idx;


 if (VAR_9->state.default_qos != VAR_10->default_qos)
  VAR_11->flags |= VAR_2;

 if (VAR_11->flags & VAR_3)
  VAR_9->vlan_idx = VAR_13;

 VAR_9->state.default_vlan = VAR_10->default_vlan;
 VAR_9->state.default_qos = VAR_10->default_qos;


 VAR_11->port = VAR_8;
 VAR_11->slave = VAR_7;
 VAR_11->qos = VAR_9->state.default_qos;
 VAR_11->vlan_id = VAR_9->state.default_vlan;
 VAR_11->vlan_ix = VAR_9->vlan_idx;
 VAR_11->priv = VAR_6;
 FUNC_0(&VAR_11->work, VAR_5);
 FUNC_6(VAR_6->mfunc.master.comm_wq, &VAR_11->work);

 return 0;
}
