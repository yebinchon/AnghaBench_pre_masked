
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* (* name ) (unsigned int) ;} ;


 TYPE_1__** VAR_0 ;
 char const* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static const char* FUNC_2(unsigned VAR_1)
{
   if (!FUNC_1(VAR_1))
      return "N/A";

   return VAR_0[VAR_1]->name(VAR_1);
}
