
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int space; } ;
typedef TYPE_1__ drm_r128_ring_buffer_t ;
struct TYPE_6__ {int usec_timeout; TYPE_1__ ring; } ;
typedef TYPE_2__ drm_r128_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(drm_r128_private_t *VAR_1, int VAR_2)
{
 drm_r128_ring_buffer_t *VAR_3 = &VAR_1->ring;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->usec_timeout; VAR_4++) {
  FUNC_2(VAR_1);
  if (VAR_3->space >= VAR_2)
   return 0;
  FUNC_1(1);
 }


 FUNC_0("failed!\n");
 return -VAR_0;
}
