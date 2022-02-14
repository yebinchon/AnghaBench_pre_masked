
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** netdevs; } ;
struct mlx4_ib_dev {TYPE_1__ iboe; } ;





 int FUNC_0 (struct mlx4_ib_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_0, int VAR_1, unsigned long VAR_2)
{
 switch (VAR_2) {
 case 128:
 case 130:
  FUNC_0(VAR_0, VAR_1, 0);
  break;

 case 129:
  FUNC_0(VAR_0, VAR_1, 1);
  VAR_0->iboe.netdevs[VAR_1 - 1] = ((void*)0);
 }
}
