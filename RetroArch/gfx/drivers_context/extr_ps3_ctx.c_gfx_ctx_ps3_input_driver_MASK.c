
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* (* init ) (char const*) ;} ;
typedef TYPE_1__ input_driver_t ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1,
      const char *VAR_2,
      input_driver_t **VAR_3, void **VAR_4)
{
   void *VAR_5 = VAR_0(VAR_2);

   *VAR_3 = VAR_5 ? &VAR_0 : ((void*)0);
   *VAR_4 = VAR_5;
}
