
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ menu_navigation_wraparound_enable; } ;
struct TYPE_8__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {int size; scalar_t__ selection; int type; } ;
typedef TYPE_3__ menu_ctx_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_3, const char *VAR_4,
      bool VAR_5)
{
   menu_ctx_list_t VAR_6;

   FUNC_3(&VAR_6);

   VAR_6.type = VAR_1;

   FUNC_4(&VAR_6);

   if (VAR_6.size == 1)
   {
      menu_ctx_list_t VAR_7;
      menu_ctx_list_t VAR_8;
      settings_t *VAR_9 = FUNC_2();

      VAR_7.type = VAR_0;
      VAR_8.type = VAR_2;

      FUNC_4(&VAR_7);
      FUNC_4(&VAR_8);

      if ((VAR_6.selection != (VAR_7.size + VAR_8.size))
         || VAR_9->bools.menu_navigation_wraparound_enable)
         return FUNC_0();
   }
   else
      FUNC_1(0, "", 0);

   return 0;
}
