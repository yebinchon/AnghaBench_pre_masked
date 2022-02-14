
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int VC_CONTAINERS_LIST_T ;
struct TYPE_3__ {char const* name; char* value; } ;
typedef TYPE_1__ PARAMETER_T ;


 int FUNC_0 (char*,char**,int) ;
 scalar_t__ FUNC_1 (int const*,TYPE_1__*) ;

bool FUNC_2(const VC_CONTAINERS_LIST_T *VAR_0,
      const char *VAR_1,
      uint32_t *VAR_2)
{
   PARAMETER_T VAR_3;

   VAR_3.name = VAR_1;
   if (FUNC_1(VAR_0, &VAR_3) && VAR_3.value)
   {
      char *VAR_4;

      *VAR_2 = FUNC_0(VAR_3.value, &VAR_4, 16);
      return (VAR_4 != VAR_3.value) && (*VAR_4 == '\0');
   }

   return 0;
}
