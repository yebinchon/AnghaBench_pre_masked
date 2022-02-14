
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_tcp_ecn_perf_stat {int total_rxmitpkts; int total_txpkts; int rxmit_percent; int total_oopkts; int total_rxpkts; int oo_percent; int total_reorderpkts; int reorder_percent; } ;



__attribute__((used)) static void
FUNC_0(struct if_tcp_ecn_perf_stat *VAR_0)
{

 if (VAR_0->total_rxmitpkts > 0 && VAR_0->total_txpkts > 0) {

  VAR_0->rxmit_percent =
      ((VAR_0->total_rxmitpkts << 10) * 100) / VAR_0->total_txpkts;
 } else {
  VAR_0->rxmit_percent = 0;
 }


 if (VAR_0->total_oopkts > 0 && VAR_0->total_rxpkts > 0) {

  VAR_0->oo_percent =
      ((VAR_0->total_oopkts << 10) * 100) / VAR_0->total_rxpkts;
 } else {
  VAR_0->oo_percent = 0;
 }


 if (VAR_0->total_reorderpkts > 0 &&
     (VAR_0->total_txpkts + VAR_0->total_rxpkts) > 0) {

  VAR_0->reorder_percent =
      ((VAR_0->total_reorderpkts << 10) * 100) /
      (VAR_0->total_txpkts + VAR_0->total_rxpkts);
 } else {
  VAR_0->reorder_percent = 0;
 }
}
