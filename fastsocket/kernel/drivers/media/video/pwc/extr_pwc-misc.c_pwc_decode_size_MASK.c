
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; } ;
struct TYPE_4__ {int x; int y; } ;
struct pwc_device {scalar_t__ pixfmt; int image_mask; TYPE_2__ view_max; TYPE_1__ abs_max; } ;
struct TYPE_6__ {int x; int y; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;

int FUNC_1(struct pwc_device *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;






 if (VAR_3->pixfmt != VAR_1)
 {
  if (VAR_4 > VAR_3->abs_max.x || VAR_5 > VAR_3->abs_max.y)
  {
   FUNC_0("VIDEO_PALETTE_RAW: going beyond abs_max.\n");
   return -1;
  }
 }
 else
 {
  if (VAR_4 > VAR_3->view_max.x || VAR_5 > VAR_3->view_max.y)
  {
   FUNC_0("VIDEO_PALETTE_not RAW: going beyond view_max.\n");
   return -1;
  }
 }




 VAR_7 = -1;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->image_mask & (1 << VAR_6)) {
   if (VAR_2[VAR_6].x <= VAR_4 && VAR_2[VAR_6].y <= VAR_5)
    VAR_7 = VAR_6;
  }
 }
 return VAR_7;
}
