
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

int32_t FUNC_1(char *VAR_1, char VAR_2)
{
    int32_t VAR_3 = 0;

    for (VAR_3 = 0; VAR_3 < (int32_t)FUNC_0(VAR_1); VAR_3 += 1)
    {
        if (VAR_1[VAR_3] == '\\' || VAR_1[VAR_3] == '/')
            VAR_1[VAR_3] = VAR_2;
    }
    return VAR_0;
}
