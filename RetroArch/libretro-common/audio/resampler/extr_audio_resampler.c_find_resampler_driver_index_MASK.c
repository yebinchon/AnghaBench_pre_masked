
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ident; } ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++)
      if (FUNC_0(VAR_1, VAR_0[VAR_2]->ident))
         return VAR_2;
   return -1;
}
