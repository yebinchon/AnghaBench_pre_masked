
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* menu_driver; } ;
struct TYPE_7__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;
typedef int playlist_t ;
typedef int menu_handle_t ;
struct TYPE_8__ {int list; } ;
typedef TYPE_3__ menu_displaylist_info_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_2__* FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (char const*) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static bool FUNC_9(
      menu_handle_t *VAR_28,
      menu_displaylist_info_t *VAR_29,
      const char *VAR_30)
{
   enum msg_hash_enums VAR_31;
   enum msg_hash_enums VAR_32;
   settings_t *VAR_33 = FUNC_0();
   const char *VAR_34 = ((void*)0);
   playlist_t *VAR_35 = ((void*)0);

   if (!VAR_33)
      return 0;

   if (FUNC_7(VAR_30))
      return 0;

   VAR_34 = FUNC_5(VAR_30);

   if (FUNC_7(VAR_34))
      return 0;

   FUNC_2(VAR_28, VAR_30);

   VAR_35 = FUNC_6();

   if (!VAR_35)
      return 0;




   if (!FUNC_8(VAR_34, FUNC_1(VAR_1)) &&
       !FUNC_8(VAR_34, FUNC_1(VAR_3)) &&
       !FUNC_8(VAR_34, FUNC_1(VAR_4)) &&
       !FUNC_8(VAR_34, FUNC_1(VAR_2)) &&
       !FUNC_8(VAR_34, FUNC_1(VAR_0)))
      FUNC_3(VAR_29->list,
            FUNC_4(VAR_17),
            FUNC_4(VAR_7),
            VAR_7,
            VAR_24, 0, 0);


   FUNC_3(VAR_29->list,
         FUNC_4(VAR_19),
         FUNC_4(VAR_10),
         VAR_10,
         VAR_5, 0, 0);


   FUNC_3(VAR_29->list,
         FUNC_4(VAR_18),
         FUNC_4(VAR_8),
         VAR_8,
         VAR_25, 0, 0);




   if (FUNC_8(VAR_33->arrays.menu_driver, "rgui"))
   {
      VAR_31 = VAR_22;
      VAR_32 = VAR_16;
   }
   else if (FUNC_8(VAR_33->arrays.menu_driver, "ozone"))
   {
      VAR_31 = VAR_20;
      VAR_32 = VAR_15;
   }
   else if (FUNC_8(VAR_33->arrays.menu_driver, "glui"))
   {
      VAR_31 = VAR_21;
      VAR_32 = VAR_14;
   }
   else
   {
      VAR_31 = VAR_20;
      VAR_32 = VAR_13;
   }


   FUNC_3(VAR_29->list,
         FUNC_4(VAR_31),
         FUNC_4(VAR_11),
         VAR_11,
         VAR_27, 0, 0);


   FUNC_3(VAR_29->list,
         FUNC_4(VAR_32),
         FUNC_4(VAR_9),
         VAR_9,
         VAR_26, 0, 0);




   FUNC_3(VAR_29->list,
         FUNC_4(VAR_12),
         FUNC_4(VAR_6),
         VAR_6,
         VAR_23, 0, 0);

   return 1;
}
