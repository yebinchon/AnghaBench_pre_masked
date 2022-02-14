
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int32_t FUNC_0(const char *VAR_3, char *VAR_4, int32_t VAR_5)
{
    const char *VAR_6 = VAR_3;
    const char *VAR_7 = VAR_4;
    char *VAR_8 = VAR_4;

    if (VAR_5 <= 0)
        return VAR_2;

    while (*VAR_6 != 0 && VAR_5 > 1)
    {
        VAR_7 = VAR_6;
        if ((*VAR_7 == '\\') || (*VAR_7 == '/'))
            VAR_7 += 1;

        if ((VAR_6 == VAR_3) || (VAR_7 != VAR_6))
        {

            if ((*VAR_7 == '\\') || (*VAR_7 == '/'))
            {
                VAR_6 += 1;
                continue;
            }
            if ((*VAR_7 != 0) && (*VAR_7 == '.'))
            {
                VAR_7 += 1;


                if ((*VAR_7 == 0) && (VAR_6 != VAR_3))
                {

                    *VAR_8 = *VAR_6;
                    VAR_8 += 1;
                    VAR_5 -= 1;
                    VAR_6 += (VAR_7 - VAR_6);
                    continue;
                }


                if ((*VAR_7 == 0) || (*VAR_7 == '\\' || *VAR_7 == '/'))
                {

                    if (VAR_7[1] != 0 || (VAR_3 != VAR_6))
                    {
                        VAR_6 += (VAR_7 - VAR_6);
                        continue;
                    }
                }


                if ((*VAR_7 != 0) || (*VAR_7 == '.'))
                {
                    VAR_7 += 1;
                    if ((*VAR_7 == 0) || (*VAR_7 == '\\' || *VAR_7 == '/'))
                    {
                        VAR_6 += (VAR_7 - VAR_6);


                        if (VAR_8 != VAR_4)
                        {
                            VAR_8 -= 1;
                            do
                            {
                                if ((*VAR_8 == '\\') || (*VAR_8 == '/'))
                                    break;

                                VAR_8 -= 1;
                                VAR_5 += 1;
                            }
                            while (VAR_8 > VAR_4);
                        }

                        if ((VAR_8 == VAR_4) && (*VAR_6 != 0))
                            VAR_6 += 1;
                        if ((*VAR_8 == '\\' || *VAR_8 == '/') && (*VAR_6 == 0))
                            VAR_8 += 1;

                        *VAR_8 = 0;
                        continue;
                    }
                }
            }
        }

        *VAR_8 = *VAR_6;

        VAR_6 += 1;
        VAR_8 += 1;
        VAR_5 -= 1;
    }

    *VAR_8 = 0;

    if (*VAR_3 == 0)
        return VAR_0;

    return VAR_1;
}
