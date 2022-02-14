
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {TYPE_1__ dgid; } ;
struct ib_ah_attr {TYPE_2__ grh; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,int ,int) ;
 int FUNC_1 (struct in6_addr*,int *) ;
 int FUNC_2 (struct in6_addr*,int *) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 scalar_t__ FUNC_4 (struct in6_addr*) ;

int FUNC_5(struct mlx4_ib_dev *VAR_1, const struct ib_ah_attr *VAR_2,
   u8 *VAR_3, int *VAR_4, u8 VAR_5)
{
 struct in6_addr VAR_6;

 *VAR_4 = 0;

 FUNC_0(&VAR_6, VAR_2->grh.dgid.raw, sizeof VAR_6);
 if (FUNC_4(&VAR_6))
  FUNC_1(&VAR_6, VAR_3);
 else if (FUNC_3(&VAR_6)) {
  FUNC_2(&VAR_6, VAR_3);
  *VAR_4 = 1;
 } else
  return -VAR_0;

 return 0;
}
