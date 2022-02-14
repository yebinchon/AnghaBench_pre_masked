
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef enum rarch_display_type { ____Placeholder_rarch_display_type } rarch_display_type ;
struct TYPE_6__ {int ident; void* (* init ) () ;} ;




 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void* FUNC_5(void)
{
   enum rarch_display_type VAR_8 = FUNC_4();

   FUNC_2();

   switch (VAR_8)
   {
      case 129:



         break;
      case 128:



         break;
      default:



         VAR_0 = &VAR_4;

         break;
   }

   VAR_1 = VAR_0->init();

   FUNC_0("[Video]: Found display server: %s\n",
     VAR_0->ident);

   VAR_7 = FUNC_3();
   VAR_2 = VAR_7;

   return VAR_1;
}
