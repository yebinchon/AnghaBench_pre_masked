
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {unsigned int width; unsigned int height; } ;
typedef TYPE_6__ video_frame_info_t ;
typedef int uint32_t ;
struct string_list {int size; TYPE_2__* elems; } ;
struct TYPE_18__ {float messagebox_alpha; } ;
struct TYPE_16__ {int footer; } ;
struct TYPE_14__ {int message_background; } ;
struct TYPE_20__ {TYPE_5__ animations; TYPE_4__* theme; TYPE_3__ fonts; int * icons_textures; TYPE_1__ theme_dynamic; scalar_t__ has_all_assets; } ;
typedef TYPE_7__ ozone_handle_t ;
struct TYPE_17__ {int text_rgba; } ;
struct TYPE_15__ {char* data; } ;


 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,unsigned int,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int,int,int,int,int,float,unsigned int,unsigned int,int ,int,double,int ) ;
 int FUNC_4 (int ,float) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_6__*,TYPE_7__*,char const*,int,int,int ,unsigned int,unsigned int,int ,int ,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct string_list*) ;
 struct string_list* FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*) ;

void FUNC_12(ozone_handle_t *VAR_2,
      video_frame_info_t *VAR_3,
      const char *VAR_4)
{
   unsigned VAR_5, VAR_6;
   int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
   float VAR_11 = 0;
   unsigned VAR_12 = VAR_3->width;
   unsigned VAR_13 = VAR_3->height;
   struct string_list *VAR_14 = !FUNC_7(VAR_4)
      ? FUNC_9(VAR_4, "\n") : ((void*)0);

   if (!VAR_14 || !VAR_2 || !VAR_2->fonts.footer)
   {
      if (VAR_14)
         FUNC_8(VAR_14);
      return;
   }

   if (VAR_14->elems == 0)
      goto end;

   VAR_11 = 25;

   VAR_6 = VAR_13 / 2;
   if (FUNC_5())
      VAR_6 = VAR_13 / 4;

   VAR_7 = VAR_12 / 2;
   VAR_8 = VAR_6 - (VAR_14->size-1) * VAR_11 / 2;


   for (VAR_5 = 0; VAR_5 < VAR_14->size; VAR_5++)
   {
      const char *VAR_15 = VAR_14->elems[VAR_5].data;
      int VAR_16 = (int)FUNC_11(VAR_15);

      if (VAR_16 > VAR_9)
      {
         VAR_9 = VAR_16;
         VAR_10 = FUNC_1(
               VAR_2->fonts.footer, VAR_15, (unsigned)FUNC_10(VAR_15), 1);
      }
   }

   FUNC_4(VAR_2->theme_dynamic.message_background, VAR_2->animations.messagebox_alpha);

   FUNC_2(VAR_3);

   if (VAR_2->has_all_assets)
      FUNC_3(
         VAR_3,
         VAR_7 - VAR_10/2 - 48,
         VAR_8 + 16 - 48,
         256, 256,
         VAR_10 + 48 * 2,
         VAR_11 * VAR_14->size + 48 * 2,
         VAR_12, VAR_13,
         VAR_2->theme_dynamic.message_background,
         16, 1.0,
         VAR_2->icons_textures[VAR_0]
      );

   for (VAR_5 = 0; VAR_5 < VAR_14->size; VAR_5++)
   {
      const char *VAR_17 = VAR_14->elems[VAR_5].data;

      if (VAR_17)
         FUNC_6(VAR_3, VAR_2,
            VAR_17,
            VAR_7 - VAR_10/2.0,
            VAR_8 + (VAR_5+0.75) * VAR_11,
            VAR_1,
            VAR_12, VAR_13,
            VAR_2->fonts.footer,
            FUNC_0(VAR_2->theme->text_rgba, (uint32_t)(VAR_2->animations.messagebox_alpha*255.0f)),
            0
         );
   }

end:
   FUNC_8(VAR_14);
}
