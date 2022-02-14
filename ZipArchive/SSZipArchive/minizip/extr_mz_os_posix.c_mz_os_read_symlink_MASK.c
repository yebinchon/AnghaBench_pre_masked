
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,scalar_t__) ;

int32_t FUNC_1(const char *VAR_2, char *VAR_3, int32_t VAR_4)
{
    size_t VAR_5 = 0;

    VAR_5 = (size_t)FUNC_0(VAR_2, VAR_3, VAR_4 - 1);
    if (VAR_5 == (size_t)-1)
        return VAR_0;

    VAR_3[VAR_5] = 0;
    return VAR_1;
}
