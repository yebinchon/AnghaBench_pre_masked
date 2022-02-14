
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    if (VAR_0 == VAR_1) {
        VAR_3 = VAR_0;
    } else if (VAR_2 == 0) {
        VAR_3 = VAR_0;
    } else if (VAR_2 == 1) {
        VAR_3 = VAR_1;
    } else {
        if (VAR_0 > VAR_1) {
            VAR_3 = (uint8_t) (((8 - VAR_2) * VAR_0 +
                             (VAR_2 - 1) * VAR_1) / 7);
        } else {
            if (VAR_2 == 6) {
                VAR_3 = 0;
            } else if (VAR_2 == 7) {
                VAR_3 = 255;
            } else {
                VAR_3 = (uint8_t) (((6 - VAR_2) * VAR_0 +
                                 (VAR_2 - 1) * VAR_1) / 5);
            }
        }
    }

    return VAR_3;
}
