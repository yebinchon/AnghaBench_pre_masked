
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int num_sge; unsigned int wr_id; } ;
struct ipoib_dev_priv {TYPE_2__ tx_wr; TYPE_1__* tx_sge; } ;
struct ipoib_cm_tx {int qp; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_3__ {int length; int addr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,struct ib_send_wr**) ;

__attribute__((used)) static inline int FUNC_1(struct ipoib_dev_priv *VAR_1,
       struct ipoib_cm_tx *VAR_2,
       unsigned int VAR_3,
       u64 VAR_4, int VAR_5)
{
 struct ib_send_wr *VAR_6;

 VAR_1->tx_sge[0].addr = VAR_4;
 VAR_1->tx_sge[0].length = VAR_5;

 VAR_1->tx_wr.num_sge = 1;
 VAR_1->tx_wr.wr_id = VAR_3 | VAR_0;

 return FUNC_0(VAR_2->qp, &VAR_1->tx_wr, &VAR_6);
}
