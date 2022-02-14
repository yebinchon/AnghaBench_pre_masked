
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmb_path ;
typedef int theme_path ;
struct TYPE_6__ {int video_font_size; } ;
struct TYPE_5__ {char* directory_assets; char* path_font; } ;
struct TYPE_7__ {TYPE_2__ floats; TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
typedef int ozone_path ;
typedef int monochrome_png_path ;
typedef int menu_widgets_path ;
typedef int font_path ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (char*,char*,char*,int) ;
 void* VAR_6 ;
 int FUNC_2 (void*,int) ;
 float FUNC_3 (void*,char*,int,int) ;
 void* VAR_7 ;
 int VAR_8 ;
 float VAR_9 ;
 int VAR_10 ;
 void* FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*,char*,scalar_t__*,int ,int *,int *) ;
 char** VAR_11 ;
 scalar_t__* VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 float VAR_17 ;
 scalar_t__ VAR_18 ;
 float VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 float VAR_22 ;
 float VAR_23 ;
 float VAR_24 ;
 float VAR_25 ;
 float VAR_26 ;
 float VAR_27 ;
 float VAR_28 ;
 float VAR_29 ;
 float VAR_30 ;
 float VAR_31 ;
 float VAR_32 ;
 float VAR_33 ;
 int VAR_34 ;
 float VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

void FUNC_6(bool VAR_38,
      unsigned VAR_39, unsigned VAR_40)
{
   int VAR_41;
   char VAR_42[VAR_2];
   char VAR_43[VAR_2];
   char VAR_44[VAR_2];
   char VAR_45[VAR_2];
   char VAR_46[VAR_2];
   char VAR_47[VAR_2];
   settings_t *VAR_48 = FUNC_0();


   FUNC_1(
      VAR_44,
      VAR_48->paths.directory_assets,
      "menu_widgets",
      sizeof(VAR_44)
   );

   FUNC_1(
      VAR_42,
      VAR_48->paths.directory_assets,
      "xmb",
      sizeof(VAR_42)
   );


   FUNC_1(
      VAR_45,
      VAR_42,
      "monochrome",
      sizeof(VAR_45)
   );

   FUNC_1(
      VAR_43,
      VAR_45,
      "png",
      sizeof(VAR_43)
   );



   for (VAR_41 = 0; VAR_41 < VAR_1; VAR_41++)
   {
      FUNC_5(VAR_11[VAR_41], VAR_43, &VAR_12[VAR_41], VAR_4, ((void*)0), ((void*)0));
   }


   FUNC_5("msg_queue_icon.png", VAR_44, &VAR_18, VAR_3, ((void*)0), ((void*)0));
   FUNC_5("msg_queue_icon_outline.png", VAR_44, &VAR_20, VAR_3, ((void*)0), ((void*)0));
   FUNC_5("msg_queue_icon_rect.png", VAR_44, &VAR_21, VAR_5, ((void*)0), ((void*)0));

   VAR_16 = VAR_18 && VAR_20 && VAR_21;


      FUNC_1(
      VAR_46,
      VAR_48->paths.directory_assets,
      "ozone",
      sizeof(VAR_46)
   );


   if (VAR_48->paths.path_font[0] == '\0')
   {
      FUNC_1(VAR_47, VAR_46, "regular.ttf", sizeof(VAR_47));
      VAR_7 = FUNC_4(VAR_47, VAR_48->floats.video_font_size, VAR_38);

      FUNC_1(VAR_47, VAR_46, "bold.ttf", sizeof(VAR_47));
      VAR_6 = FUNC_4(VAR_47, VAR_48->floats.video_font_size, VAR_38);
   }
   else
   {
      VAR_7 = FUNC_4(VAR_48->paths.path_font, VAR_48->floats.video_font_size, VAR_38);
      VAR_6 = FUNC_4(VAR_48->paths.path_font, VAR_48->floats.video_font_size, VAR_38);
   }


   VAR_37 = VAR_48->floats.video_font_size * 2/3;
   VAR_36 = VAR_48->floats.video_font_size + VAR_37;
   VAR_9 = FUNC_3(VAR_7, "a", 1, 1);
   VAR_10 = FUNC_2(VAR_7, 1);

   VAR_17 = VAR_48->floats.video_font_size * 2.5f;

   if (VAR_16)
   {
      VAR_23 = VAR_17 * 1.2347826087f;
      VAR_22 = 0.98591549295f * VAR_23;
   }
   else
   {
      VAR_22 = 0;
      VAR_23 = 0;
   }

   VAR_35 = 0.69f;
   VAR_13 = VAR_39 / 4;
   VAR_31 = VAR_17 / 3;
   VAR_15 = VAR_9 * VAR_35;
   VAR_26 = VAR_31 + VAR_22;
   VAR_25 = VAR_23;
   VAR_24 = (VAR_23 - VAR_25)/2;
   VAR_19 = (VAR_23 - VAR_17)/2;
   VAR_30 = VAR_31 + VAR_22 - (VAR_22 * 0.28928571428f);
   VAR_14 = VAR_15 * 40;

   if (VAR_16)
      VAR_27 = VAR_37/2;
   else
      VAR_27 = VAR_37;

   VAR_33 = VAR_26 - VAR_22;

   VAR_34 = VAR_33 + VAR_17/2;

   if (!VAR_12[VAR_0])
      VAR_34 -= VAR_15*2;

   VAR_29 = VAR_26 + VAR_27;
   VAR_28 = VAR_48->floats.video_font_size * VAR_35 + VAR_17/2;

   VAR_32 = VAR_26 - VAR_22;

   VAR_8 = VAR_48->floats.video_font_size * 2;
}
