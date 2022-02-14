
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int menu_savestate_resume; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(const char *VAR_2,
      const char *VAR_3, unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   settings_t *VAR_7 = FUNC_0();
   bool VAR_8 = 1;

   if (VAR_7)
      VAR_8 = VAR_7->bools.menu_savestate_resume;

   if (FUNC_1(VAR_0) == -1)
      return FUNC_2();

   if (VAR_8)
      return FUNC_1(VAR_1);

   return 0;
}
