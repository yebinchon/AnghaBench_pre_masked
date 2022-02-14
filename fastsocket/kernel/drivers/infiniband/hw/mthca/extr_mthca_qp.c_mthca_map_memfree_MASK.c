
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_qp {int qpn; } ;
struct TYPE_2__ {int rdb_shift; int qp_table; int eqp_table; int rdb_table; } ;
struct mthca_dev {TYPE_1__ qp_table; } ;


 scalar_t__ FUNC_0 (struct mthca_dev*) ;
 int FUNC_1 (struct mthca_dev*,int ,int) ;
 int FUNC_2 (struct mthca_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mthca_dev *VAR_0,
        struct mthca_qp *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_0)) {
  VAR_2 = FUNC_1(VAR_0, VAR_0->qp_table.qp_table, VAR_1->qpn);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_0, VAR_0->qp_table.eqp_table, VAR_1->qpn);
  if (VAR_2)
   goto err_qpc;

  VAR_2 = FUNC_1(VAR_0, VAR_0->qp_table.rdb_table,
          VAR_1->qpn << VAR_0->qp_table.rdb_shift);
  if (VAR_2)
   goto err_eqpc;

 }

 return 0;

err_eqpc:
 FUNC_2(VAR_0, VAR_0->qp_table.eqp_table, VAR_1->qpn);

err_qpc:
 FUNC_2(VAR_0, VAR_0->qp_table.qp_table, VAR_1->qpn);

 return VAR_2;
}
