
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*,scalar_t__*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__*) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_3, uint8_t VAR_4, uint32_t *VAR_5, int64_t *VAR_6, int64_t *VAR_7)
{
    uint32_t VAR_8 = 0;
    int64_t VAR_9 = 0;
    int32_t VAR_10 = VAR_1;


    VAR_10 = FUNC_1(VAR_3, &VAR_8);
    if (VAR_8 != VAR_2)
        VAR_10 = VAR_0;
    if (VAR_10 == VAR_1)
        VAR_10 = FUNC_1(VAR_3, &VAR_8);
    if ((VAR_10 == VAR_1) && (VAR_5 != ((void*)0)))
        *VAR_5 = VAR_8;
    if (VAR_10 == VAR_1)
    {

        if (!VAR_4)
        {
            VAR_10 = FUNC_1(VAR_3, &VAR_8);
            VAR_9 = VAR_8;
        }
        else
        {
            VAR_10 = FUNC_0(VAR_3, &VAR_9);
            if (VAR_9 < 0)
                VAR_10 = VAR_0;
        }
        if ((VAR_10 == VAR_1) && (VAR_6 != ((void*)0)))
            *VAR_6 = VAR_9;
    }
    if (VAR_10 == VAR_1)
    {
        if (!VAR_4)
        {
            VAR_10 = FUNC_1(VAR_3, &VAR_8);
            VAR_9 = VAR_8;
        }
        else
        {
            VAR_10 = FUNC_0(VAR_3, &VAR_9);
            if (VAR_9 < 0)
                VAR_10 = VAR_0;
        }
        if ((VAR_10 == VAR_1) && (VAR_7 != ((void*)0)))
            *VAR_7 = VAR_9;
    }

    return VAR_10;
}
