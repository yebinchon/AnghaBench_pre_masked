
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int x; float alpha; float label_alpha; } ;
typedef TYPE_3__ xmb_node_t ;
struct TYPE_13__ {char* bg_file_path; float items_passive_alpha; int icon_spacing_horizontal; float items_active_alpha; int title_name; } ;
typedef TYPE_4__ xmb_handle_t ;
struct TYPE_11__ {int directory_dynamic_wallpapers; } ;
struct TYPE_10__ {scalar_t__ menu_dynamic_wallpaper_enable; } ;
struct TYPE_14__ {TYPE_2__ paths; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 () ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (char*,int ,char*,size_t) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (int ,char*,char*) ;
 int FUNC_12 (char*,char*,size_t) ;
 int FUNC_13 (char*,int ,int ,int ,int *) ;
 int FUNC_14 (int *,unsigned int*) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_4__*,unsigned int,size_t,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_17 (TYPE_3__*,uintptr_t,float,int ) ;

__attribute__((used)) static void FUNC_18(xmb_handle_t *VAR_3,
      file_list_t *VAR_4, int VAR_5, size_t VAR_6)
{
   unsigned VAR_7, VAR_8, VAR_9, VAR_10;
   size_t VAR_11 = 0;
   settings_t *VAR_12 = FUNC_0();

   if (VAR_12->bools.menu_dynamic_wallpaper_enable)
   {
      size_t VAR_13 = VAR_1 * sizeof(char);
      char *VAR_14 = (char*)FUNC_6(VAR_1 * sizeof(char));
      char *VAR_15 = FUNC_11(VAR_3->title_name, "/", " ");

      VAR_14[0] = '\0';

      if (VAR_15)
      {
         FUNC_4(
               VAR_14,
               VAR_12->paths.directory_dynamic_wallpapers,
               VAR_15,
               VAR_13);
         FUNC_5(VAR_15);
      }

      FUNC_12(VAR_14, ".png", VAR_13);

      if (!FUNC_7(VAR_14))
         FUNC_3(VAR_14, VAR_13,
               VAR_0);

      if (!FUNC_10(VAR_14, VAR_3->bg_file_path))
      {
         if (FUNC_7(VAR_14))
         {
            FUNC_13(VAR_14,
                  FUNC_15(), 0,
                  VAR_2, ((void*)0));
            if (!FUNC_9(VAR_3->bg_file_path))
               FUNC_5(VAR_3->bg_file_path);
            VAR_3->bg_file_path = FUNC_8(VAR_14);
         }
      }

      FUNC_5(VAR_14);
   }

   VAR_11 = FUNC_1(VAR_4);

   VAR_8 = 0;
   VAR_9 = (unsigned)(VAR_11 > 0 ? VAR_11 - 1 : 0);

   FUNC_14(((void*)0), &VAR_10);
   FUNC_16(VAR_3, VAR_10, VAR_11, (unsigned)VAR_6, &VAR_8, &VAR_9);

   for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
   {
      xmb_node_t *VAR_16 = (xmb_node_t*)
         FUNC_2(VAR_4, VAR_7);
      float VAR_17 = VAR_3->items_passive_alpha;

      if (!VAR_16)
         continue;

      VAR_16->x = VAR_3->icon_spacing_horizontal * VAR_5;
      VAR_16->alpha = 0;
      VAR_16->label_alpha = 0;

      if (VAR_7 == VAR_6)
         VAR_17 = VAR_3->items_active_alpha;

      if (VAR_7 >= VAR_8 && VAR_7 <= VAR_9)
         FUNC_17(VAR_16, (uintptr_t)VAR_4, VAR_17, 0);
      else
      {
         VAR_16->x = 0;
         VAR_16->alpha = VAR_16->label_alpha = VAR_17;
      }
   }
}
