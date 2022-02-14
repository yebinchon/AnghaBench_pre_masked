
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rarch_override_setting { ____Placeholder_rarch_override_setting } rarch_override_setting ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void)
{
   unsigned VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      if (VAR_3 == VAR_2)
      {
         unsigned VAR_4;
         for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
            FUNC_0(
                  (enum rarch_override_setting)(VAR_3), &VAR_4);
      }
      else
         FUNC_0(
               (enum rarch_override_setting)(VAR_3), ((void*)0));
   }
}
