
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_ib_iov_port {int dentr_ar; TYPE_2__* dev; int cur_port; int mcgs_parent; int pkeys_parent; int gids_parent; int admin_alias_parent; } ;
struct mlx4_ib_dev {struct mlx4_ib_iov_port* iov_ports; TYPE_3__* dev; } ;
struct TYPE_4__ {int num_ports; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;
struct TYPE_5__ {int ports_parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct mlx4_ib_dev *VAR_0)
{
 struct mlx4_ib_iov_port *VAR_1;
 int VAR_2;

 if (!FUNC_2(VAR_0->dev))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->dev->caps.num_ports; VAR_2++) {
  VAR_1 = &VAR_0->iov_ports[VAR_2];
  FUNC_1(VAR_1->admin_alias_parent);
  FUNC_1(VAR_1->gids_parent);
  FUNC_1(VAR_1->pkeys_parent);
  FUNC_1(VAR_1->mcgs_parent);
  FUNC_1(VAR_1->cur_port);
  FUNC_1(VAR_1->cur_port);
  FUNC_1(VAR_1->cur_port);
  FUNC_1(VAR_1->cur_port);
  FUNC_1(VAR_1->cur_port);
  FUNC_1(VAR_1->dev->ports_parent);
  FUNC_0(VAR_1->dentr_ar);
 }
}
