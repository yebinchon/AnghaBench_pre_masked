
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int res_id; } ;
struct res_mtt {int order; TYPE_1__ com; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx4_dev *VAR_1, int VAR_2, int VAR_3,
      int VAR_4, struct res_mtt *VAR_5)
{
 int VAR_6 = VAR_5->com.res_id;
 int VAR_7 = (1 << VAR_5->order);

 if (VAR_3 < VAR_6 || VAR_3 + VAR_4 > VAR_6 + VAR_7)
  return -VAR_0;
 return 0;
}
