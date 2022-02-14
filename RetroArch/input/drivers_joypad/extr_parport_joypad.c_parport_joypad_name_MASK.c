
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* ident; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *FUNC_0(unsigned VAR_2)
{
   if (VAR_2 >= VAR_0)
      return ((void*)0);

   return *VAR_1[VAR_2].ident ? VAR_1[VAR_2].ident : ((void*)0);
}
