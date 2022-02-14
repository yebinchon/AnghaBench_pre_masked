
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int*,int) ;
 int VAR_2 ;
 int* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*,int const*,int) ;

int FUNC_7(const uint8_t *VAR_3, uint8_t **VAR_4, int *VAR_5)
{
    uint16_t VAR_6, VAR_7;
    uint8_t *VAR_8;
    int VAR_9;

    *VAR_4 = ((void*)0);
    if (*VAR_5 >= 4 && (FUNC_3(VAR_3) == 0x00000001 || FUNC_2(VAR_3) == 0x000001))
        return 0;
    if (*VAR_5 < 11 || VAR_3[0] != 1)
        return VAR_0;

    VAR_6 = FUNC_1(&VAR_3[6]);
    if (11 + VAR_6 > *VAR_5)
        return VAR_0;
    VAR_7 = FUNC_1(&VAR_3[9 + VAR_6]);
    if (11 + VAR_6 + VAR_7 > *VAR_5)
        return VAR_0;
    VAR_9 = 8 + VAR_6 + VAR_7;
    VAR_8 = FUNC_5(VAR_9 + VAR_1);
    if (!VAR_8)
        return FUNC_0(VAR_2);
    FUNC_4(&VAR_8[0], 0x00000001);
    FUNC_6(VAR_8 + 4, &VAR_3[8], VAR_6);
    FUNC_4(&VAR_8[4 + VAR_6], 0x00000001);
    FUNC_6(VAR_8 + 8 + VAR_6, &VAR_3[11 + VAR_6], VAR_7);
    *VAR_4 = VAR_8;
    *VAR_5 = VAR_9;
    return 0;
}
