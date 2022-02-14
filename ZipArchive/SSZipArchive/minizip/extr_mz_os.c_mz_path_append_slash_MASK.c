
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

int32_t FUNC_1(char *VAR_2, int32_t VAR_3, char VAR_4)
{
    int32_t VAR_5 = (int32_t)FUNC_0(VAR_2);
    if ((VAR_5 + 2) >= VAR_3)
        return VAR_0;
    if (VAR_2[VAR_5 - 1] != '\\' && VAR_2[VAR_5 - 1] != '/')
    {
        VAR_2[VAR_5] = VAR_4;
        VAR_2[VAR_5 + 1] = 0;
    }
    return VAR_1;
}
