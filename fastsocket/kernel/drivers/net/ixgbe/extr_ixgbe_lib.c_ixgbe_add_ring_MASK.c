
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring_container {int count; struct ixgbe_ring* ring; } ;
struct ixgbe_ring {struct ixgbe_ring* next; } ;



__attribute__((used)) static void FUNC_0(struct ixgbe_ring *VAR_0,
      struct ixgbe_ring_container *VAR_1)
{
 VAR_0->next = VAR_1->ring;
 VAR_1->ring = VAR_0;
 VAR_1->count++;
}
