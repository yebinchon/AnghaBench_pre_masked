
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {TYPE_1__ port_mgmt_change; } ;
struct mlx4_eqe {TYPE_2__ event; int subtype; int type; } ;
struct mlx4_dev {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_eqe*,int ,int) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_eqe*) ;

int FUNC_2(struct mlx4_dev *VAR_2, int VAR_3, u8 VAR_4)
{
 struct mlx4_eqe VAR_5;


 if (VAR_2->num_vfs < VAR_3)
  return 0;
 FUNC_0(&VAR_5, 0, sizeof VAR_5);

 VAR_5.type = VAR_1;
 VAR_5.subtype = VAR_0;
 VAR_5.event.port_mgmt_change.port = VAR_4;

 return FUNC_1(VAR_2, VAR_3, &VAR_5);
}
