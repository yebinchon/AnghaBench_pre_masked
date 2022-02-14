
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct TYPE_2__ {union ib_gid** gid_table; } ;
struct mlx4_ib_dev {TYPE_1__ iboe; } ;
struct ib_device {int dummy; } ;


 struct mlx4_ib_dev* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_0, u8 VAR_1, int VAR_2,
     union ib_gid *VAR_3)
{
 struct mlx4_ib_dev *VAR_4 = FUNC_0(VAR_0);

 *VAR_3 = VAR_4->iboe.gid_table[VAR_1 - 1][VAR_2];

 return 0;
}
