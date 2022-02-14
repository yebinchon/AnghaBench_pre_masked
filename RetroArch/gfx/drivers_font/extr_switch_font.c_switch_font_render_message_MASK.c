
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_6__ {int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ switch_font_t ;
struct TYPE_5__ {float (* get_line_height ) (int ) ;} ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char) ;
 unsigned int FUNC_1 (char const*) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_2__*,char const*,unsigned int,float,unsigned int const,float,float,unsigned int) ;

__attribute__((used)) static void FUNC_4(
    video_frame_info_t *VAR_1,
    switch_font_t *VAR_2, const char *VAR_3, float VAR_4,
    const unsigned int VAR_5, float VAR_6, float VAR_7,
    unsigned VAR_8)
{
      int VAR_9 = 0;
      float VAR_10;

      if (!VAR_3 || !*VAR_3)
            return;


      if (!VAR_2->font_driver->get_line_height)
      {
            int VAR_11 = FUNC_1(VAR_3);
            if (VAR_11 <= VAR_0)
            {
                  FUNC_3(VAR_1, VAR_2, VAR_3, FUNC_1(VAR_3),
                                          VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
            }
            return;
      }
      VAR_10 = VAR_4 / VAR_2->font_driver->get_line_height(VAR_2->font_data);

      for (;;)
      {
            const char *VAR_12 = FUNC_0(VAR_3, '\n');


            if (VAR_12)
            {
                  unsigned VAR_13 = VAR_12 - VAR_3;
                  if (VAR_13 <= VAR_0)
                  {
                        FUNC_3(VAR_1, VAR_2, VAR_3, VAR_13,
                                                VAR_4, VAR_5, VAR_6, VAR_7 - (float)VAR_9 * VAR_10,
                                                VAR_8);
                  }
                  VAR_3 += VAR_13 + 1;
                  VAR_9++;
            }
            else
            {
                  unsigned VAR_14 = FUNC_1(VAR_3);
                  if (VAR_14 <= VAR_0)
                  {
                        FUNC_3(VAR_1, VAR_2, VAR_3, VAR_14,
                                                VAR_4, VAR_5, VAR_6, VAR_7 - (float)VAR_9 * VAR_10,
                                                VAR_8);
                  }
                  break;
            }
      }
}
