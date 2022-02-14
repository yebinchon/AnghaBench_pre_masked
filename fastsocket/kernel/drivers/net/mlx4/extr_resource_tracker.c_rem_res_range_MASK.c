
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct res_common {int owner; int list; int node; } ;
struct mlx4_resource_tracker {int * res_tree; } ;
struct TYPE_3__ {struct mlx4_resource_tracker res_tracker; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct res_common*) ;
 int FUNC_1 (int *) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct res_common*,int,int) ;
 struct res_common* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct mlx4_dev *VAR_2, int VAR_3, u64 VAR_4, int VAR_5,
    enum mlx4_resource VAR_6, int VAR_7)
{
 u64 VAR_8;
 int VAR_9;
 struct mlx4_priv *VAR_10 = FUNC_2(VAR_2);
 struct mlx4_resource_tracker *VAR_11 = &VAR_10->mfunc.master.res_tracker;
 struct res_common *VAR_12;

 FUNC_7(FUNC_3(VAR_2));
 for (VAR_8 = VAR_4; VAR_8 < VAR_4 + VAR_5; ++VAR_8) {
  VAR_12 = FUNC_6(&VAR_11->res_tree[VAR_6], VAR_8);
  if (!VAR_12) {
   VAR_9 = -VAR_0;
   goto out;
  }
  if (VAR_12->owner != VAR_3) {
   VAR_9 = -VAR_1;
   goto out;
  }
  VAR_9 = FUNC_5(VAR_12, VAR_6, VAR_7);
  if (VAR_9)
   goto out;
 }

 for (VAR_8 = VAR_4; VAR_8 < VAR_4 + VAR_5; ++VAR_8) {
  VAR_12 = FUNC_6(&VAR_11->res_tree[VAR_6], VAR_8);
  FUNC_4(&VAR_12->node, &VAR_11->res_tree[VAR_6]);
  FUNC_1(&VAR_12->list);
  FUNC_0(VAR_12);
 }
 VAR_9 = 0;

out:
 FUNC_8(FUNC_3(VAR_2));

 return VAR_9;
}
