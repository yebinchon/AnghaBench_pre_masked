
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int ring_free_dw; int count_dw; int ptr_mask; int wptr; int * ring; } ;



__attribute__((used)) static inline void FUNC_0(struct radeon_ring *VAR_0, uint32_t VAR_1)
{
 VAR_0->ring[VAR_0->wptr++] = VAR_1;
 VAR_0->wptr &= VAR_0->ptr_mask;
 VAR_0->count_dw--;
 VAR_0->ring_free_dw--;
}
