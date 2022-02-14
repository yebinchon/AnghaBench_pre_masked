
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_ring_buffer {scalar_t__ trace_irq_seqno; scalar_t__ (* irq_get ) (struct intel_ring_buffer*) ;} ;


 scalar_t__ FUNC_0 (struct intel_ring_buffer*) ;

__attribute__((used)) static inline void FUNC_1(struct intel_ring_buffer *VAR_0, u32 VAR_1)
{
 if (VAR_0->trace_irq_seqno == 0 && VAR_0->irq_get(VAR_0))
  VAR_0->trace_irq_seqno = VAR_1;
}
