
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_qp {int qpn; } ;
struct TYPE_2__ {int rdb_shift; int qp_table; int eqp_table; int rdb_table; } ;
struct mthca_dev {TYPE_1__ qp_table; } ;


 int FUNC_0 (struct mthca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mthca_dev *VAR_0,
    struct mthca_qp *VAR_1)
{
 FUNC_0(VAR_0, VAR_0->qp_table.rdb_table,
   VAR_1->qpn << VAR_0->qp_table.rdb_shift);
 FUNC_0(VAR_0, VAR_0->qp_table.eqp_table, VAR_1->qpn);
 FUNC_0(VAR_0, VAR_0->qp_table.qp_table, VAR_1->qpn);
}
