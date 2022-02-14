
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int space; int tail; scalar_t__ size; } ;
typedef TYPE_1__ drm_r128_ring_buffer_t ;
struct TYPE_6__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_r128_private_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static __inline__ void FUNC_1(drm_r128_private_t *VAR_0)
{
 drm_r128_ring_buffer_t *VAR_1 = &VAR_0->ring;
 VAR_1->space = (FUNC_0(VAR_0) - VAR_1->tail) * sizeof(u32);
 if (VAR_1->space <= 0)
  VAR_1->space += VAR_1->size;
}
