
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_vport_oper_state {scalar_t__ vlan_idx; } ;
struct TYPE_5__ {TYPE_1__* vf_oper; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {int dev; TYPE_3__ mfunc; } ;
struct TYPE_4__ {struct mlx4_vport_oper_state* vport; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx4_priv *VAR_2, int VAR_3)
{
 int VAR_4;
 struct mlx4_vport_oper_state *VAR_5;

 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
  VAR_5 = &VAR_2->mfunc.master.vf_oper[VAR_3].vport[VAR_4];
  if (VAR_1 != VAR_5->vlan_idx) {
   FUNC_0(&VAR_2->dev,
            VAR_4, VAR_5->vlan_idx);
   VAR_5->vlan_idx = VAR_1;
  }
 }
 return;
}
