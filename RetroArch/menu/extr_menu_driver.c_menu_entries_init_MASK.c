
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_list_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(void)
{
   if (!(VAR_1 = (menu_list_t*)FUNC_2()))
      goto error;

   FUNC_3(VAR_0, &VAR_2);

   if (!VAR_2)
      goto error;

   return 1;

error:
   FUNC_1();
   FUNC_0();

   return 0;
}
