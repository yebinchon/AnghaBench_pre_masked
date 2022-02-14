
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_5__ {float y; scalar_t__ entry_height; } ;
typedef TYPE_1__ materialui_node_t ;
struct TYPE_6__ {int landscape_entry_margin; int margin; float scroll_y; scalar_t__ nav_bar_layout_width; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef int file_list_t ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (int *,int,int,unsigned int,unsigned int,unsigned int,unsigned int,float*) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
      materialui_handle_t *VAR_0, video_frame_info_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3, unsigned VAR_4, int VAR_5,
      size_t VAR_6, float *VAR_7)
{

   if (FUNC_1(VAR_0, VAR_6))
   {
      file_list_t *VAR_8 = ((void*)0);
      materialui_node_t *VAR_9 = ((void*)0);
      int VAR_10 = VAR_5;
      int VAR_11 = 0;
      int VAR_12 = (int)VAR_2 - (int)VAR_0->nav_bar_layout_width;
      int VAR_13 = 0;



      if (VAR_0->landscape_entry_margin > 0)
      {
         VAR_10 += (int)VAR_0->landscape_entry_margin - (int)VAR_0->margin;
         VAR_12 -= (int)(2 * VAR_0->landscape_entry_margin) - (int)(2 * VAR_0->margin);
         VAR_12 = (VAR_12 < 0) ? 0 : VAR_12;
      }

      VAR_8 = FUNC_3(0);
      if (!VAR_8)
         return;

      VAR_9 = (materialui_node_t*)FUNC_0(VAR_8, VAR_6);
      if (!VAR_9)
         return;







      VAR_11 = (int)((float)VAR_4 - VAR_0->scroll_y + VAR_9->y);
      VAR_13 = (int)(VAR_9->entry_height + 1.5f);


      FUNC_2(
            VAR_1,
            VAR_10,
            VAR_11,
            (unsigned)VAR_12,
            (unsigned)VAR_13,
            VAR_2,
            VAR_3,
            VAR_7);
   }
}
