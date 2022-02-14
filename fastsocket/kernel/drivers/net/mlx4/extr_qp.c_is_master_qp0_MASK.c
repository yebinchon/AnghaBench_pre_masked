
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx4_qp {scalar_t__ qpn; } ;
struct TYPE_2__ {scalar_t__ base_proxy_sqpn; scalar_t__ base_sqpn; } ;
struct mlx4_dev {TYPE_1__ phys_caps; } ;


 int FUNC_0 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_0, struct mlx4_qp *VAR_1, int *VAR_2, int *VAR_3)
{


 u32 VAR_4 = VAR_0->phys_caps.base_proxy_sqpn + 8 * FUNC_0(VAR_0);
 *VAR_3 = VAR_1->qpn >= VAR_4 && VAR_1->qpn <= VAR_4 + 1;

 *VAR_2 = VAR_1->qpn >= VAR_0->phys_caps.base_sqpn &&
  VAR_1->qpn <= VAR_0->phys_caps.base_sqpn + 1;

 return *VAR_2 || *VAR_3;
}
