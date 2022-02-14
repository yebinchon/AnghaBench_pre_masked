
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * slave_list; } ;
struct TYPE_7__ {TYPE_2__ res_tracker; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_4__ mfunc; } ;
struct TYPE_5__ {int function; } ;
struct mlx4_dev {int num_slaves; TYPE_1__ caps; } ;
typedef enum mlx4_res_tracker_free_type { ____Placeholder_mlx4_res_tracker_free_type } mlx4_res_tracker_free_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

void FUNC_3(struct mlx4_dev *VAR_3,
    enum mlx4_res_tracker_free_type VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 if (VAR_5->mfunc.master.res_tracker.slave_list) {
  if (VAR_4 != VAR_2)
   for (VAR_6 = 0 ; VAR_6 < VAR_3->num_slaves; VAR_6++)
    if (VAR_4 == VAR_0 ||
        VAR_3->caps.function != VAR_6)
     FUNC_1(VAR_3, VAR_6);

  if (VAR_4 != VAR_1) {
   FUNC_0(VAR_5->mfunc.master.res_tracker.slave_list);
   VAR_5->mfunc.master.res_tracker.slave_list = ((void*)0);
  }
 }
}
