
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t **VAR_0, uint8_t **VAR_1,
                       uint8_t **VAR_2, uint8_t **VAR_3,
                       int VAR_4, int VAR_5, int VAR_6,
                       uint8_t *VAR_7,
                       int *VAR_8, int *VAR_9, int *VAR_10, int VAR_11, int VAR_12)
{
    uint8_t *VAR_13 = *VAR_0;
    uint8_t *VAR_14 = *VAR_1;
    uint8_t *VAR_15 = *VAR_2;
    uint8_t *VAR_16 = *VAR_3;
    int VAR_17 = *VAR_8, VAR_18 = *VAR_9, VAR_19 = *VAR_10;

    if (VAR_19 == 0) {
        VAR_13[2*VAR_17+0] += VAR_7[0];
        VAR_13[2*VAR_17+1] += VAR_7[1];
        VAR_14[2*VAR_17+0] += VAR_7[2];
        VAR_14[2*VAR_17+1] += VAR_7[3];
        VAR_19++;
    } else if (VAR_19 == 1) {
        VAR_15[VAR_17] += VAR_7[0];
        VAR_16[VAR_17] += VAR_7[1];
        VAR_17++;
        if (VAR_17 >= VAR_11) {
            VAR_17 = 0;
            VAR_18++;
            if (VAR_18 >= VAR_12)
                return 1;
            VAR_13 -= 2*VAR_4;
            VAR_14 -= 2*VAR_4;
            VAR_15 -= VAR_5;
            VAR_16 -= VAR_6;
        }
        VAR_13[2*VAR_17+0] += VAR_7[2];
        VAR_13[2*VAR_17+1] += VAR_7[3];
        VAR_19++;
    } else if (VAR_19 == 2) {
        VAR_14[2*VAR_17+0] += VAR_7[0];
        VAR_14[2*VAR_17+1] += VAR_7[1];
        VAR_15[VAR_17] += VAR_7[2];
        VAR_16[VAR_17] += VAR_7[3];
        VAR_17++;
        if (VAR_17 >= VAR_11) {
            VAR_17 = 0;
            VAR_18++;
            if (VAR_18 >= VAR_12)
                return 1;
            VAR_13 -= 2*VAR_4;
            VAR_14 -= 2*VAR_4;
            VAR_15 -= VAR_5;
            VAR_16 -= VAR_6;
        }
        VAR_19 = 0;
    }

    *VAR_0 = VAR_13;
    *VAR_1 = VAR_14;
    *VAR_2 = VAR_15;
    *VAR_3 = VAR_16;
    *VAR_10 = VAR_19;
    *VAR_8 = VAR_17;
    *VAR_9 = VAR_18;

    return 0;
}
