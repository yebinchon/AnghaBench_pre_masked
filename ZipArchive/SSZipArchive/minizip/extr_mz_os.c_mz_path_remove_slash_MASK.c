
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int32_t FUNC_1(char *VAR_1)
{
    int32_t VAR_2 = (int32_t)FUNC_0(VAR_1);
    while (VAR_2 > 0)
    {
        if (VAR_1[VAR_2 - 1] == '\\' || VAR_1[VAR_2 - 1] == '/')
            VAR_1[VAR_2 - 1] = 0;
        else
            break;

        VAR_2 -= 1;
    }
    return VAR_0;
}
