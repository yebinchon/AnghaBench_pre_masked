
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float alpha; int shadow_offset; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_10__ {int xmb_shadows_enable; } ;
typedef TYPE_3__ video_frame_info_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int menu_font_color_blue; int menu_font_color_green; int menu_font_color_red; } ;
struct TYPE_11__ {TYPE_1__ uints; } ;
typedef TYPE_4__ settings_t ;
typedef int font_data_t ;
typedef enum text_alignment { ____Placeholder_text_alignment } text_alignment ;


 int FUNC_0 (int ,int ,int ,int) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int *,char const*,float,float,unsigned int,unsigned int,int ,int,float,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(
      video_frame_info_t *VAR_0,
      xmb_handle_t *VAR_1,
      const char *VAR_2, float VAR_3,
      float VAR_4, float VAR_5, float VAR_6,
      enum text_alignment VAR_7,
      unsigned VAR_8, unsigned VAR_9, font_data_t* VAR_10)
{
   uint32_t VAR_11;
   uint8_t VAR_12;
   settings_t *VAR_13;

   if (VAR_6 > VAR_1->alpha)
      VAR_6 = VAR_1->alpha;

   VAR_12 = 255 * VAR_6;


   if (VAR_12 == 0)
      return;

   VAR_13 = FUNC_1();
   VAR_11 = FUNC_0(
         VAR_13->uints.menu_font_color_red,
         VAR_13->uints.menu_font_color_green,
         VAR_13->uints.menu_font_color_blue, VAR_12);

   FUNC_2(VAR_10, VAR_2, VAR_3, VAR_4,
         VAR_8, VAR_9, VAR_11, VAR_7, VAR_5,
         VAR_0->xmb_shadows_enable,
         VAR_1->shadow_offset, 0);
}
