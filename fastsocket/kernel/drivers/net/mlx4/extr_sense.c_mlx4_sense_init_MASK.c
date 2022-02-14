
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_sense {int* do_sense_port; int sense_poll; struct mlx4_dev* dev; } ;
struct mlx4_priv {struct mlx4_sense sense; } ;
struct TYPE_2__ {int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int FUNC_0 (int *,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int VAR_0 ;

void FUNC_2(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_1(VAR_1);
 struct mlx4_sense *VAR_3 = &VAR_2->sense;
 int VAR_4;

 VAR_3->dev = VAR_1;
 for (VAR_4 = 1; VAR_4 <= VAR_1->caps.num_ports; VAR_4++)
  VAR_3->do_sense_port[VAR_4] = 1;

 FUNC_0(&VAR_3->sense_poll, VAR_0);
}
