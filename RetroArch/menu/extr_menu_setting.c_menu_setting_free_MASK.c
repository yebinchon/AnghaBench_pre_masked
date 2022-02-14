
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * short_description; int * name; int * values; scalar_t__ free_flags; } ;
typedef TYPE_1__ rarch_setting_t ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

void FUNC_2(rarch_setting_t *VAR_1)
{
   unsigned VAR_2, VAR_3;
   rarch_setting_t **VAR_4 = ((void*)0);

   if (!VAR_1)
      return;

   VAR_4 = (rarch_setting_t**)&VAR_1;


   for (; FUNC_1(VAR_1) != VAR_0; (*VAR_4 = *VAR_4 + 1))
      for (VAR_2 = (unsigned)VAR_1->free_flags, VAR_3 = 0; VAR_2 != 0; VAR_2 >>= 1, VAR_3++)
         if (VAR_2 & 1)
            switch (1 << VAR_3)
            {
               case 128:
                  if (VAR_1->values)
                     FUNC_0((void*)VAR_1->values);
                  VAR_1->values = ((void*)0);
                  break;
               case 130:
                  if (VAR_1->name)
                     FUNC_0((void*)VAR_1->name);
                  VAR_1->name = ((void*)0);
                  break;
               case 129:
                  if (VAR_1->short_description)
                     FUNC_0((void*)VAR_1->short_description);
                  VAR_1->short_description = ((void*)0);
                  break;
               default:
                  break;
            }
}
