
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct slave_list {int dummy; } ;
struct TYPE_5__ {int lock; int * res_tree; TYPE_4__* slave_list; } ;
struct TYPE_6__ {TYPE_1__ res_tracker; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int num_slaves; } ;
struct TYPE_8__ {int mutex; int * res_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx4_dev*,char*,int) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mlx4_dev *VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 int VAR_7;

 VAR_5->mfunc.master.res_tracker.slave_list =
  FUNC_1(VAR_4->num_slaves * sizeof(struct slave_list),
   VAR_1);
 if (!VAR_5->mfunc.master.res_tracker.slave_list)
  return -VAR_0;

 for (VAR_6 = 0 ; VAR_6 < VAR_4->num_slaves; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
   FUNC_0(&VAR_5->mfunc.master.res_tracker.
           slave_list[VAR_6].res_list[VAR_7]);
  FUNC_4(&VAR_5->mfunc.master.res_tracker.slave_list[VAR_6].mutex);
 }

 FUNC_2(VAR_4, "Started init_resource_tracker: %ld slaves\n",
   VAR_4->num_slaves);
 for (VAR_6 = 0 ; VAR_6 < VAR_2; VAR_6++)
  VAR_5->mfunc.master.res_tracker.res_tree[VAR_6] = VAR_3;

 FUNC_5(&VAR_5->mfunc.master.res_tracker.lock);
 return 0 ;
}
