
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_port_info {scalar_t__ port; int port_mtu_attr; TYPE_2__* dev; int port_attr; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mlx4_port_info *VAR_0)
{
 if (VAR_0->port < 0)
  return;

 FUNC_0(&VAR_0->dev->pdev->dev, &VAR_0->port_attr);
 FUNC_0(&VAR_0->dev->pdev->dev, &VAR_0->port_mtu_attr);
}
