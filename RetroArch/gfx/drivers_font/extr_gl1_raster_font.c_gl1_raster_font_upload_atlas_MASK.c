
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t tex_width; int tex_height; TYPE_1__* atlas; } ;
typedef TYPE_2__ gl1_raster_t ;
struct TYPE_4__ {unsigned int height; unsigned int width; int * buffer; } ;
typedef void* GLint ;
typedef void* GLenum ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,void*,unsigned int,int ,int ,void*,int ,int *) ;
 int FUNC_3 (int *,int const*,unsigned int) ;

__attribute__((used)) static bool FUNC_4(gl1_raster_t *VAR_3)
{
   unsigned VAR_4, VAR_5;
   GLint VAR_6 = VAR_0;
   GLenum VAR_7 = VAR_0;
   size_t VAR_8 = 2;
   uint8_t *VAR_9 = ((void*)0);

   VAR_9 = (uint8_t*)FUNC_0(VAR_3->tex_height, VAR_3->tex_width * VAR_8);

   switch (VAR_8)
   {
      case 1:
         for (VAR_4 = 0; VAR_4 < VAR_3->atlas->height; ++VAR_4)
         {
            const uint8_t *VAR_10 = &VAR_3->atlas->buffer[VAR_4 * VAR_3->atlas->width];
            uint8_t *VAR_11 = &VAR_9[VAR_4 * VAR_3->tex_width * VAR_8];

            FUNC_3(VAR_11, VAR_10, VAR_3->atlas->width);
         }
         break;
      case 2:
         for (VAR_4 = 0; VAR_4 < VAR_3->atlas->height; ++VAR_4)
         {
            const uint8_t *VAR_12 = &VAR_3->atlas->buffer[VAR_4 * VAR_3->atlas->width];
            uint8_t *VAR_13 = &VAR_9[VAR_4 * VAR_3->tex_width * VAR_8];

            for (VAR_5 = 0; VAR_5 < VAR_3->atlas->width; ++VAR_5)
            {
               *VAR_13++ = 0xff;
               *VAR_13++ = *VAR_12++;
            }
         }
         break;
   }

   FUNC_2(VAR_1, 0, VAR_6, VAR_3->tex_width, VAR_3->tex_height,
         0, VAR_7, VAR_2, VAR_9);

   FUNC_1(VAR_9);

   return 1;
}
