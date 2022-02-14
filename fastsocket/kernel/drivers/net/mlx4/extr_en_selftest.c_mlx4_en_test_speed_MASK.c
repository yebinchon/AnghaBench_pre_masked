
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_speed; } ;
struct mlx4_en_priv {TYPE_1__ port_state; int port; int mdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_priv *VAR_2)
{

 if (FUNC_0(VAR_2->mdev, VAR_2->port))
  return -VAR_0;


 if (VAR_2->port_state.link_speed != VAR_1)
  return VAR_2->port_state.link_speed;
 return 0;
}
