
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int tx_ring_count; int rx_ring_count; int * rx_ring; int * tx_ring; } ;


 int FUNC_0 (struct ql_adapter*,int *) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*,int *) ;

__attribute__((used)) static void FUNC_3(struct ql_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->tx_ring_count; VAR_1++)
  FUNC_2(VAR_0, &VAR_0->tx_ring[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_0->rx_ring_count; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->rx_ring[VAR_1]);
 FUNC_1(VAR_0);
}
