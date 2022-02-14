
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {int hover_color; int shadow_color; int normal_color; int border_light_color; int border_dark_color; int bg_light_color; int bg_dark_color; } ;
struct TYPE_13__ {int bg_thickness; int border_thickness; TYPE_1__ colors; scalar_t__ shadow_enable; scalar_t__ border_enable; } ;
typedef TYPE_2__ rgui_t ;
typedef int msg ;
struct TYPE_14__ {char* s; unsigned int len; char const* str; int selected; } ;
typedef TYPE_3__ menu_animation_ctx_ticker_t ;
struct TYPE_15__ {int selected; unsigned int field_width; char const* src_str; char* dst_str; int dst_str_len; unsigned int* x_offset; } ;
typedef TYPE_4__ menu_animation_ctx_ticker_smooth_t ;
typedef int input_label_buf ;
struct TYPE_16__ {int data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned int,int,int,char const*,int ,int ) ;
 int FUNC_1 (unsigned int,int,int,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (unsigned int*,unsigned int*,size_t*) ;
 char** FUNC_5 () ;
 int FUNC_6 () ;
 char* FUNC_7 () ;
 char* FUNC_8 () ;
 int FUNC_9 (int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int,int ) ;
 int FUNC_10 (int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int,int ,int ,int) ;
 TYPE_9__ VAR_11 ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (char*,int,char*,char const*,char const*) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 scalar_t__ FUNC_15 (char const*) ;
 unsigned int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(
      rgui_t *VAR_12,
      menu_animation_ctx_ticker_t *VAR_13, menu_animation_ctx_ticker_smooth_t *VAR_14,
      bool VAR_15)
{
   size_t VAR_16;
   unsigned VAR_17, VAR_18;
   size_t VAR_19;

   unsigned VAR_20;
   unsigned VAR_21;
   unsigned VAR_22, VAR_23;

   unsigned VAR_24, VAR_25;
   unsigned VAR_26, VAR_27;
   unsigned VAR_28, VAR_29;
   unsigned VAR_30, VAR_31;

   unsigned VAR_32, VAR_33;
   unsigned VAR_34, VAR_35;

   unsigned VAR_36, VAR_37;
   unsigned VAR_38, VAR_39;

   int VAR_40 = FUNC_6();
   char **VAR_41 = FUNC_5();
   const char *VAR_42 = FUNC_7();
   const char *VAR_43 = FUNC_8();


   if (!VAR_11.data || VAR_40 < 0 || VAR_40 >= 44 || !VAR_41[0])
      return;


   FUNC_4(&VAR_17, &VAR_18, &VAR_16);

   VAR_26 = 8;
   VAR_27 = 6;
   VAR_24 = VAR_2 + (VAR_26 * 2);
   VAR_25 = VAR_0 + (VAR_27 * 2);
   VAR_30 = 2;
   VAR_31 = 2;
   VAR_28 = VAR_24 - (VAR_30 * 2);
   VAR_29 = VAR_25 - (VAR_31 * 2);
   VAR_32 = VAR_24 * VAR_4;
   VAR_33 = VAR_25 * 4;
   VAR_34 = 10;
   VAR_35 = 10 + 15 + (2 * VAR_1);
   VAR_20 = (VAR_32 / VAR_3);
   VAR_21 = VAR_20 - 1;
   VAR_22 = 10 + (VAR_32 - (VAR_20 * VAR_3)) / 2;
   VAR_23 = 10;
   VAR_36 = VAR_32 + 20;
   VAR_37 = VAR_35 + VAR_33 + 10;
   VAR_38 = (VAR_17 - VAR_36) / 2;
   VAR_39 = (VAR_18 - VAR_37) / 2;


   if ((VAR_36 + 2 > VAR_17) || (VAR_37 + 2 > VAR_18))
   {



      char VAR_44[255];
      VAR_44[0] = '\0';

      FUNC_12(VAR_44, sizeof(VAR_44), "%s\n%s", VAR_43, VAR_42);
      FUNC_11(VAR_12, VAR_44);

      return;
   }


   FUNC_10(VAR_11.data, VAR_17, VAR_18,
         VAR_38 + 5, VAR_39 + 5, VAR_36 - 10, VAR_37 - 10,
         VAR_12->colors.bg_dark_color, VAR_12->colors.bg_light_color, VAR_12->bg_thickness);


   if (VAR_12->border_enable)
   {
      uint16_t VAR_45 = VAR_12->colors.border_dark_color;
      uint16_t VAR_46 = VAR_12->colors.border_light_color;
      bool VAR_47 = VAR_12->border_thickness;


      if (VAR_12->shadow_enable)
      {
         uint16_t VAR_48 = VAR_12->colors.shadow_color;


         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_38 + 5, VAR_39 + 5, VAR_36 - 10, 1, VAR_48);
         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_38 + VAR_36, VAR_39 + 1, 1, VAR_37, VAR_48);
         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_38 + 1, VAR_39 + VAR_37, VAR_36, 1, VAR_48);
         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_38 + 5, VAR_39 + 5, 1, VAR_37 - 10, VAR_48);

         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_38 + 5, VAR_39 + VAR_35 - 5, VAR_36 - 10, 1, VAR_48);
      }


      FUNC_10(VAR_11.data, VAR_17, VAR_18,
            VAR_38, VAR_39, VAR_36 - 5, 5,
            VAR_45, VAR_46, VAR_47);
      FUNC_10(VAR_11.data, VAR_17, VAR_18,
            VAR_38 + VAR_36 - 5, VAR_39, 5, VAR_37 - 5,
            VAR_45, VAR_46, VAR_47);
      FUNC_10(VAR_11.data, VAR_17, VAR_18,
            VAR_38 + 5, VAR_39 + VAR_37 - 5, VAR_36 - 5, 5,
            VAR_45, VAR_46, VAR_47);
      FUNC_10(VAR_11.data, VAR_17, VAR_18,
            VAR_38, VAR_39 + 5, 5, VAR_37 - 5,
            VAR_45, VAR_46, VAR_47);

      FUNC_10(VAR_11.data, VAR_17, VAR_18,
            VAR_38 + 5, VAR_39 + VAR_35 - 10, VAR_36 - 10, 5,
            VAR_45, VAR_46, VAR_47);
   }


   if (!FUNC_13(VAR_43))
   {
      char VAR_49[255];
      unsigned VAR_50;
      int VAR_51, VAR_52;
      unsigned VAR_53 = 0;

      VAR_49[0] = '\0';

      if (VAR_15)
      {
         VAR_14->selected = 1;
         VAR_14->field_width = VAR_20 * VAR_3;
         VAR_14->src_str = VAR_43;
         VAR_14->dst_str = VAR_49;
         VAR_14->dst_str_len = sizeof(VAR_49);
         VAR_14->x_offset = &VAR_53;

         FUNC_3(VAR_14);
      }
      else
      {
         VAR_13->s = VAR_49;
         VAR_13->len = VAR_20;
         VAR_13->str = VAR_43;
         VAR_13->selected = 1;

         FUNC_2(VAR_13);
      }

      VAR_50 = (unsigned)(FUNC_16(VAR_49) * VAR_3);
      VAR_51 = VAR_53 + VAR_38 + VAR_22 + ((VAR_20 * VAR_3) - VAR_50) / 2;
      VAR_52 = VAR_39 + VAR_23;

      FUNC_0(VAR_17, VAR_51, VAR_52, VAR_49,
            VAR_12->colors.normal_color, VAR_12->colors.shadow_color);
   }


   {
      unsigned VAR_54;
      int VAR_55, VAR_56;
      int VAR_57;
      unsigned VAR_58 = (unsigned)FUNC_15(VAR_42);

      if (VAR_58 > VAR_21)
      {
         VAR_54 = VAR_58 - VAR_21;
         VAR_58 = VAR_21;
      }
      else
         VAR_54 = 0;

      VAR_55 = VAR_38 + VAR_22;
      VAR_56 = VAR_39 + VAR_23 + VAR_1;

      if (!FUNC_13(VAR_42 + VAR_54))
         FUNC_0(VAR_17, VAR_55, VAR_56, VAR_42 + VAR_54,
               VAR_12->colors.hover_color, VAR_12->colors.shadow_color);


      VAR_57 = VAR_38 + VAR_22 + (VAR_58 * VAR_3);

      FUNC_1(VAR_17, VAR_57, VAR_56, VAR_10,
            VAR_12->colors.normal_color, VAR_12->colors.shadow_color);
   }


   for (VAR_19 = 0; VAR_19 < 44; VAR_19++)
   {
      unsigned VAR_59 = (unsigned)(VAR_19 / VAR_4);
      unsigned VAR_60 = (unsigned)(VAR_19 - (VAR_59 * VAR_4));

      int VAR_61 = VAR_38 + VAR_34 + VAR_26 + (VAR_60 * VAR_24);
      int VAR_62 = VAR_39 + VAR_35 + VAR_27 + (VAR_59 * VAR_25);

      const char *VAR_63 = VAR_41[VAR_19];
      if ( FUNC_14(VAR_63, "Bksp"))
         FUNC_1(VAR_17, VAR_61, VAR_62, VAR_5,
               VAR_12->colors.normal_color, VAR_12->colors.shadow_color);
      else if (FUNC_14(VAR_63, "Enter"))
         FUNC_1(VAR_17, VAR_61, VAR_62, VAR_6,
               VAR_12->colors.normal_color, VAR_12->colors.shadow_color);
      else if (FUNC_14(VAR_63, "Upper"))
         FUNC_1(VAR_17, VAR_61, VAR_62, VAR_9,
               VAR_12->colors.normal_color, VAR_12->colors.shadow_color);
      else if (FUNC_14(VAR_63, "Lower"))
         FUNC_1(VAR_17, VAR_61, VAR_62, VAR_8,
               VAR_12->colors.normal_color, VAR_12->colors.shadow_color);
      else if (FUNC_14(VAR_63, "Next"))
         FUNC_1(VAR_17, VAR_61, VAR_62, VAR_7,
               VAR_12->colors.normal_color, VAR_12->colors.shadow_color);

      else
         FUNC_0(VAR_17, VAR_61, VAR_62, VAR_63,
               VAR_12->colors.normal_color, VAR_12->colors.shadow_color);


      if (VAR_19 == VAR_40)
      {
         unsigned VAR_64 = VAR_38 + VAR_34 + VAR_30 + (VAR_60 * VAR_24);
         unsigned VAR_65 = VAR_39 + VAR_35 + VAR_31 + (VAR_59 * VAR_25);


         if (VAR_12->shadow_enable)
         {
            FUNC_9(VAR_11.data, VAR_17, VAR_18,
                  VAR_64 + 1, VAR_65 + 1, 1, VAR_29, VAR_12->colors.shadow_color);
            FUNC_9(VAR_11.data, VAR_17, VAR_18,
                  VAR_64 + 1, VAR_65 + 1, VAR_28, 1, VAR_12->colors.shadow_color);
            FUNC_9(VAR_11.data, VAR_17, VAR_18,
                  VAR_64 + VAR_28, VAR_65 + 1, 1, VAR_29, VAR_12->colors.shadow_color);
            FUNC_9(VAR_11.data, VAR_17, VAR_18,
                  VAR_64 + 1, VAR_65 + VAR_29, VAR_28, 1, VAR_12->colors.shadow_color);
         }


         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_64, VAR_65, 1, VAR_29, VAR_12->colors.hover_color);
         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_64, VAR_65, VAR_28, 1, VAR_12->colors.hover_color);
         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_64 + VAR_28 - 1, VAR_65, 1, VAR_29, VAR_12->colors.hover_color);
         FUNC_9(VAR_11.data, VAR_17, VAR_18,
               VAR_64, VAR_65 + VAR_29 - 1, VAR_28, 1, VAR_12->colors.hover_color);
      }
   }
}
