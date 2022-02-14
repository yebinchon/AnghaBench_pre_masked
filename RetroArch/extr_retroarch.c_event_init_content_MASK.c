
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cheevos_hardcore_mode_enable; int cheevos_enable; } ;
struct TYPE_5__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (int*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static bool FUNC_12(void)
{
   bool VAR_8 = 0;
   bool VAR_9 = 0;

   FUNC_6(&VAR_8, &VAR_9);

   VAR_6 = (VAR_5 == VAR_2)
      && !VAR_8;



   if (VAR_5 == VAR_1)
      return 1;

   FUNC_8();

   FUNC_6(&VAR_8, &VAR_9);

   if (!VAR_8)
      FUNC_11();

   if (!FUNC_7())
   {
      VAR_7 = 0;
      return 0;
   }

   FUNC_5();

   if (FUNC_9())
      FUNC_0("%s.\n",
            FUNC_10(VAR_3));
   FUNC_4();


   FUNC_1();
   FUNC_2();
   FUNC_3(VAR_0, ((void*)0));

   return 1;
}
