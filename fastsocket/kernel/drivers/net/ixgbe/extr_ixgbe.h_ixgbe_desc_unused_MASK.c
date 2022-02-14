
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ixgbe_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; scalar_t__ count; } ;



__attribute__((used)) static inline u16 FUNC_0(struct ixgbe_ring *VAR_0)
{
 u16 VAR_1 = VAR_0->next_to_clean;
 u16 VAR_2 = VAR_0->next_to_use;

 return ((VAR_1 > VAR_2) ? 0 : VAR_0->count) + VAR_1 - VAR_2 - 1;
}
