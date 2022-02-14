
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int height; unsigned int width; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_6__ {int (* scissor_begin ) (TYPE_1__*,int,int,unsigned int,unsigned int) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,unsigned int,unsigned int) ;

void FUNC_1(video_frame_info_t *VAR_1, int VAR_2, int VAR_3, unsigned VAR_4, unsigned VAR_5)
{
   if (VAR_0 && VAR_0->scissor_begin)
   {
      if (VAR_3 < 0)
      {
         if (VAR_5 < (unsigned)(-VAR_3))
            VAR_5 = 0;
         else
            VAR_5 += VAR_3;
         VAR_3 = 0;
      }
      if (VAR_2 < 0)
      {
         if (VAR_4 < (unsigned)(-VAR_2))
            VAR_4 = 0;
         else
            VAR_4 += VAR_2;
         VAR_2 = 0;
      }
      if (VAR_3 >= (int)VAR_1->height)
      {
         VAR_5 = 0;
         VAR_3 = 0;
      }
      if (VAR_2 >= (int)VAR_1->width)
      {
         VAR_4 = 0;
         VAR_2 = 0;
      }
      if ((VAR_3 + VAR_5) > VAR_1->height)
         VAR_5 = VAR_1->height - VAR_3;
      if ((VAR_2 + VAR_4) > VAR_1->width)
         VAR_4 = VAR_1->width - VAR_2;

      VAR_0->scissor_begin(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
   }
}
