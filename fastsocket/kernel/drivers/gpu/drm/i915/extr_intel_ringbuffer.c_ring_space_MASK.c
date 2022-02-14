
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int head; int tail; scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct intel_ring_buffer *VAR_2)
{
 int VAR_3 = (VAR_2->head & VAR_0) - (VAR_2->tail + VAR_1);
 if (VAR_3 < 0)
  VAR_3 += VAR_2->size;
 return VAR_3;
}
