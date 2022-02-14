
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dmpt_table; } ;
struct mlx4_priv {TYPE_1__ mr_table; } ;
struct TYPE_4__ {int key; } ;
struct mlx4_fmr {int mpt; TYPE_2__ mr; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,TYPE_2__*) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *,int ,int *) ;

int FUNC_4(struct mlx4_dev *VAR_1, struct mlx4_fmr *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_2->mr);
 if (VAR_4)
  return VAR_4;

 VAR_2->mpt = FUNC_3(&VAR_3->mr_table.dmpt_table,
        FUNC_0(VAR_2->mr.key), ((void*)0));
 if (!VAR_2->mpt)
  return -VAR_0;

 return 0;
}
