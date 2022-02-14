
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct au1k_private {int volatile** tx_ring; int volatile** rx_ring; } ;
typedef int ring_dest_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct au1k_private *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  VAR_1->rx_ring[VAR_4] = (volatile ring_dest_t *)
   (VAR_2 + sizeof(ring_dest_t)*VAR_4);
 }
 for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  VAR_1->tx_ring[VAR_4] = (volatile ring_dest_t *)
   (VAR_3 + sizeof(ring_dest_t)*VAR_4);
 }
}
