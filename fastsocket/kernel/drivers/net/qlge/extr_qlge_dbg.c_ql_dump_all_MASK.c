
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wqicb {int dummy; } ;
struct ql_adapter {int tx_ring_count; int rx_ring_count; int * rx_ring; int * tx_ring; } ;
struct cqicb {int dummy; } ;


 int FUNC_0 (struct cqicb*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wqicb*) ;

void FUNC_6(struct ql_adapter *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_0->tx_ring_count; VAR_1++) {
  FUNC_4(&VAR_0->tx_ring[VAR_1]);
  FUNC_5((struct wqicb *)&VAR_0->tx_ring[VAR_1]);
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->rx_ring_count; VAR_1++) {
  FUNC_3(&VAR_0->rx_ring[VAR_1]);
  FUNC_0((struct cqicb *)&VAR_0->rx_ring[VAR_1]);
 }
}
