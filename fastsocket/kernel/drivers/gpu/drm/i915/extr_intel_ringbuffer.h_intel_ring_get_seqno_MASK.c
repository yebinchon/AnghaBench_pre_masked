
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_ring_buffer {scalar_t__ outstanding_lazy_request; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(struct intel_ring_buffer *VAR_0)
{
 FUNC_0(VAR_0->outstanding_lazy_request == 0);
 return VAR_0->outstanding_lazy_request;
}
