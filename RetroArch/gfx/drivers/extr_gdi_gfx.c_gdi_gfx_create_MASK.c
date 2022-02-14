
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int os ;
struct TYPE_3__ {int (* get_os ) (char*,int,int*,int*) ;} ;
typedef TYPE_1__ frontend_ctx_driver_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int,int*,int*) ;

__attribute__((used)) static void FUNC_4(void)
{
   char VAR_3[64] = {0};

   frontend_ctx_driver_t *VAR_4 = FUNC_2();

   if (!VAR_4 || !VAR_4->get_os)
   {
      FUNC_0("[GDI] No frontend driver found.\n");
      return;
   }

   VAR_4->get_os(VAR_3, sizeof(VAR_3), &VAR_1, &VAR_2);


   if (VAR_1 < 4 || (VAR_1 == 4 && VAR_2 <= 10))
   {
      FUNC_1("[GDI] Win98 or lower detected, using slow frame conversion method for RGB444.\n");
      VAR_0 = 1;
   }
}
