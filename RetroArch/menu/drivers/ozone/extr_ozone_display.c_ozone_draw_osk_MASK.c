
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int height; unsigned int width; } ;
typedef TYPE_4__ video_frame_info_t ;
struct string_list {unsigned int size; TYPE_1__* elems; } ;
typedef scalar_t__ retro_time_t ;
struct TYPE_14__ {int entries_label; } ;
struct TYPE_17__ {int osk_cursor; unsigned int entry_font_glyph_width; TYPE_3__* theme; TYPE_2__ fonts; } ;
typedef TYPE_5__ ozone_handle_t ;
struct TYPE_18__ {unsigned int text_sublabel_rgba; } ;
struct TYPE_15__ {int text_rgba; int * textures; int entries_border; } ;
struct TYPE_13__ {char* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 unsigned int FUNC_1 (int ,char const*,unsigned int,int) ;
 int FUNC_2 (int ,int ,TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,unsigned int,unsigned int,int,int,unsigned int,int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,char const*,unsigned int,scalar_t__,int ,unsigned int,int,int ,unsigned int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct string_list*) ;
 struct string_list* FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char*,char const*,unsigned int,int,int ) ;

void FUNC_12(ozone_handle_t *VAR_7,
      video_frame_info_t *VAR_8,
      const char *VAR_9, const char *VAR_10)
{
   unsigned VAR_11;
   const char *VAR_12;
   char VAR_13[2048];
   unsigned VAR_14;
   struct string_list *VAR_15;

   unsigned VAR_16 = 75;
   unsigned VAR_17 = 10;
   unsigned VAR_18 = VAR_8->height/2;
   unsigned VAR_19 = 0;
   bool VAR_20 = FUNC_7(VAR_10);

   retro_time_t VAR_21 = FUNC_0();
   static retro_time_t VAR_22 = 0;

   if (VAR_21 - VAR_22 >= VAR_1)
   {
      VAR_7->osk_cursor = !VAR_7->osk_cursor;
      VAR_22 = VAR_21;
   }



   FUNC_3(VAR_8, VAR_16, VAR_16, VAR_8->width - VAR_16*2, 1, VAR_8->width, VAR_8->height, VAR_7->theme->entries_border);


   FUNC_3(VAR_8, VAR_16, VAR_18 - VAR_16, VAR_8->width - VAR_16*2, 1, VAR_8->width, VAR_8->height, VAR_7->theme->entries_border);


   FUNC_3(VAR_8, VAR_16, VAR_16, 1, VAR_18 - VAR_16*2, VAR_8->width, VAR_8->height, VAR_7->theme->entries_border);


   FUNC_3(VAR_8, VAR_8->width - VAR_16, VAR_16, 1, VAR_18 - VAR_16*2, VAR_8->width, VAR_8->height, VAR_7->theme->entries_border);



   FUNC_3(VAR_8, VAR_16 + 1, VAR_16 + 1, VAR_8->width - VAR_16*2 - 2, VAR_18 - VAR_16*2 - 2, VAR_8->width, VAR_8->height, VAR_4);


   if (!VAR_20)
   {
      VAR_12 = VAR_10;
      VAR_14 = 0xffffffff;
   }
   else
   {
      VAR_12 = VAR_9;
      VAR_14 = VAR_6.text_sublabel_rgba;
   }

   FUNC_11(VAR_13, VAR_12, (VAR_8->width - VAR_16*2 - VAR_17*2) / VAR_7->entry_font_glyph_width, 1, 0);

   VAR_15 = FUNC_9(VAR_13, "\n");

   for (VAR_11 = 0; VAR_11 < VAR_15->size; VAR_11++)
   {
      const char *VAR_23 = VAR_15->elems[VAR_11].data;

      FUNC_6(VAR_8, VAR_7, VAR_23, VAR_16 + VAR_17 * 2, VAR_16 + VAR_17 + VAR_0 + VAR_19, VAR_3, VAR_8->width, VAR_8->height, VAR_7->fonts.entries_label, VAR_14, 0);


      if (VAR_11 == VAR_15->size - 1)
      {
         if (VAR_7->osk_cursor)
         {
            unsigned VAR_24 = VAR_20 ? 0 : FUNC_1(VAR_7->fonts.entries_label, VAR_23, (unsigned)FUNC_10(VAR_23), 1);
            FUNC_3(VAR_8, VAR_16 + VAR_17*2 + VAR_24, VAR_16 + VAR_17 + VAR_19 + 3, 1, 25, VAR_8->width, VAR_8->height, VAR_5);
         }
      }
      else
      {
         VAR_19 += 25;
      }
   }


   FUNC_2(
            VAR_7->theme->textures[VAR_2],
            VAR_7->fonts.entries_label,
            VAR_8,
            FUNC_4(),
            FUNC_5(),
            VAR_7->theme->text_rgba);

   FUNC_8(VAR_15);
}
