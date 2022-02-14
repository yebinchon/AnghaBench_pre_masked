
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {unsigned int width; unsigned int height; } ;
typedef TYPE_3__ video_frame_info_t ;
struct string_list {int size; TYPE_2__* elems; } ;
struct TYPE_14__ {int * list; } ;
struct TYPE_17__ {int margins_dialog; TYPE_10__* font; TYPE_1__ textures; scalar_t__ margins_slice; } ;
typedef TYPE_4__ stripes_handle_t ;
struct TYPE_15__ {char* data; } ;
struct TYPE_13__ {double size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_10__*,char const*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_10__*,char const*,int,int,unsigned int,unsigned int,int,int ,float,int,int ,int) ;
 int FUNC_3 (TYPE_3__*,int,scalar_t__,int,int,int,float,unsigned int,unsigned int,int *,scalar_t__,double,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct string_list*) ;
 struct string_list* FUNC_9 (char const*,char*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*,int ,int ) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(
      video_frame_info_t *VAR_2,
      stripes_handle_t *VAR_3, const char *VAR_4)
{
   unsigned VAR_5, VAR_6;
   int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
   float VAR_11 = 0;
   unsigned VAR_12 = VAR_2->width;
   unsigned VAR_13 = VAR_2->height;
   struct string_list *VAR_14 = !FUNC_7(VAR_4)
      ? FUNC_9(VAR_4, "\n") : ((void*)0);

   if (!VAR_14 || !VAR_3 || !VAR_3->font)
   {
      if (VAR_14)
         FUNC_8(VAR_14);
      return;
   }

   if (VAR_14->elems == 0)
      goto end;

   VAR_11 = VAR_3->font->size * 1.2;

   VAR_6 = VAR_13 / 2;
   if (FUNC_6())
      VAR_6 = VAR_13 / 4;

   VAR_7 = VAR_12 / 2;
   VAR_8 = VAR_6 - (VAR_14->size-1) * VAR_11 / 2;


   for (VAR_5 = 0; VAR_5 < VAR_14->size; VAR_5++)
   {
      const char *VAR_15 = VAR_14->elems[VAR_5].data;
      int VAR_16 = (int)FUNC_12(VAR_15);

      if (VAR_16 > VAR_9)
      {
         VAR_9 = VAR_16;
         VAR_10 = FUNC_0(
               VAR_3->font, VAR_15, FUNC_11(VAR_15), 1);
      }
   }

   FUNC_1(VAR_2);

   FUNC_3(
         VAR_2,
         VAR_7 - VAR_10/2 - VAR_3->margins_dialog,
         VAR_8 + VAR_3->margins_slice - VAR_3->margins_dialog,
         256, 256,
         VAR_10 + VAR_3->margins_dialog * 2,
         VAR_11 * VAR_14->size + VAR_3->margins_dialog * 2,
         VAR_12, VAR_13,
         ((void*)0),
         VAR_3->margins_slice, 1.0,
         VAR_3->textures.list[VAR_0]);

   for (VAR_5 = 0; VAR_5 < VAR_14->size; VAR_5++)
   {
      const char *VAR_17 = VAR_14->elems[VAR_5].data;

      if (VAR_17)
         FUNC_2(VAR_3->font, VAR_17,
               VAR_7 - VAR_10/2.0,
               VAR_8 + (VAR_5+0.75) * VAR_11,
               VAR_12, VAR_13, 0x444444ff, VAR_1, 1.0f, 0, 0, 0);
   }

   if (FUNC_6())
      FUNC_10(VAR_3,
            VAR_2,
            FUNC_4(),
            FUNC_5());

end:
   FUNC_8(VAR_14);
}
