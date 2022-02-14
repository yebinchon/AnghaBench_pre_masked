
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct string_list {size_t size; TYPE_1__* elems; } ;
struct TYPE_8__ {int shadow_color; int normal_color; int bg_light_color; int bg_dark_color; int border_light_color; int border_dark_color; } ;
struct TYPE_9__ {int border_thickness; int bg_thickness; TYPE_2__ colors; scalar_t__ shadow_enable; } ;
typedef TYPE_3__ rgui_t ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {unsigned int width; } ;
struct TYPE_7__ {char* data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int,int,char const*,int ,int ) ;
 int FUNC_2 (unsigned int*,unsigned int*,size_t*) ;
 int FUNC_3 (scalar_t__,unsigned int,unsigned int,int,int,unsigned int,int,int ) ;
 int FUNC_4 (scalar_t__,unsigned int,unsigned int,int,int,int,unsigned int,int ,int ,int) ;
 TYPE_6__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 (struct string_list*) ;
 struct string_list* FUNC_6 (char const*,char*) ;
 unsigned int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(rgui_t *VAR_4, const char *VAR_5)
{
   int VAR_6, VAR_7;
   size_t VAR_8, VAR_9;
   unsigned VAR_10, VAR_11;
   unsigned VAR_12, VAR_13, VAR_14;
   struct string_list *VAR_15 = ((void*)0);

   if (!VAR_5 || !*VAR_5)
      return;

   VAR_15 = FUNC_6(VAR_5, "\n");
   if (!VAR_15)
      return;
   if (VAR_15->elems == 0)
      goto end;

   VAR_12 = 0;
   VAR_13 = 0;

   FUNC_2(&VAR_10, &VAR_11,
         &VAR_9);

   for (VAR_8 = 0; VAR_8 < VAR_15->size; VAR_8++)
   {
      unsigned VAR_16;
      char *VAR_17 = VAR_15->elems[VAR_8].data;
      unsigned VAR_18 = (unsigned)FUNC_7(VAR_17);

      if (VAR_18 > VAR_3.width)
      {
         VAR_17[VAR_3.width - 2] = '.';
         VAR_17[VAR_3.width - 1] = '.';
         VAR_17[VAR_3.width - 0] = '.';
         VAR_17[VAR_3.width + 1] = '\0';
         VAR_18 = VAR_3.width;
      }

      VAR_16 = VAR_18 * VAR_1 - 1 + 6 + 10;
      VAR_12 = FUNC_0(VAR_12, VAR_16);
      VAR_13 = FUNC_0(VAR_13, VAR_18);
   }

   VAR_14 = (unsigned)(VAR_0 * VAR_15->size + 6 + 10);
   VAR_6 = (VAR_10 - VAR_12) / 2;
   VAR_7 = (VAR_11 - VAR_14) / 2;

   if (VAR_2.data)
   {
      uint16_t VAR_19 = VAR_4->colors.border_dark_color;
      uint16_t VAR_20 = VAR_4->colors.border_light_color;
      bool VAR_21 = VAR_4->border_thickness;

      FUNC_4(VAR_2.data, VAR_10, VAR_11,
            VAR_6 + 5, VAR_7 + 5, VAR_12 - 10, VAR_14 - 10,
            VAR_4->colors.bg_dark_color, VAR_4->colors.bg_light_color, VAR_4->bg_thickness);






      if (VAR_4->shadow_enable)
      {
         uint16_t VAR_22 = VAR_4->colors.shadow_color;

         FUNC_3(VAR_2.data, VAR_10, VAR_11,
               VAR_6 + 5, VAR_7 + 5, 1, VAR_14 - 5, VAR_22);
         FUNC_3(VAR_2.data, VAR_10, VAR_11,
               VAR_6 + 5, VAR_7 + 5, VAR_12 - 5, 1, VAR_22);
         FUNC_3(VAR_2.data, VAR_10, VAR_11,
               VAR_6 + VAR_12, VAR_7 + 1, 1, VAR_14, VAR_22);
         FUNC_3(VAR_2.data, VAR_10, VAR_11,
               VAR_6 + 1, VAR_7 + VAR_14, VAR_12, 1, VAR_22);
      }


      FUNC_4(VAR_2.data, VAR_10, VAR_11,
            VAR_6, VAR_7, VAR_12 - 5, 5,
            VAR_19, VAR_20, VAR_21);
      FUNC_4(VAR_2.data, VAR_10, VAR_11,
            VAR_6 + VAR_12 - 5, VAR_7, 5, VAR_14 - 5,
            VAR_19, VAR_20, VAR_21);
      FUNC_4(VAR_2.data, VAR_10, VAR_11,
            VAR_6 + 5, VAR_7 + VAR_14 - 5, VAR_12 - 5, 5,
            VAR_19, VAR_20, VAR_21);
      FUNC_4(VAR_2.data, VAR_10, VAR_11,
            VAR_6, VAR_7 + 5, 5, VAR_14 - 5,
            VAR_19, VAR_20, VAR_21);
   }

   for (VAR_8 = 0; VAR_8 < VAR_15->size; VAR_8++)
   {
      const char *VAR_23 = VAR_15->elems[VAR_8].data;
      int VAR_24 = (int)(VAR_1 * (VAR_13 - FUNC_7(VAR_23)) / 2);
      int VAR_25 = (int)(VAR_0 * VAR_8);

      if (VAR_2.data)
         FUNC_1(VAR_10, VAR_6 + 8 + VAR_24, VAR_7 + 8 + VAR_25, VAR_23,
               VAR_4->colors.normal_color, VAR_4->colors.shadow_color);
   }

end:
   FUNC_5(VAR_15);
}
