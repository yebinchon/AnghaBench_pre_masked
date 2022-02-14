
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int id; } ;



__attribute__((used)) static inline unsigned
FUNC_0(struct intel_ring_buffer *VAR_0)
{
 return 1 << VAR_0->id;
}
