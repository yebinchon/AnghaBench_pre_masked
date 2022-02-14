
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int*,int) ;

__attribute__((used)) static int32_t FUNC_1(void *VAR_2, uint64_t VAR_3, int32_t VAR_4)
{
    uint8_t VAR_5[8];
    int32_t VAR_6 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += 1)
    {
        VAR_5[VAR_6] = (uint8_t)(VAR_3 & 0xff);
        VAR_3 >>= 8;
    }

    if (VAR_3 != 0)
    {

        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6 += 1)
            VAR_5[VAR_6] = 0xff;
    }

    if (FUNC_0(VAR_2, VAR_5, VAR_4) != VAR_4)
        return VAR_1;

    return VAR_0;
}
