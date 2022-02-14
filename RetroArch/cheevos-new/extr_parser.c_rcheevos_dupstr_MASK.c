
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ string; } ;
typedef TYPE_1__ rcheevos_field_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static const char* FUNC_2(const rcheevos_field_t* VAR_0)
{
   char* VAR_1 = (char*)FUNC_0(VAR_0->length + 1);

   if (!VAR_1)
      return ((void*)0);

   FUNC_1((void*)VAR_1, (void*)VAR_0->string, VAR_0->length);
   VAR_1[VAR_0->length] = 0;
   return VAR_1;
}
