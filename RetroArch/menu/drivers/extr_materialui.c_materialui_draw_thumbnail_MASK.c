
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct TYPE_12__ {scalar_t__ menu_materialui_thumbnail_background_enable; } ;
struct TYPE_14__ {TYPE_2__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_15__ {scalar_t__ status; int alpha; } ;
typedef TYPE_5__ menu_thumbnail_t ;
struct TYPE_13__ {int thumbnail_background; int missing_thumbnail_icon; } ;
struct TYPE_11__ {int * list; } ;
struct TYPE_16__ {int transition_alpha; scalar_t__ thumbnail_height_max; scalar_t__ thumbnail_width_max; TYPE_3__ colors; TYPE_1__ textures; scalar_t__ icon_size; } ;
typedef TYPE_6__ materialui_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int *,unsigned int,int ,float,float,unsigned int,unsigned int,float,float,int ) ;
 int FUNC_2 (int *,int,int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,TYPE_5__*,float,float,scalar_t__,scalar_t__,int,float) ;

__attribute__((used)) static void FUNC_5(
      materialui_handle_t *VAR_3,
      video_frame_info_t *VAR_4,
      menu_thumbnail_t *VAR_5,
      float VAR_6, float VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      float VAR_10)
{
   float VAR_11;
   float VAR_12;
   float VAR_13;
   float VAR_14;


   if (VAR_10 <= 0)
      return;



   VAR_13 = (float)VAR_3->thumbnail_width_max * VAR_10;
   VAR_14 = (float)VAR_3->thumbnail_height_max * VAR_10;
   VAR_11 = VAR_6 - (VAR_13 - (float)VAR_3->thumbnail_width_max) / 2.0f;
   VAR_12 = VAR_7 - (VAR_14 - (float)VAR_3->thumbnail_height_max) / 2.0f;


   if (VAR_5->status == VAR_1)
   {
      float VAR_15;


      if (VAR_10 >= 1.0f)
         VAR_15 = (float)VAR_3->icon_size;
      else
         VAR_15 = (float)VAR_3->icon_size * VAR_10;


      FUNC_3(
            VAR_3->colors.thumbnail_background,
            VAR_3->transition_alpha);

      FUNC_2(
            VAR_4,
            VAR_11,
            VAR_12,
            (unsigned)VAR_13,
            (unsigned)VAR_14,
            VAR_8,
            VAR_9,
            VAR_3->colors.thumbnail_background);


      FUNC_1(VAR_4,
            (unsigned)VAR_15,
            VAR_3->textures.list[VAR_2],
            VAR_11 + (VAR_13 - VAR_15) / 2.0f,
            VAR_12 + (VAR_14 - VAR_15) / 2.0f,
            VAR_8,
            VAR_9,
            0.0f,
            1.0f,
            VAR_3->colors.missing_thumbnail_icon);
   }




   else if (VAR_5->status == VAR_0)
   {
      settings_t *VAR_16 = FUNC_0();

      if (!VAR_16)
         return;


      if (VAR_16->bools.menu_materialui_thumbnail_background_enable)
      {
         FUNC_3(
               VAR_3->colors.thumbnail_background,
               VAR_3->transition_alpha * VAR_5->alpha);


         FUNC_2(
               VAR_4,
               (int)VAR_11,
               (int)VAR_12,
               (unsigned)(VAR_13 + 0.5f),
               (unsigned)(VAR_14 + 1.5f),
               VAR_8,
               VAR_9,
               VAR_3->colors.thumbnail_background);
      }


      FUNC_4(
            VAR_4, VAR_5,
            VAR_6, VAR_7, VAR_3->thumbnail_width_max, VAR_3->thumbnail_height_max,
            VAR_3->transition_alpha, VAR_10);
   }
}
