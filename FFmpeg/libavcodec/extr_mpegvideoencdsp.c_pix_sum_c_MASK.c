
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, int VAR_1)
{
    int VAR_2 = 0, VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
        for (VAR_4 = 0; VAR_4 < 16; VAR_4 += 8) {
            VAR_2 += VAR_0[0];
            VAR_2 += VAR_0[1];
            VAR_2 += VAR_0[2];
            VAR_2 += VAR_0[3];
            VAR_2 += VAR_0[4];
            VAR_2 += VAR_0[5];
            VAR_2 += VAR_0[6];
            VAR_2 += VAR_0[7];
            VAR_0 += 8;
        }
        VAR_0 += VAR_1 - 16;
    }
    return VAR_2;
}
