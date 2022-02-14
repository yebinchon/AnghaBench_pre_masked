
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunqe {int tx_old; int tx_new; TYPE_1__* qe_block; } ;
struct qe_txd {int tx_flags; } ;
struct TYPE_2__ {struct qe_txd* qe_txd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sunqe *VAR_1)
{
 struct qe_txd *VAR_2 = &VAR_1->qe_block->qe_txd[0];
 int VAR_3 = VAR_1->tx_old;

 while (VAR_3 != VAR_1->tx_new) {
  u32 VAR_4 = VAR_2[VAR_3].tx_flags;

  if (VAR_4 & VAR_0)
   break;
  VAR_3 = FUNC_0(VAR_3);
 }
 VAR_1->tx_old = VAR_3;
}
