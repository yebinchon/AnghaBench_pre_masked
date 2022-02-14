
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_mr {scalar_t__ enabled; int mtt; int key; } ;
struct TYPE_2__ {int num_mpts; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,int *,int) ;
 int FUNC_2 (struct mlx4_dev*,int *) ;
 int FUNC_3 (struct mlx4_dev*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_2, struct mlx4_mr *VAR_3)
{
 int VAR_4;

 if (VAR_3->enabled == VAR_0) {
  VAR_4 = FUNC_1(VAR_2, ((void*)0),
         FUNC_0(VAR_3->key) &
         (VAR_2->caps.num_mpts - 1));
  if (VAR_4) {
   FUNC_3(VAR_2, "HW2SW_MPT failed (%d),", VAR_4);
   FUNC_3(VAR_2, "MR has MWs bound to it.\n");
   return VAR_4;
  }

  VAR_3->enabled = VAR_1;
 }
 FUNC_2(VAR_2, &VAR_3->mtt);

 return 0;
}
