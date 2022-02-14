
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_ring_buffer {scalar_t__ outstanding_lazy_request; TYPE_1__* dev; } ;
struct TYPE_2__ {int struct_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_ring_buffer*,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct intel_ring_buffer *VAR_0, u32 VAR_1)
{
 int VAR_2;

 FUNC_0(!FUNC_2(&VAR_0->dev->struct_mutex));

 VAR_2 = 0;
 if (VAR_1 == VAR_0->outstanding_lazy_request)
  VAR_2 = FUNC_1(VAR_0, ((void*)0), ((void*)0));

 return VAR_2;
}
