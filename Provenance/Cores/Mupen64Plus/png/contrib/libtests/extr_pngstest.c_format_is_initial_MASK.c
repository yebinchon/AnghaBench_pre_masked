
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* bits; } ;
typedef TYPE_1__ format_list ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(format_list *VAR_1)
{
   int VAR_2;
   for (VAR_2=0; VAR_2<VAR_0; ++VAR_2)
      if (VAR_1->bits[VAR_2] != 0)
         return 0;

   return 1;
}
