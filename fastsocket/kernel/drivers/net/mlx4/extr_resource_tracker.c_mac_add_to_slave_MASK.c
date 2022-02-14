
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct mlx4_resource_tracker {TYPE_1__* slave_list; } ;
struct TYPE_5__ {struct mlx4_resource_tracker res_tracker; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct mac_res {int list; scalar_t__ port; int mac; } ;
struct TYPE_4__ {int * res_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct mac_res* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_3, int VAR_4, u64 VAR_5, int VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_2(VAR_3);
 struct mlx4_resource_tracker *VAR_8 = &VAR_7->mfunc.master.res_tracker;
 struct mac_res *VAR_9;

 VAR_9 = FUNC_0(sizeof *VAR_9, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->mac = VAR_5;
 VAR_9->port = (u8) VAR_6;
 FUNC_1(&VAR_9->list,
        &VAR_8->slave_list[VAR_4].res_list[VAR_2]);
 return 0;
}
