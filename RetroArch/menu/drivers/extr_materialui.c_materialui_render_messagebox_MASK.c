
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {unsigned int width; unsigned int height; } ;
typedef TYPE_5__ video_frame_info_t ;
struct string_list {int size; TYPE_1__* elems; } ;
struct TYPE_13__ {int list_text; int surface_background; } ;
struct TYPE_11__ {int font_height; int font; } ;
struct TYPE_12__ {TYPE_2__ list; } ;
struct TYPE_15__ {double margin; TYPE_4__ colors; TYPE_3__ font_data; } ;
typedef TYPE_6__ materialui_handle_t ;
struct TYPE_10__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,unsigned int,int) ;
 int FUNC_1 (TYPE_5__*,int,int,int,double,unsigned int,unsigned int,int ) ;
 int FUNC_2 (int ,char const*,int,int,unsigned int,unsigned int,int ,int ,float,int,int ,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct string_list*) ;
 struct string_list* FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(materialui_handle_t *VAR_1,
      video_frame_info_t *VAR_2, int VAR_3, const char *VAR_4)
{
   unsigned VAR_5;
   int VAR_6 = 0;
   int VAR_7 = 0;
   int VAR_8 = 0;
   size_t VAR_9 = 0;
   unsigned VAR_10 = VAR_2->width;
   unsigned VAR_11 = VAR_2->height;
   struct string_list *VAR_12 = ((void*)0);


   if (!VAR_1 || !VAR_1->font_data.list.font)
      goto end;


   VAR_12 = FUNC_5(VAR_4, "\n");

   if (!VAR_12 || VAR_12->elems == 0)
      goto end;


   VAR_6 = VAR_10 / 2;
   VAR_7 = (int)(VAR_3 - (VAR_12->size - 1) * (VAR_1->font_data.list.font_height / 2));





   for (VAR_5 = 0; VAR_5 < VAR_12->size; VAR_5++)
   {
      const char *VAR_13 = VAR_12->elems[VAR_5].data;

      if (!FUNC_3(VAR_13))
      {
         size_t VAR_14 = FUNC_7(VAR_13);

         if (VAR_14 > VAR_9)
         {
            VAR_9 = VAR_14;
            VAR_8 = FUNC_0(
                  VAR_1->font_data.list.font, VAR_13, (unsigned)FUNC_6(VAR_13), 1);
         }
      }
   }


   FUNC_1(
         VAR_2,
         VAR_6 - VAR_8 / 2.0 - VAR_1->margin * 2.0,
         VAR_7 - VAR_1->font_data.list.font_height / 2.0 - VAR_1->margin * 2.0,
         VAR_8 + VAR_1->margin * 4.0,
         VAR_1->font_data.list.font_height * VAR_12->size + VAR_1->margin * 4.0,
         VAR_10,
         VAR_11,
         VAR_1->colors.surface_background);


   for (VAR_5 = 0; VAR_5 < VAR_12->size; VAR_5++)
   {
      const char *VAR_15 = VAR_12->elems[VAR_5].data;

      if (!FUNC_3(VAR_15))
         FUNC_2(
               VAR_1->font_data.list.font, VAR_15,
               VAR_6 - VAR_8/2.0,
               VAR_7 + VAR_5 * VAR_1->font_data.list.font_height + VAR_1->font_data.list.font_height / 3,
               VAR_10, VAR_11, VAR_1->colors.list_text,
               VAR_0, 1.0f, 0, 0, 1);
   }

end:
   if (VAR_12)
      FUNC_4(VAR_12);
}
