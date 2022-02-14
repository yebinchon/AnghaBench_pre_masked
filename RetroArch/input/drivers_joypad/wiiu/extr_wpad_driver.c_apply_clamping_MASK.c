
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct video_viewport {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ height; } ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_1__ VPADTouchData ;



__attribute__((used)) static void FUNC_0(VPADTouchData *VAR_0, struct video_viewport *VAR_1, bool *VAR_2)
{

   if (VAR_0->x < VAR_1->x)
   {
      VAR_0->x = VAR_1->x;
      *VAR_2 = 1;
   }
   else if (VAR_0->x > (VAR_1->x + VAR_1->width))
   {
      VAR_0->x = VAR_1->x + VAR_1->width;
      *VAR_2 = 1;
   }


   if (VAR_0->y < VAR_1->y)
   {
      VAR_0->y = VAR_1->y;
      *VAR_2 = 1;
   }
   else if (VAR_0->y > (VAR_1->y + VAR_1->height))
   {
      VAR_0->y = VAR_1->y + VAR_1->height;
      *VAR_2 = 1;
   }
}
