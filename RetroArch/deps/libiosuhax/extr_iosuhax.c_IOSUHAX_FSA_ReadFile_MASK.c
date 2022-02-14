
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int*,int,int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (void*,int *,int) ;

int FUNC_4(int VAR_2, void* VAR_3, uint32_t VAR_4, uint32_t VAR_5, int VAR_6, uint32_t VAR_7)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3)
        return -1;

    const int VAR_8 = 5;

    int VAR_9 = sizeof(uint32_t) * VAR_8;

    uint32_t *VAR_10 = (uint32_t*)FUNC_2(0x20, VAR_9);
    if(!VAR_10)
        return -2;

    VAR_10[0] = VAR_2;
    VAR_10[1] = VAR_4;
    VAR_10[2] = VAR_5;
    VAR_10[3] = VAR_6;
    VAR_10[4] = VAR_7;

    int VAR_11 = ((VAR_4 * VAR_5 + 0x40) + 0x3F) & ~0x3F;

    uint32_t *VAR_12 = (uint32_t*)FUNC_2(0x40, VAR_11);
    if(!VAR_12)
    {
        FUNC_1(VAR_10);
        return -2;
    }

    int VAR_13 = FUNC_0(VAR_1, VAR_0, VAR_10, VAR_9, VAR_12, VAR_11);
    if(VAR_13 < 0)
    {
        FUNC_1(VAR_12);
        FUNC_1(VAR_10);
        return VAR_13;
    }


    FUNC_3(VAR_3, ((uint8_t*)VAR_12) + 0x40, VAR_4 * VAR_5);

    int VAR_14 = VAR_12[0];

    FUNC_1(VAR_12);
    FUNC_1(VAR_10);
    return VAR_14;
}
