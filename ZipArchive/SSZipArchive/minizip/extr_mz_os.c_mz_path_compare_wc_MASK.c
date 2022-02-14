
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;

int32_t FUNC_1(const char *VAR_2, const char *VAR_3, uint8_t VAR_4)
{
    while (*VAR_2 != 0)
    {
        switch (*VAR_3)
        {
        case '*':

            if (*(VAR_3 + 1) == 0)
                return VAR_1;

            while (*VAR_2 != 0)
            {
                if (FUNC_1(VAR_2, (VAR_3 + 1), VAR_4) == VAR_1)
                    return VAR_1;

                VAR_2 += 1;
            }

            return VAR_0;

        default:

            if ((*VAR_2 == '\\' && *VAR_3 == '/') || (*VAR_2 == '/' && *VAR_3 == '\\'))
                break;

            if (VAR_4)
            {
                if (FUNC_0(*VAR_2) != FUNC_0(*VAR_3))
                    return VAR_0;
            }
            else
            {
                if (*VAR_2 != *VAR_3)
                    return VAR_0;
            }

            break;
        }

        VAR_2 += 1;
        VAR_3 += 1;
    }

    if ((*VAR_3 != 0) && (*VAR_3 != '*'))
        return VAR_0;

    return VAR_1;
}
