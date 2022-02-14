
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ wiiu_font_t ;
typedef int video_frame_info_t ;
struct TYPE_5__ {float (* get_line_height ) (int ) ;} ;


 char* FUNC_0 (char const*,char) ;
 unsigned int FUNC_1 (char const*) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,char const*,unsigned int,float,unsigned int const,float,float,unsigned int) ;

__attribute__((used)) static void FUNC_4(
      video_frame_info_t *VAR_0,
      wiiu_font_t* VAR_1, const char* VAR_2, float VAR_3,
      const unsigned int VAR_4, float VAR_5, float VAR_6,
      unsigned VAR_7)
{
   int VAR_8 = 0;
   float VAR_9;

   if (!VAR_2 || !*VAR_2)
      return;


   if (!VAR_1->font_driver->get_line_height)
   {
      FUNC_3(VAR_0, VAR_1, VAR_2, FUNC_1(VAR_2),
                           VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
      return;
   }

   VAR_9 = VAR_3 / VAR_1->font_driver->get_line_height(VAR_1->font_data);

   for (;;)
   {
      const char* VAR_10 = FUNC_0(VAR_2, '\n');


      if (VAR_10)
      {
         unsigned VAR_11 = VAR_10 - VAR_2;
         FUNC_3(VAR_0, VAR_1, VAR_2, VAR_11,
                              VAR_3, VAR_4, VAR_5, VAR_6 - (float)VAR_8 * VAR_9,
                              VAR_7);
         VAR_2 += VAR_11 + 1;
         VAR_8++;
      }
      else
      {
         unsigned VAR_12 = FUNC_1(VAR_2);
         FUNC_3(VAR_0, VAR_1, VAR_2, VAR_12,
                              VAR_3, VAR_4, VAR_5, VAR_6 - (float)VAR_8 * VAR_9,
                              VAR_7);
         break;
      }
   }
}
