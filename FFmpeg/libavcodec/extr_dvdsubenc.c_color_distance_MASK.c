
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int FUNC_0(uint32_t VAR_0, uint32_t VAR_1)
{
    int VAR_2 = 0, VAR_3, VAR_4;
    int VAR_5 = 8, VAR_6 = 8;

    for (VAR_4 = 24; VAR_4 >= 0; VAR_4 -= 8) {
        VAR_3 = VAR_5 * (int)((VAR_0 >> VAR_4) & 0xFF) -
            VAR_6 * (int)((VAR_1 >> VAR_4) & 0xFF);
        VAR_2 += VAR_3 * VAR_3;
        VAR_5 = VAR_0 >> 28;
        VAR_6 = VAR_1 >> 28;
    }
    return VAR_2;
}
