
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* (* name ) (void*,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 char const* FUNC_1 (void*,unsigned int) ;

__attribute__((used)) static const char *FUNC_2(unsigned VAR_1)
{
   if (VAR_0 && VAR_0->name)
      return VAR_0->name((void*)FUNC_0(), VAR_1);
   return ((void*)0);
}
