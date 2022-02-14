
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_6__ {scalar_t__* list; } ;
struct TYPE_5__ {float* list_switch_on_background; float* list_switch_off_background; float* list_switch_on; float* list_switch_off; } ;
struct TYPE_7__ {TYPE_2__ textures; scalar_t__ icon_size; scalar_t__ nav_bar_layout_width; scalar_t__ landscape_entry_margin; scalar_t__ margin; TYPE_1__ colors; } ;
typedef TYPE_3__ materialui_handle_t ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int,float,unsigned int,unsigned int,int ,int,float*) ;

__attribute__((used)) static void FUNC_1(
      materialui_handle_t *VAR_3,
      video_frame_info_t *VAR_4,
      float VAR_5,
      unsigned VAR_6, unsigned VAR_7, int VAR_8,
      bool VAR_9)
{
   unsigned VAR_10 = VAR_9 ?
         VAR_2 : VAR_1;
   float *VAR_11 = VAR_9 ?
         VAR_3->colors.list_switch_on_background : VAR_3->colors.list_switch_off_background;
   float *VAR_12 = VAR_9 ?
         VAR_3->colors.list_switch_on : VAR_3->colors.list_switch_off;
   int VAR_13 =
         VAR_8 + (int)VAR_6 - (int)VAR_3->margin - (int)VAR_3->landscape_entry_margin -
               (int)VAR_3->nav_bar_layout_width - (int)VAR_3->icon_size;


   if (VAR_3->textures.list[VAR_0])
      FUNC_0(VAR_4,
            VAR_3->icon_size,
            VAR_3->textures.list[VAR_0],
            VAR_13,
            VAR_5,
            VAR_6,
            VAR_7,
            0,
            1,
            VAR_11);


   if (VAR_3->textures.list[VAR_10])
      FUNC_0(VAR_4,
            VAR_3->icon_size,
            VAR_3->textures.list[VAR_10],
            VAR_13,
            VAR_5,
            VAR_6,
            VAR_7,
            0,
            1,
            VAR_12);
}
