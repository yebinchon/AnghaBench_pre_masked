
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; } ;
struct efx_channel {unsigned int eventq_mask; TYPE_1__ eventq; } ;
typedef int efx_qword_t ;



__attribute__((used)) static inline efx_qword_t *FUNC_0(struct efx_channel *VAR_0,
         unsigned int VAR_1)
{
 return ((efx_qword_t *) (VAR_0->eventq.addr)) +
  (VAR_1 & VAR_0->eventq_mask);
}
