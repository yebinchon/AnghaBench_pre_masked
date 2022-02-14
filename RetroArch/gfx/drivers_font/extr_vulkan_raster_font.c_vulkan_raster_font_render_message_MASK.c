
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* vk; int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_4__ vulkan_raster_t ;
struct TYPE_8__ {float height; } ;
struct TYPE_9__ {TYPE_2__ vp; } ;
struct TYPE_7__ {scalar_t__ (* get_line_height ) (int ) ;} ;


 char* FUNC_0 (char const*,char) ;
 unsigned int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,char const*,unsigned int,float,float const*,float,float,unsigned int) ;

__attribute__((used)) static void FUNC_4(
      vulkan_raster_t *VAR_0, const char *VAR_1, float VAR_2,
      const float VAR_3[4], float VAR_4, float VAR_5,
      unsigned VAR_6)
{
   int VAR_7 = 0;
   float VAR_8;

   if (!VAR_1 || !*VAR_1 || !VAR_0->vk)
      return;


   if (!VAR_0->font_driver->get_line_height)
   {
      if (VAR_0->vk)
         FUNC_3(VAR_0, VAR_1, FUNC_1(VAR_1),
               VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
      return;
   }

   VAR_8 = (float) VAR_0->font_driver->get_line_height(VAR_0->font_data) *
                     VAR_2 / VAR_0->vk->vp.height;

   for (;;)
   {
      const char *VAR_9 = FUNC_0(VAR_1, '\n');


      if (VAR_9)
      {
         unsigned VAR_10 = VAR_9 - VAR_1;
         if (VAR_0->vk)
            FUNC_3(VAR_0, VAR_1, VAR_10,
                  VAR_2, VAR_3, VAR_4, VAR_5 - (float)VAR_7 * VAR_8,
                  VAR_6);
         VAR_1 += VAR_10 + 1;
         VAR_7++;
      }
      else
      {
         unsigned VAR_11 = FUNC_1(VAR_1);
         if (VAR_0->vk)
            FUNC_3(VAR_0, VAR_1, VAR_11,
                  VAR_2, VAR_3, VAR_4, VAR_5 - (float)VAR_7 * VAR_8,
                  VAR_6);
         break;
      }
   }
}
