
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; unsigned int height; int active; int dragged; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {int dip_base_unit_size; float content_height; TYPE_1__ scrollbar; scalar_t__ nav_bar_layout_height; } ;
typedef TYPE_2__ materialui_handle_t ;



__attribute__((used)) static void FUNC_0(
      materialui_handle_t* VAR_0,
      unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   int VAR_4 = (int)VAR_2 - (int)VAR_3 - (int)VAR_0->nav_bar_layout_height;
   int VAR_5;


   VAR_0->scrollbar.width = VAR_0->dip_base_unit_size / 36;
   VAR_0->scrollbar.height = 0;
   VAR_0->scrollbar.x = 0;
   VAR_0->scrollbar.y = 0;
   VAR_0->scrollbar.active = 0;
   VAR_0->scrollbar.dragged = 0;




   if ((VAR_4 <= 0) ||
       (VAR_0->content_height <= (float)VAR_4))
      return;


   VAR_0->scrollbar.active = 1;


   VAR_5 = (int)((float)(VAR_4 * VAR_4) / VAR_0->content_height);


   VAR_5 -= (int)VAR_0->scrollbar.width * 2;



   if (VAR_5 < (int)VAR_0->scrollbar.width)
      VAR_5 = (int)VAR_0->scrollbar.width;

   VAR_0->scrollbar.height = (unsigned)VAR_5;



}
