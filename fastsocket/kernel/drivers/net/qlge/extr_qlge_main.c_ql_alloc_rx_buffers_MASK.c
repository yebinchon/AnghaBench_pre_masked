
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_ring {scalar_t__ type; } ;
struct ql_adapter {int rx_ring_count; struct rx_ring* rx_ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ql_adapter*,struct rx_ring*) ;

__attribute__((used)) static void FUNC_1(struct ql_adapter *VAR_1)
{
 struct rx_ring *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->rx_ring_count; VAR_3++) {
  VAR_2 = &VAR_1->rx_ring[VAR_3];
  if (VAR_2->type != VAR_0)
   FUNC_0(VAR_1, VAR_2);
 }
}
