
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct record_params {int dummy; } ;
struct TYPE_4__ {void* (* init ) (struct record_params const*) ;} ;
typedef TYPE_1__ record_driver_t ;


 TYPE_1__** VAR_0 ;
 void* FUNC_0 (struct record_params const*) ;

__attribute__((used)) static bool FUNC_1(
      const record_driver_t **VAR_1, void **VAR_2,
      const struct record_params *VAR_3)
{
   unsigned VAR_4;

   for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++)
   {
      void *VAR_5 = VAR_0[VAR_4]->init(VAR_3);

      if (!VAR_5)
         continue;

      *VAR_1 = VAR_0[VAR_4];
      *VAR_2 = VAR_5;
      return 1;
   }

   return 0;
}
