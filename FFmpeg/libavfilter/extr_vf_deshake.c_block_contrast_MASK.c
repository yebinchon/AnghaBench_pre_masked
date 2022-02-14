
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = 255;
    int VAR_7, VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 <= VAR_4 * 2; VAR_7++) {

        for (VAR_8 = 0; VAR_8 <= 15; VAR_8++) {
            VAR_9 = (VAR_2 + VAR_7) * VAR_3 + (VAR_1 + VAR_8);
            if (VAR_0[VAR_9] < VAR_6)
                VAR_6 = VAR_0[VAR_9];
            else if (VAR_0[VAR_9] > VAR_5) {
                VAR_5 = VAR_0[VAR_9];
            }
        }
    }

    return VAR_5 - VAR_6;
}
