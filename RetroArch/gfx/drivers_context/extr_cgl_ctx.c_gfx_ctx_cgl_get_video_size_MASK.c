
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ gfx_ctx_cgl_data_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned *VAR_1, unsigned *VAR_2)
{
   gfx_ctx_cgl_data_t *VAR_3 = (gfx_ctx_cgl_data_t*)VAR_0;
   *VAR_1 = VAR_3->width;
   *VAR_2 = VAR_3->height;
}
