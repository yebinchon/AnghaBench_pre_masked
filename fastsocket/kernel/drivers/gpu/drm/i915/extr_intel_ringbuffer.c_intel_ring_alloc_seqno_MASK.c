
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {scalar_t__ outstanding_lazy_request; int dev; } ;


 int FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(struct intel_ring_buffer *VAR_0)
{
 if (VAR_0->outstanding_lazy_request)
  return 0;

 return FUNC_0(VAR_0->dev, &VAR_0->outstanding_lazy_request);
}
