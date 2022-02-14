
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(int64_t *VAR_1, int *VAR_2, const uint8_t *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    const uint8_t *VAR_7;
    unsigned int VAR_8;

    VAR_4 = (VAR_3[3] >> 4) & 3;
    if (VAR_4 <= 1)
        return VAR_0;
    VAR_7 = VAR_3 + 4;
    VAR_5 = VAR_7[0];
    VAR_7++;
    if (VAR_5 == 0)
        return VAR_0;
    VAR_6 = *VAR_7++;
    VAR_5--;
    if (!(VAR_6 & 0x10))
        return VAR_0;
    if (VAR_5 < 6)
        return VAR_0;
    VAR_8 = FUNC_0(VAR_7);
    *VAR_1 = ((int64_t) VAR_8 << 1) | (VAR_7[4] >> 7);
    *VAR_2 = ((VAR_7[4] & 1) << 8) | VAR_7[5];
    return 0;
}
