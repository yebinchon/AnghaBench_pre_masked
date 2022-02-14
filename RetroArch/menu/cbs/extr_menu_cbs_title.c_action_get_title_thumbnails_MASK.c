
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
 TYPE_2__* FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(
      const char *VAR_3, const char *VAR_4, unsigned VAR_5, char *VAR_6, size_t VAR_7)
{
   settings_t *VAR_8 = FUNC_0();
   const char *VAR_9 = ((void*)0);
   enum msg_hash_enums VAR_10;


   if (FUNC_4(VAR_8->arrays.menu_driver, "rgui"))
      VAR_10 = VAR_2;
   else if (FUNC_4(VAR_8->arrays.menu_driver, "glui"))
      VAR_10 = VAR_1;
   else
      VAR_10 = VAR_0;

   VAR_9 = FUNC_1(VAR_10);

   if (VAR_6 && !FUNC_3(VAR_9))
   {
      FUNC_2(VAR_6, VAR_9, VAR_7);
      return 1;
   }

   return 0;
}
