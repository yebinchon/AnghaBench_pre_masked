
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct string_list {scalar_t__ size; } ;
struct retro_system_info {int library_name; } ;
struct TYPE_5__ {int list; } ;
typedef TYPE_1__ menu_displaylist_info_t ;
struct TYPE_6__ {scalar_t__ config_data; } ;
typedef TYPE_2__ core_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct string_list* FUNC_0 () ;
 int FUNC_1 (TYPE_2__**) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct retro_system_info* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct string_list*) ;

__attribute__((used)) static unsigned FUNC_9(
      menu_displaylist_info_t *VAR_19)
{
   unsigned VAR_20 = 0;
   core_info_t *VAR_21 = ((void*)0);
   struct retro_system_info *VAR_22 = FUNC_5();

   FUNC_1(&VAR_21);

   if ( VAR_22 &&
         (!FUNC_6(VAR_22->library_name) &&
          !FUNC_7(VAR_22->library_name,
             FUNC_3(VAR_15))
         )
         && VAR_21 && VAR_21->config_data
      )
      if (FUNC_2(VAR_19->list,
            FUNC_3(VAR_9),
            FUNC_3(VAR_1),
            VAR_1,
            VAR_17, 0, 0))
         VAR_20++;
   if (FUNC_2(VAR_19->list,
         FUNC_3(VAR_16),
         FUNC_3(VAR_7),
         VAR_7,
         VAR_17, 0, 0))
      VAR_20++;
   if (FUNC_4(VAR_18, ((void*)0)))
   {
      if (FUNC_2(VAR_19->list,
            FUNC_3(VAR_13),
            FUNC_3(VAR_5),
            VAR_5,
            VAR_17, 0, 0))
         VAR_20++;

      if (FUNC_2(VAR_19->list,
            FUNC_3(VAR_8),
            FUNC_3(VAR_0),
            VAR_0,
            VAR_17, 0, 0))
         VAR_20++;
   }

   return VAR_20;
}
