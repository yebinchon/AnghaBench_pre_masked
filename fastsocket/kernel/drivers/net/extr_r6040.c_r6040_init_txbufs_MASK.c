
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r6040_private {int tx_ring_dma; int tx_ring; int tx_insert_ptr; int tx_remove_ptr; int tx_free_desc; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct r6040_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct r6040_private *VAR_2 = FUNC_0(VAR_1);

 VAR_2->tx_free_desc = VAR_0;

 VAR_2->tx_remove_ptr = VAR_2->tx_insert_ptr = VAR_2->tx_ring;
 FUNC_1(VAR_2->tx_ring, VAR_2->tx_ring_dma, VAR_0);
}
