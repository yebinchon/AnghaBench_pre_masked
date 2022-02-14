
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int comm_toggle; } ;
struct TYPE_5__ {TYPE_1__* comm; } ;
struct mlx4_priv {TYPE_3__ cmd; TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {int slave_read; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = FUNC_1(&VAR_1->mfunc.comm->slave_read);

 return (FUNC_2(VAR_2) >> 31) != VAR_1->cmd.comm_toggle;
}
