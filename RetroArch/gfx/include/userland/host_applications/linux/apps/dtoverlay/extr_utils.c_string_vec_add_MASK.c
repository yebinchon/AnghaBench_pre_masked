
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_strings; int max_strings; char** strings; } ;
typedef TYPE_1__ STRING_VEC_T ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char** FUNC_2 (char**,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;

char *FUNC_5(STRING_VEC_T *VAR_0, const char *VAR_1, int VAR_2)
{
    char *VAR_3;
    if (VAR_0->num_strings == VAR_0->max_strings)
    {
 if (VAR_0->max_strings)
     VAR_0->max_strings *= 2;
 else
     VAR_0->max_strings = 16;
 VAR_0->strings = FUNC_2(VAR_0->strings, VAR_0->max_strings * sizeof(const char *));
 if (!VAR_0->strings)
     FUNC_0("Out of memory");
    }

    if (VAR_2)
    {
 VAR_3 = FUNC_1(VAR_2 + 1);
 FUNC_4(VAR_3, VAR_1, VAR_2);
 VAR_3[VAR_2] = '\0';
    }
    else
       VAR_3 = FUNC_3(VAR_1);

    if (!VAR_3)
 FUNC_0("Out of memory");

    VAR_0->strings[VAR_0->num_strings++] = VAR_3;

    return VAR_3;
}
