
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int battery_enabled; int charging; unsigned int percent; int len; int s; } ;
typedef TYPE_1__ menu_display_ctx_powerstate_t ;
typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,char*,unsigned int) ;
 int FUNC_2 () ;

void FUNC_3(menu_display_ctx_powerstate_t *VAR_6)
{
   int VAR_7 = 0;
   enum frontend_powerstate VAR_8 = VAR_1;

   if (!VAR_6)
      return;


   if (VAR_4 - VAR_5 >=
         VAR_3)
   {
      VAR_5 = VAR_4;
      FUNC_2();
   }


   VAR_8 = FUNC_0(&VAR_7);


   VAR_6->battery_enabled = (VAR_8 != VAR_1) &&
                                 (VAR_8 != VAR_2);

   if (VAR_6->battery_enabled)
   {
      VAR_6->charging = (VAR_8 == VAR_0);
      VAR_6->percent = VAR_7 > 0 ? (unsigned)VAR_7 : 0;
      FUNC_1(VAR_6->s, VAR_6->len, "%u%%", VAR_6->percent);
   }
   else
   {
      VAR_6->charging = 0;
      VAR_6->percent = 0;
   }
}
