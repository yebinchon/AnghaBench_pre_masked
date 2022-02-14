
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ qpn; } ;
struct mlx4_ib_qp {TYPE_2__ mqp; } ;
struct mlx4_ib_dev {TYPE_4__* dev; } ;
struct TYPE_8__ {int num_ports; scalar_t__* qp0_proxy; scalar_t__* qp1_proxy; } ;
struct TYPE_6__ {scalar_t__ base_sqpn; } ;
struct TYPE_9__ {TYPE_3__ caps; TYPE_1__ phys_caps; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_0, struct mlx4_ib_qp *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;

 VAR_3 = ((FUNC_0(VAR_0->dev) || !FUNC_1(VAR_0->dev)) &&
      VAR_1->mqp.qpn >= VAR_0->dev->phys_caps.base_sqpn &&
      VAR_1->mqp.qpn <= VAR_0->dev->phys_caps.base_sqpn + 3);
 if (VAR_3)
  return 1;

 if (FUNC_1(VAR_0->dev)) {
  for (VAR_4 = 0; VAR_4 < VAR_0->dev->caps.num_ports; VAR_4++) {
   if (VAR_1->mqp.qpn == VAR_0->dev->caps.qp0_proxy[VAR_4] ||
       VAR_1->mqp.qpn == VAR_0->dev->caps.qp1_proxy[VAR_4]) {
    VAR_2 = 1;
    break;
   }
  }
 }
 return VAR_2;
}
