
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {scalar_t__ sbq; scalar_t__ lbq; } ;
struct ql_adapter {int rx_ring_count; struct rx_ring* rx_ring; } ;


 int FUNC_0 (struct ql_adapter*,struct rx_ring*) ;
 int FUNC_1 (struct ql_adapter*,struct rx_ring*) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_0)
{
 int VAR_1;
 struct rx_ring *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_ring_count; VAR_1++) {
  VAR_2 = &VAR_0->rx_ring[VAR_1];
  if (VAR_2->lbq)
   FUNC_0(VAR_0, VAR_2);
  if (VAR_2->sbq)
   FUNC_1(VAR_0, VAR_2);
 }
}
