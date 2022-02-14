
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rewind_enable; scalar_t__ cheevos_hardcore_mode_enable; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* FUNC_2 () ;
 char* FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char const*,int ,int,int,int *,int ,int ) ;

bool FUNC_5(void)
{
   settings_t *VAR_8 = FUNC_2();

   if (!VAR_8)
      return 0;


   if ( VAR_8->bools.cheevos_hardcore_mode_enable
       && !VAR_6)
   {
      const char *VAR_9 = FUNC_3(
            VAR_5);


      VAR_7 = 0;



      FUNC_1(VAR_0, ((void*)0));

      if (VAR_8->bools.rewind_enable)
         FUNC_1(VAR_1, ((void*)0));

      FUNC_0("%s\n", VAR_9);
      FUNC_4(VAR_9, 0, 3 * 60, 1, ((void*)0), VAR_4, VAR_3);
   }
   else
   {
      if (VAR_8->bools.rewind_enable)
         FUNC_1(VAR_2, ((void*)0));
   }

   return 1;
}
