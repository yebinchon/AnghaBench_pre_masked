
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_qp {scalar_t__ qpn; } ;
struct TYPE_2__ {scalar_t__ sqp_start; } ;
struct mthca_dev {TYPE_1__ qp_table; } ;



__attribute__((used)) static int FUNC_0(struct mthca_dev *VAR_0, struct mthca_qp *VAR_1)
{
 return VAR_1->qpn >= VAR_0->qp_table.sqp_start &&
  VAR_1->qpn <= VAR_0->qp_table.sqp_start + 3;
}
