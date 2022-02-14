
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int*,void const*,scalar_t__) ;
 int FUNC_1 (int*,int*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*,int*,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (void*) ;

int32_t FUNC_5(void *VAR_5, const void *VAR_6, int32_t VAR_7, int64_t VAR_8, int64_t *VAR_9)
{
    uint8_t VAR_10[VAR_4];
    int32_t VAR_11 = 0;
    int32_t VAR_12 = sizeof(VAR_10);
    int32_t VAR_13 = 0;
    int64_t VAR_14 = 0;
    int64_t VAR_15 = 0;
    int64_t VAR_16 = 0;
    int32_t VAR_17 = 0;
    uint8_t VAR_18 = 1;
    int32_t VAR_19 = VAR_1;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_9 == ((void*)0))
        return VAR_2;
    if (VAR_7 < 0 || VAR_7 >= (int32_t)sizeof(VAR_10))
        return VAR_2;

    *VAR_9 = -1;

    VAR_15 = FUNC_4(VAR_5);

    while (VAR_14 < VAR_8)
    {
        if (VAR_12 > (int32_t)(VAR_8 - VAR_14 - VAR_11))
            VAR_12 = (int32_t)(VAR_8 - VAR_14 - VAR_11);

        VAR_13 = FUNC_2(VAR_5, VAR_10 + VAR_11, VAR_12);
        if ((VAR_13 < 0) || (VAR_13 + VAR_11 < VAR_7))
            break;

        for (VAR_17 = 0; VAR_17 <= VAR_13 + VAR_11 - VAR_7; VAR_17 += 1)
        {
            if (FUNC_0(&VAR_10[VAR_17], VAR_6, VAR_7) != 0)
                continue;

            VAR_16 = FUNC_4(VAR_5);


            VAR_19 = FUNC_3(VAR_5, VAR_16 - ((int64_t)VAR_13 + VAR_11 - VAR_17), VAR_3);
            if (VAR_19 != VAR_1)
                return VAR_0;

            *VAR_9 = VAR_15 + VAR_14 + VAR_17;
            return VAR_1;
        }

        if (VAR_18)
        {
            VAR_13 -= VAR_7;
            VAR_12 -= VAR_7;
            VAR_11 = VAR_7;
            VAR_18 = 0;
        }

        FUNC_1(VAR_10, VAR_10 + VAR_13, VAR_7);
        VAR_14 += VAR_13;
    }

    return VAR_0;
}
