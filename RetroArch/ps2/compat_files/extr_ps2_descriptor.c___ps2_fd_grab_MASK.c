
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ref_count; } ;
typedef TYPE_1__ DescriptorTranslation ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

DescriptorTranslation *FUNC_3(int VAR_2)
{
   DescriptorTranslation *VAR_3 = ((void*)0);

   FUNC_0();

   if (FUNC_2(VAR_2))
   {

      VAR_2 = VAR_0 - VAR_2;
      VAR_3 = VAR_1[VAR_2];

      if (VAR_3)
         VAR_3->ref_count++;
   }

   FUNC_1();
   return VAR_3;
}
