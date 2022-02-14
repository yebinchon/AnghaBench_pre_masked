
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const uint8_t * VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = 0;
    int VAR_4 = 28;
    if (VAR_1 < 28)
        return -1;

    if (FUNC_0(VAR_0) == 0xf8726fba) {
        VAR_2 = VAR_0[25] & 1;
        if (VAR_2) {
            VAR_3 = VAR_0[26] >> 4;
            VAR_4 += 2 + VAR_3 * 2;
        }
    }
    return VAR_4;
}
