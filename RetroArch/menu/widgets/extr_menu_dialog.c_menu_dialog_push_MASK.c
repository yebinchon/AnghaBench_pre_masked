
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int label; int enum_idx; int list; } ;
typedef TYPE_1__ menu_displaylist_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

void FUNC_6(void)
{
   menu_displaylist_info_t VAR_2;
   const char *VAR_3;

   if (!FUNC_0())
      return;

   FUNC_2(&VAR_2);

   VAR_2.list = FUNC_3(0);
   VAR_2.enum_idx = VAR_1;


   VAR_3 = FUNC_4(VAR_1);
   if (VAR_3)
      VAR_2.label = FUNC_5(VAR_3);

   FUNC_1(VAR_0, &VAR_2);
}
