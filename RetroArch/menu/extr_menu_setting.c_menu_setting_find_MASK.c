
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* name; char* short_description; int (* read_handler ) (TYPE_1__*) ;} ;
typedef TYPE_1__ rarch_setting_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;

rarch_setting_t *FUNC_5(const char *VAR_3)
{
   rarch_setting_t *VAR_4 = ((void*)0);
   rarch_setting_t **VAR_5 = &VAR_4;

   if (!VAR_3)
      return ((void*)0);

   FUNC_0(VAR_0, &VAR_4);

   if (!VAR_4)
      return ((void*)0);

   for (; FUNC_1(VAR_4) != VAR_2; (*VAR_5 = *VAR_5 + 1))
   {
      const char *VAR_6 = VAR_4->name;
      const char *VAR_7 = VAR_4->short_description;

      if (
            FUNC_3(VAR_3, VAR_6) &&
            (FUNC_1(VAR_4) <= VAR_1))
      {
         if (FUNC_2(VAR_7))
            break;

         if (VAR_4->read_handler)
            VAR_4->read_handler(VAR_4);

         return VAR_4;
      }
   }

   return ((void*)0);
}
