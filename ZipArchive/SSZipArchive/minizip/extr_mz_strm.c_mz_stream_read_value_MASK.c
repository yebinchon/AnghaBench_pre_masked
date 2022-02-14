
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int32_t FUNC_2(void *VAR_3, uint64_t *VAR_4, int32_t VAR_5)
{
    uint8_t VAR_6[8];
    int32_t VAR_7 = 0;
    int32_t VAR_8 = 0;

    *VAR_4 = 0;
    if (FUNC_1(VAR_3, VAR_6, VAR_5) == VAR_5)
    {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += 1, VAR_8 += 8)
            *VAR_4 += ((uint64_t)VAR_6[VAR_7]) << VAR_8;
    }
    else if (FUNC_0(VAR_3))
        return VAR_2;
    else
        return VAR_0;

    return VAR_1;
}
