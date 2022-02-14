
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int title_noext ;
struct texture_image {int * pixels; int supports_rgba; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_9__ {scalar_t__ ozone_truncate_playlist_name; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_11__ {char* console_name; int content_icon; int icon; } ;
typedef TYPE_3__ ozone_node_t ;
struct TYPE_12__ {int horizontal_list; int icons_path; } ;
typedef TYPE_4__ ozone_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,unsigned int,char const**,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,char*,char*,char*,int) ;
 int FUNC_5 (char*,char*,char*,char,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct texture_image*) ;
 scalar_t__ FUNC_8 (struct texture_image*,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,unsigned int,char const**,int *,int *,int *,int *) ;
 TYPE_3__* FUNC_11 () ;
 size_t FUNC_12 (TYPE_4__*,int ) ;
 char* FUNC_13 () ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*,int ,int) ;
 int FUNC_18 (char const*,char*) ;
 int FUNC_19 () ;
 int FUNC_20 (struct texture_image*,int ,int *) ;
 int FUNC_21 (int *) ;

void FUNC_22(ozone_handle_t *VAR_3)
{
   unsigned VAR_4;
   const char *VAR_5;
   char VAR_6[255];
   char *VAR_7;
   bool VAR_8;
   settings_t *VAR_9 = FUNC_0();

   size_t VAR_10 = FUNC_12(VAR_3, VAR_0);

   for (VAR_4 = 0; VAR_4 < VAR_10; VAR_4++)
   {
      const char *VAR_11 = ((void*)0);
      ozone_node_t *VAR_12 = (ozone_node_t*)FUNC_2(VAR_3->horizontal_list, VAR_4);

      if (!VAR_12)
      {
         VAR_12 = FUNC_11();
         if (!VAR_12)
            continue;
      }

      FUNC_1(VAR_3->horizontal_list, VAR_4,
            &VAR_11, ((void*)0), ((void*)0), ((void*)0));

      if (!VAR_11)
         continue;

      if (!FUNC_18(VAR_11, ".lpl"))
         continue;

      {
         struct texture_image VAR_13;
         char *VAR_14 = (char*)
            FUNC_9(VAR_1 * sizeof(char));
         char *VAR_15 = (char*)
            FUNC_9(VAR_1 * sizeof(char));
         char *VAR_16 = (char*)
            FUNC_9(VAR_1 * sizeof(char));
         char *VAR_17 = (char*)
            FUNC_9(VAR_1 * sizeof(char));

         FUNC_17(VAR_17, VAR_3->icons_path, VAR_1 * sizeof(char));

         VAR_14[0] = VAR_15[0] = VAR_16[0] = '\0';

         FUNC_3(VAR_14, VAR_11,
               VAR_1 * sizeof(char));

         FUNC_4(VAR_15, VAR_17, VAR_14,
               ".png",
               VAR_1 * sizeof(char));



         if (!FUNC_14(VAR_15))
               FUNC_4(VAR_15, VAR_17, "default",
               ".png",
               VAR_1 * sizeof(char));

         VAR_13.width = 0;
         VAR_13.height = 0;
         VAR_13.pixels = ((void*)0);
         VAR_13.supports_rgba = FUNC_19();

         if (FUNC_8(&VAR_13, VAR_15))
         {
            if(VAR_13.pixels)
            {
               FUNC_21(&VAR_12->icon);
               FUNC_20(&VAR_13,
                     VAR_2, &VAR_12->icon);
            }

            FUNC_7(&VAR_13);
         }

         FUNC_5(VAR_14, VAR_14,
               "content.png", '-',
               VAR_1 * sizeof(char));
         FUNC_16(VAR_16, VAR_17, VAR_1 * sizeof(char));

         FUNC_16(VAR_16, FUNC_13(), VAR_1 * sizeof(char));
         FUNC_16(VAR_16, VAR_14, VAR_1 * sizeof(char));


         if (!FUNC_14(VAR_16))
         {
            FUNC_16(VAR_17, FUNC_13(), VAR_1 * sizeof(char));
            FUNC_16(VAR_17, "default", VAR_1 * sizeof(char));
            FUNC_5(VAR_16, VAR_17,
                  "content.png", '-',
                  VAR_1 * sizeof(char));
         }

         if (FUNC_8(&VAR_13, VAR_16))
         {
            if(VAR_13.pixels)
            {
               FUNC_21(&VAR_12->content_icon);
               FUNC_20(&VAR_13,
                     VAR_2, &VAR_12->content_icon);
            }

            FUNC_7(&VAR_13);
         }


         FUNC_10(
            VAR_3->horizontal_list,
            VAR_4,
            &VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

         FUNC_3(VAR_6, VAR_5, sizeof(VAR_6));




         VAR_7 = VAR_6;
         VAR_8 = 0;

         while (VAR_9->bools.ozone_truncate_playlist_name)
         {

            if (*VAR_7 == '-' && *(VAR_7 + 1) == ' ')
            {
               VAR_8 = 1;
               break;
            }
            else if (*VAR_7 == '\0')
               break;

            VAR_7++;
         }

         if (VAR_8)
            VAR_7 += 2;
         else
            VAR_7 = VAR_6;

         if (VAR_12->console_name)
            FUNC_6(VAR_12->console_name);

         VAR_12->console_name = FUNC_15(VAR_7);

         FUNC_6(VAR_14);
         FUNC_6(VAR_15);
         FUNC_6(VAR_16);
         FUNC_6(VAR_17);
      }
   }
}
