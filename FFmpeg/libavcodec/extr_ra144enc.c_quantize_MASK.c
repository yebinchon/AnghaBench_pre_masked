
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static int FUNC_0(int VAR_0, const int16_t *VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3 = 0, VAR_4 = VAR_2 - 1;

    while (1) {
        int VAR_5 = (VAR_3 + VAR_4) >> 1;
        int VAR_6 = VAR_1[VAR_5] - VAR_0;

        if (VAR_5 == VAR_3)
            return VAR_1[VAR_4] + VAR_6 > VAR_0 ? VAR_3 : VAR_4;
        if (VAR_6 > 0) {
            VAR_4 = VAR_5;
        } else {
            VAR_3 = VAR_5;
        }
    }
}
