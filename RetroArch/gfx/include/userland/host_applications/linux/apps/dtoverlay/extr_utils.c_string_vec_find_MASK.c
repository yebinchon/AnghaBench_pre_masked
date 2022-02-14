
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_strings; char** strings; } ;
typedef TYPE_1__ STRING_VEC_T ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

int FUNC_2(STRING_VEC_T *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0->num_strings; VAR_3++)
    {
 if (VAR_2)
 {
     if ((FUNC_1(VAR_0->strings[VAR_3], VAR_1, VAR_2) == 0) &&
  (VAR_0->strings[VAR_3][VAR_2] == '\0'))
  return VAR_3;
 }
 else if (FUNC_0(VAR_0->strings[VAR_3], VAR_1) == 0)
     return VAR_3;
    }

    return -1;
}
