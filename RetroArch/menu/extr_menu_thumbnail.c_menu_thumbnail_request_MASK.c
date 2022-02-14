
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ network_on_demand_thumbnails; } ;
struct TYPE_10__ {int menu_thumbnail_upscale_threshold; } ;
struct TYPE_12__ {TYPE_2__ bools; TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef int playlist_t ;
struct TYPE_13__ {int list_id; TYPE_5__* thumbnail; } ;
typedef TYPE_4__ menu_thumbnail_tag_t ;
struct TYPE_14__ {int status; } ;
typedef TYPE_5__ menu_thumbnail_t ;
typedef int menu_thumbnail_path_data_t ;
typedef int last_img_name ;
typedef enum menu_thumbnail_id { ____Placeholder_menu_thumbnail_id } menu_thumbnail_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int *,char const**) ;
 int FUNC_3 (int *,int,char const**) ;
 int FUNC_4 (int *,char const**) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*,char const*,int) ;
 scalar_t__ FUNC_11 (char const*,int ,int ,int ,TYPE_4__*) ;
 int FUNC_12 (char const*,int *,unsigned int,int,int) ;
 int FUNC_13 () ;

void FUNC_14(
      menu_thumbnail_path_data_t *VAR_5, enum menu_thumbnail_id VAR_6,
      playlist_t *VAR_7, size_t VAR_8, menu_thumbnail_t *VAR_9)
{
   settings_t *VAR_10 = FUNC_1();
   const char *VAR_11 = ((void*)0);
   bool VAR_12 = 0;

   if (!VAR_5 || !VAR_9 || !VAR_10)
      return;



   FUNC_6(VAR_9);
   VAR_9->status = VAR_0;


   if (FUNC_5(VAR_5, VAR_6))
      if (FUNC_7(VAR_5, VAR_6))
         VAR_12 = FUNC_3(VAR_5, VAR_6, &VAR_11);


   if (VAR_12)
   {
      if (FUNC_8(VAR_11))
      {
         menu_thumbnail_tag_t *VAR_13 =
               (menu_thumbnail_tag_t*)FUNC_0(1, sizeof(menu_thumbnail_tag_t));

         if (!VAR_13)
            return;


         VAR_13->thumbnail = VAR_9;
         VAR_13->list_id = VAR_4;



         if(FUNC_11(
               VAR_11, FUNC_13(),
               VAR_10->uints.menu_thumbnail_upscale_threshold,
               VAR_3, VAR_13))
            VAR_9->status = VAR_1;
      }
   }
}
