
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int const) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
    static const unsigned int VAR_3[9][2] = {
        { 8332, 3 * 715827883U },
        { 4545, 0 * 390451573U },
        { 3124, 11 * 268435456U },
        { 2380, 15 * 204522253U },
        { 1922, 23 * 165191050U },
        { 1612, 23 * 138547333U },
        { 1388, 27 * 119304648U },
        { 1219, 16 * 104755300U },
        { 1086, 39 * 93368855U }
    };
    unsigned int VAR_4, VAR_5, VAR_6 = FUNC_0(VAR_1, 1877) + VAR_0;
    if (VAR_6 >= 0xFFFF) VAR_6 -= 0xFFFF;

    VAR_5 = VAR_6 - 9 * FUNC_1(477218589, VAR_6);
    VAR_4 = (uint16_t) (VAR_6 * VAR_3[VAR_5][0] + FUNC_2(VAR_6, VAR_3[VAR_5][1]));

    return VAR_4 % (1000 - VAR_2);
}
