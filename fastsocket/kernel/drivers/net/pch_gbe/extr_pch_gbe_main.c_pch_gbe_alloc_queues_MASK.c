
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {void* tx_ring; void* rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct pch_gbe_adapter *VAR_2)
{
 VAR_2->tx_ring = FUNC_1(sizeof(*VAR_2->tx_ring), VAR_1);
 if (!VAR_2->tx_ring)
  return -VAR_0;

 VAR_2->rx_ring = FUNC_1(sizeof(*VAR_2->rx_ring), VAR_1);
 if (!VAR_2->rx_ring) {
  FUNC_0(VAR_2->tx_ring);
  return -VAR_0;
 }
 return 0;
}
