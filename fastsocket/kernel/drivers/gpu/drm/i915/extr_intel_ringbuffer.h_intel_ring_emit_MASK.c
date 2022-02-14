
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {scalar_t__ tail; scalar_t__ virtual_start; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct intel_ring_buffer *VAR_0,
       u32 VAR_1)
{
 FUNC_0(VAR_1, VAR_0->virtual_start + VAR_0->tail);
 VAR_0->tail += 4;
}
