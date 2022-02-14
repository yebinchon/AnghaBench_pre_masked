
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 int FUNC_3 (char*,char const*,scalar_t__) ;

int32_t FUNC_4(char *VAR_3, const char *VAR_4, int32_t VAR_5)
{
    int32_t VAR_6 = 0;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == 0)
        return VAR_1;

    VAR_6 = (int32_t)FUNC_1(VAR_3);

    if (VAR_6 == 0)
    {
        FUNC_3(VAR_3, VAR_4, VAR_5 - 1);
        VAR_3[VAR_5 - 1] = 0;
    }
    else
    {
        FUNC_0(VAR_3, VAR_5, VAR_2);
        FUNC_2(VAR_3, VAR_4, VAR_5 - VAR_6);
    }

    return VAR_0;
}
