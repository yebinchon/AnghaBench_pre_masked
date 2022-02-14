
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slave_cmd_mutex; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*,int ,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx4_dev *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_3(&VAR_3->cmd.slave_cmd_mutex);
 if (FUNC_0(VAR_2, VAR_0, 0, VAR_1))
  FUNC_2(VAR_2, "Failed to close slave function.\n");
 FUNC_4(&VAR_3->cmd.slave_cmd_mutex);
}
