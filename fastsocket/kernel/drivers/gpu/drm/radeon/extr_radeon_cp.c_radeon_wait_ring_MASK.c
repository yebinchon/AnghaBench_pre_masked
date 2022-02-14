
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int space; int tail; scalar_t__ size; } ;
typedef TYPE_2__ drm_radeon_ring_buffer_t ;
struct TYPE_7__ {int boxes; } ;
struct TYPE_9__ {int usec_timeout; TYPE_1__ stats; TYPE_2__ ring; } ;
typedef TYPE_3__ drm_radeon_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(drm_radeon_private_t * VAR_2, int VAR_3)
{
 drm_radeon_ring_buffer_t *VAR_4 = &VAR_2->ring;
 int VAR_5;
 u32 VAR_6 = FUNC_2(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2->usec_timeout; VAR_5++) {
  u32 VAR_7 = FUNC_2(VAR_2);

  VAR_4->space = (VAR_7 - VAR_4->tail) * sizeof(u32);
  if (VAR_4->space <= 0)
   VAR_4->space += VAR_4->size;
  if (VAR_4->space > VAR_3)
   return 0;

  VAR_2->stats.boxes |= VAR_1;

  if (VAR_7 != VAR_6)
   VAR_5 = 0;
  VAR_6 = VAR_7;

  FUNC_1(1);
 }






 return -VAR_0;
}
