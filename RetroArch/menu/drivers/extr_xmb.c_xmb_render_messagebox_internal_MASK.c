
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int * list; } ;
struct TYPE_15__ {int margins_dialog; TYPE_8__* font; TYPE_2__ textures; scalar_t__ margins_slice; } ;
typedef TYPE_3__ xmb_handle_t ;
struct TYPE_16__ {unsigned int width; unsigned int height; } ;
typedef TYPE_4__ video_frame_info_t ;
struct string_list {int size; TYPE_1__* elems; } ;
struct TYPE_17__ {double size; } ;
struct TYPE_13__ {char* data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_8__*,char const*,unsigned int,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_8__*,TYPE_4__*,int ,int ,int) ;
 int FUNC_3 (TYPE_8__*,char const*,int,int,unsigned int,unsigned int,int,int ,float,int,int ,int) ;
 int FUNC_4 (TYPE_4__*,int,scalar_t__,int,int,int,float,unsigned int,unsigned int,int *,scalar_t__,double,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct string_list*) ;
 struct string_list* FUNC_10 (char const*,char*) ;
 scalar_t__ FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(
      video_frame_info_t *VAR_3,
      xmb_handle_t *VAR_4, const char *VAR_5)
{
   unsigned VAR_6, VAR_7;
   int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;
   float VAR_12 = 0;
   unsigned VAR_13 = VAR_3->width;
   unsigned VAR_14 = VAR_3->height;
   struct string_list *VAR_15 = !FUNC_8(VAR_5)
      ? FUNC_10(VAR_5, "\n") : ((void*)0);

   if (!VAR_15 || !VAR_4 || !VAR_4->font)
   {
      if (VAR_15)
         FUNC_9(VAR_15);
      return;
   }

   if (VAR_15->elems == 0)
      goto end;

   VAR_12 = VAR_4->font->size * 1.2;

   VAR_7 = VAR_14 / 2;
   if (FUNC_7())
      VAR_7 = VAR_14 / 4;

   VAR_8 = VAR_13 / 2;
   VAR_9 = VAR_7 - (VAR_15->size-1) * VAR_12 / 2;


   for (VAR_6 = 0; VAR_6 < VAR_15->size; VAR_6++)
   {
      const char *VAR_16 = VAR_15->elems[VAR_6].data;
      int VAR_17 = (int)FUNC_12(VAR_16);

      if (VAR_17 > VAR_10)
      {
         VAR_10 = VAR_17;
         VAR_11 = FUNC_0(
               VAR_4->font, VAR_16, (unsigned)FUNC_11(VAR_16), 1);
      }
   }

   FUNC_1(VAR_3);

   FUNC_4(
         VAR_3,
         VAR_8 - VAR_11/2 - VAR_4->margins_dialog,
         VAR_9 + VAR_4->margins_slice - VAR_4->margins_dialog,
         256, 256,
         VAR_11 + VAR_4->margins_dialog * 2,
         VAR_12 * VAR_15->size + VAR_4->margins_dialog * 2,
         VAR_13, VAR_14,
         ((void*)0),
         VAR_4->margins_slice, 1.0,
         VAR_4->textures.list[VAR_1]);

   for (VAR_6 = 0; VAR_6 < VAR_15->size; VAR_6++)
   {
      const char *VAR_18 = VAR_15->elems[VAR_6].data;

      if (VAR_18)
         FUNC_3(VAR_4->font, VAR_18,
               VAR_8 - VAR_11/2.0,
               VAR_9 + (VAR_6+0.75) * VAR_12,
               VAR_13, VAR_14, 0x444444ff, VAR_0, 1.0f, 0, 0, 0);
   }

   if (FUNC_7())
      FUNC_2(
            VAR_4->textures.list[VAR_2],
            VAR_4->font,
            VAR_3,
            FUNC_5(),
            FUNC_6(),
            0xffffffff);

end:
   FUNC_9(VAR_15);
}
