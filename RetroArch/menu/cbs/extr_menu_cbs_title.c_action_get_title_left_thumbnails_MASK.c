
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int menu_driver; } ;
struct TYPE_5__ {TYPE_1__ arrays; } ;
typedef TYPE_2__ settings_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(
      const char *VAR_4, const char *VAR_5, unsigned VAR_6, char *VAR_7, size_t VAR_8)
{
   settings_t *VAR_9 = FUNC_0();
   const char *VAR_10 = ((void*)0);
   enum msg_hash_enums VAR_11;


   if (FUNC_4(VAR_9->arrays.menu_driver, "rgui"))
      VAR_11 = VAR_3;
   else if (FUNC_4(VAR_9->arrays.menu_driver, "ozone"))
      VAR_11 = VAR_2;
   else if (FUNC_4(VAR_9->arrays.menu_driver, "glui"))
      VAR_11 = VAR_1;
   else
      VAR_11 = VAR_0;

   VAR_10 = FUNC_1(VAR_11);

   if (VAR_7 && !FUNC_3(VAR_10))
   {
      FUNC_2(VAR_7, VAR_10, VAR_8);
      return 1;
   }

   return 0;
}
