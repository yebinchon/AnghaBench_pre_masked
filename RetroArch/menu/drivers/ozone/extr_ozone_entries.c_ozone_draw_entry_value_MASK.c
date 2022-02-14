
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int height; int width; } ;
typedef TYPE_4__ video_frame_info_t ;
typedef int uint32_t ;
struct TYPE_16__ {int entries_label; } ;
struct TYPE_15__ {int entries_checkmark; } ;
struct TYPE_19__ {TYPE_3__* theme; TYPE_2__ fonts; TYPE_1__ theme_dynamic; } ;
typedef TYPE_5__ ozone_handle_t ;
struct TYPE_20__ {char* value; scalar_t__ checked; } ;
typedef TYPE_6__ menu_entry_t ;
struct TYPE_17__ {int text_sublabel_rgba; int text_selected_rgba; int * textures; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int,int,int ,unsigned int,unsigned int,int ,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,char*,unsigned int,unsigned int,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(ozone_handle_t *VAR_6,
      video_frame_info_t *VAR_7,
      char *VAR_8,
      unsigned VAR_9, unsigned VAR_10,
      uint32_t VAR_11,
      menu_entry_t *VAR_12)
{
   bool VAR_13 = 1;
   bool VAR_14 = 0;

   if (!VAR_12->checked && FUNC_6(VAR_8))
      return;


   if (VAR_12->checked)
   {
      FUNC_1(VAR_7);
      FUNC_4(VAR_7, 30, 30, VAR_6->theme->textures[VAR_4], VAR_9 - 20, VAR_10 - 22, VAR_7->width, VAR_7->height, 0, 1, VAR_6->theme_dynamic.entries_checkmark);
      FUNC_2(VAR_7);
      return;
   }


   if (FUNC_7(VAR_8, FUNC_3(VAR_0)) ||
         (FUNC_7(VAR_8, FUNC_3(VAR_2))))
   {
      VAR_13 = 0;
      VAR_14 = 0;
   }
   else if (FUNC_7(VAR_8, FUNC_3(VAR_1)) ||
         (FUNC_7(VAR_8, FUNC_3(VAR_3))))
   {
      VAR_13 = 1;
      VAR_14 = 0;
   }
   else
   {
      if (!FUNC_6(VAR_12->value))
      {
         if (
               FUNC_7(VAR_12->value, "...") ||
               FUNC_7(VAR_12->value, "(PRESET)") ||
               FUNC_7(VAR_12->value, "(SHADER)") ||
               FUNC_7(VAR_12->value, "(COMP)") ||
               FUNC_7(VAR_12->value, "(CORE)") ||
               FUNC_7(VAR_12->value, "(MOVIE)") ||
               FUNC_7(VAR_12->value, "(MUSIC)") ||
               FUNC_7(VAR_12->value, "(DIR)") ||
               FUNC_7(VAR_12->value, "(RDB)") ||
               FUNC_7(VAR_12->value, "(CURSOR)")||
               FUNC_7(VAR_12->value, "(CFILE)") ||
               FUNC_7(VAR_12->value, "(FILE)") ||
               FUNC_7(VAR_12->value, "(IMAGE)")
            )
         {
            return;
         }
         else
            VAR_14 = 1;
      }
      else
         VAR_14 = 1;
   }

   if (VAR_14)
   {
      FUNC_5(VAR_7, VAR_6, VAR_8, VAR_9, VAR_10, VAR_5, VAR_7->width, VAR_7->height, VAR_6->fonts.entries_label, FUNC_0(VAR_6->theme->text_selected_rgba, VAR_11), 0);
   }
   else
   {
      FUNC_5(VAR_7, VAR_6, (VAR_13 ? FUNC_3(VAR_3) : FUNC_3(VAR_2)),
               VAR_9, VAR_10, VAR_5, VAR_7->width, VAR_7->height, VAR_6->fonts.entries_label,
               FUNC_0((VAR_13 ? VAR_6->theme->text_selected_rgba : VAR_6->theme->text_sublabel_rgba), VAR_11), 0);
   }
}
