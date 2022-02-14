
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ gfx_ctx_osmesa_data_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bool *VAR_1,
      bool *VAR_2,unsigned *VAR_3,
      unsigned *VAR_4, bool VAR_5)
{
   gfx_ctx_osmesa_data_t *VAR_6 = (gfx_ctx_osmesa_data_t*)VAR_0;

   *VAR_3 = VAR_6->width;
   *VAR_4 = VAR_6->height;
   *VAR_2 = 0;
   *VAR_1 = 0;
}
