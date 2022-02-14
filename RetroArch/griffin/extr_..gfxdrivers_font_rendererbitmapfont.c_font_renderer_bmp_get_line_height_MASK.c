
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scale_factor; } ;
typedef TYPE_1__ bm_renderer_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void* VAR_1)
{
    bm_renderer_t *VAR_2 = (bm_renderer_t*)VAR_1;

    if (!VAR_2)
      return VAR_0;

    return VAR_0 * VAR_2->scale_factor;
}
