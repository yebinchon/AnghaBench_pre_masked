
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

int32_t FUNC_6(const char *VAR_2)
{
    int32_t VAR_3 = VAR_1;
    int16_t VAR_4 = 0;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    char VAR_7 = 0;


    VAR_4 = (int16_t)FUNC_5(VAR_2);
    if (VAR_4 <= 0)
        return 0;

    VAR_5 = (char *)FUNC_0((uint16_t)VAR_4 + 1);
    if (VAR_5 == ((void*)0))
        return VAR_0;

    FUNC_4(VAR_5, VAR_2);
    FUNC_3(VAR_5);

    VAR_3 = FUNC_2(VAR_5);
    if (VAR_3 != VAR_1)
    {
        VAR_6 = VAR_5 + 1;
        while (1)
        {
            while (*VAR_6 != 0 && *VAR_6 != '\\' && *VAR_6 != '/')
                VAR_6 += 1;
            VAR_7 = *VAR_6;
            *VAR_6 = 0;

            VAR_3 = FUNC_2(VAR_5);
            if (VAR_3 != VAR_1)
                break;
            if (VAR_7 == 0)
                break;

            *VAR_6 = VAR_7;
            VAR_6 += 1;
        }
    }

    FUNC_1(VAR_5);
    return VAR_3;
}
