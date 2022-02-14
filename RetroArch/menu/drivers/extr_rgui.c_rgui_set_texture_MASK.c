
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int uint16_t ;
struct video_viewport {unsigned int width; unsigned int height; } ;
struct TYPE_6__ {unsigned int menu_rgui_internal_upscale_level; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {int * data; } ;
struct TYPE_8__ {unsigned int width; unsigned int height; int * data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_6 (struct video_viewport*) ;
 int FUNC_7 (int *,int,unsigned int,unsigned int,float) ;

__attribute__((used)) static void FUNC_8(void)
{
   size_t VAR_4;
   unsigned VAR_5, VAR_6;
   settings_t *VAR_7 = FUNC_1();

   if (!FUNC_4())
      return;

   FUNC_3(&VAR_5, &VAR_6,
         &VAR_4);

   FUNC_5();

   if (VAR_7->uints.menu_rgui_internal_upscale_level == VAR_1)
   {
      FUNC_7(VAR_2.data,
         0, VAR_5, VAR_6, 1.0f);
   }
   else
   {

      struct video_viewport VAR_8;
      FUNC_6(&VAR_8);



      if ((VAR_8.width <= VAR_5) && (VAR_8.height <= VAR_6))
      {
         FUNC_7(VAR_2.data,
            0, VAR_5, VAR_6, 1.0f);
      }
      else
      {
         unsigned VAR_9;
         unsigned VAR_10;
         uint32_t VAR_11, VAR_12;
         unsigned VAR_13, VAR_14;
         unsigned VAR_15, VAR_16;


         if (VAR_7->uints.menu_rgui_internal_upscale_level == VAR_0)
         {
            VAR_9 = ((VAR_8.width / VAR_5) + 1) * VAR_5;
            VAR_10 = ((VAR_8.height / VAR_6) + 1) * VAR_6;
         }
         else
         {
            VAR_9 = VAR_7->uints.menu_rgui_internal_upscale_level * VAR_5;
            VAR_10 = VAR_7->uints.menu_rgui_internal_upscale_level * VAR_6;
         }


         if ((VAR_3.width != VAR_9) || (VAR_3.height != VAR_10) || !VAR_3.data)
         {
            VAR_3.width = VAR_9;
            VAR_3.height = VAR_10;

            if (VAR_3.data)
            {
               FUNC_2(VAR_3.data);
               VAR_3.data = ((void*)0);
            }

            VAR_3.data = (uint16_t*)FUNC_0(VAR_9 * VAR_10, sizeof(uint16_t));
            if (!VAR_3.data)
            {



               VAR_7->uints.menu_rgui_internal_upscale_level = VAR_1;
               FUNC_7(VAR_2.data,
                  0, VAR_5, VAR_6, 1.0f);
               return;
            }
         }




         VAR_11 = ((VAR_5 << 16) / VAR_9);
         VAR_12 = ((VAR_6 << 16) / VAR_10);

         for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
         {
            VAR_14 = (VAR_16 * VAR_12) >> 16;
            for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
            {
               VAR_13 = (VAR_15 * VAR_11) >> 16;
               VAR_3.data[(VAR_16 * VAR_9) + VAR_15] = VAR_2.data[(VAR_14 * VAR_5) + VAR_13];
            }
         }


         FUNC_7(VAR_3.data,
            0, VAR_9, VAR_10, 1.0f);
      }
   }
}
