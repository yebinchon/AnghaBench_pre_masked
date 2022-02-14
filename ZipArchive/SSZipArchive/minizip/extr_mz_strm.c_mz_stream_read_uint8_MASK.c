
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*,scalar_t__*,int) ;

int32_t FUNC_1(void *VAR_1, uint8_t *VAR_2)
{
    int32_t VAR_3 = VAR_0;
    uint64_t VAR_4 = 0;

    *VAR_2 = 0;
    VAR_3 = FUNC_0(VAR_1, &VAR_4, sizeof(uint8_t));
    if (VAR_3 == VAR_0)
        *VAR_2 = (uint8_t)VAR_4;
    return VAR_3;
}
