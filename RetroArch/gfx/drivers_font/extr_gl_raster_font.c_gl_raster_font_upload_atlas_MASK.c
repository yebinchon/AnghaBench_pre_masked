
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct retro_hw_render_callback {scalar_t__ context_type; int version_major; } ;
struct TYPE_7__ {size_t tex_width; int tex_height; TYPE_2__* atlas; TYPE_1__* gl; } ;
typedef TYPE_3__ gl_raster_t ;
struct TYPE_6__ {unsigned int height; unsigned int width; int * buffer; } ;
struct TYPE_5__ {scalar_t__ core_context_in_use; } ;
typedef void* GLint ;
typedef void* GLenum ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,void*,unsigned int,int ,int ,void*,int ,int *) ;
 int FUNC_3 (int ,int ,void**) ;
 int FUNC_4 (int *,int const*,unsigned int) ;
 struct retro_hw_render_callback* FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(gl_raster_t *VAR_8)
{
   unsigned VAR_9, VAR_10;
   GLint VAR_11 = VAR_0;
   GLenum VAR_12 = VAR_0;
   size_t VAR_13 = 2;
   uint8_t *VAR_14 = ((void*)0);
   VAR_14 = (uint8_t*)FUNC_0(VAR_8->tex_height, VAR_8->tex_width * VAR_13);

   switch (VAR_13)
   {
      case 1:
         for (VAR_9 = 0; VAR_9 < VAR_8->atlas->height; ++VAR_9)
         {
            const uint8_t *VAR_15 = &VAR_8->atlas->buffer[VAR_9 * VAR_8->atlas->width];
            uint8_t *VAR_16 = &VAR_14[VAR_9 * VAR_8->tex_width * VAR_13];

            FUNC_4(VAR_16, VAR_15, VAR_8->atlas->width);
         }
         break;
      case 2:
         for (VAR_9 = 0; VAR_9 < VAR_8->atlas->height; ++VAR_9)
         {
            const uint8_t *VAR_17 = &VAR_8->atlas->buffer[VAR_9 * VAR_8->atlas->width];
            uint8_t *VAR_18 = &VAR_14[VAR_9 * VAR_8->tex_width * VAR_13];

            for (VAR_10 = 0; VAR_10 < VAR_8->atlas->width; ++VAR_10)
            {
               *VAR_18++ = 0xff;
               *VAR_18++ = *VAR_17++;
            }
         }
         break;
   }

   FUNC_2(VAR_4, 0, VAR_11, VAR_8->tex_width, VAR_8->tex_height,
         0, VAR_12, VAR_6, VAR_14);

   FUNC_1(VAR_14);

   return 1;
}
