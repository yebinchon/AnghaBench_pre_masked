
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ default_vlan; } ;
struct mlx4_vport_oper_state {int vlan_idx; struct mlx4_vport_state state; } ;
struct TYPE_7__ {TYPE_2__* vf_admin; TYPE_1__* vf_oper; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct mlx4_priv {int dev; TYPE_4__ mfunc; } ;
struct TYPE_6__ {struct mlx4_vport_state* vport; } ;
struct TYPE_5__ {struct mlx4_vport_oper_state* vport; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,scalar_t__,int *) ;
 int FUNC_1 (int *,char*,int,int ,int,int) ;
 int FUNC_2 (int *,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_priv *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct mlx4_vport_state *VAR_7;
 struct mlx4_vport_oper_state *VAR_8;

 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
  VAR_8 = &VAR_3->mfunc.master.vf_oper[VAR_4].vport[VAR_5];
  VAR_7 = &VAR_3->mfunc.master.vf_admin[VAR_4].vport[VAR_5];
  VAR_8->state = *VAR_7;
  if (VAR_1 != VAR_7->default_vlan) {
   VAR_6 = FUNC_0(&VAR_3->dev, VAR_5,
         VAR_7->default_vlan, &(VAR_8->vlan_idx));
   if (VAR_6) {
    VAR_8->vlan_idx = VAR_2;
    FUNC_2((&VAR_3->dev),
       "No vlan resorces slave %d, port %d\n",
       VAR_4, VAR_5);
    return VAR_6;
   }
   FUNC_1((&(VAR_3->dev)), "alloc vlan %d idx  %d slave %d port %d\n",
     (int)(VAR_8->state.default_vlan),
     VAR_8->vlan_idx, VAR_4, VAR_5);
  }
 }
 return 0;
}
